// NOTE: Inspired by https://github.com/tree-sitter/tree-sitter-python
#include <tree_sitter/parser.h>
#include <iostream>
#include <vector>

namespace {

using std::vector;

template <class T>
void _debug(T t) {
  std::cerr << t << std::endl;
}

template <class T, class... Args>
void _debug(T t, Args... args) {
  std::cerr << t;
  _debug(args...);
}

template <class... Args>
void debug(Args... args) {
  std::cerr << std::boolalpha;
  std::cerr << "[DEBUG] ";
  _debug(args...);
}


enum TokenType {
  SCOPE_START,
  FUNC_SCOPE_START,
  NEWLINE,
  INDENT,
  DEDENT,
  ERROR_SENTINEL,
};

enum Bracket {
  LPAREN,    // (
  LBRACKET,  // [
  LBRACE,    // {
};

struct Scanner {
  Scanner() {
    reset();
  }

  void reset() {
    indent_level = 0;
    bracket_stack.clear();
  }

  // Save state to buffer when `scan` recognizes a token. This will be
  // called *after* `scan` (if it returns `true`).
  unsigned serialize(char *buffer) {
    buffer[0] = indent_level;
    return 1;
  }

  // Restore state from buffer. This will be called *before* `scan`.
  void deserialize(const char *buffer, unsigned length) {
    // XXX: Always reset state first.
    reset();

    if (length == 0) {
      return;
    }

    indent_level = buffer[0];
  }

  // This is called when an external token is referenced in a grammar
  // rule. It looks at the upcoming chars and decides if they should be
  // handled as an external token.
  //
  // As an example, when parsing the following:
  //
  //     block ->
  //         nil
  //
  // tree-sitter will first recognize `block` and `->` and then it will
  // call this method.
  bool scan(TSLexer *lexer, const bool *valid_symbols) {
    debug("scan()");
    debug("col: ", lexer->get_column(lexer));
    debug("next: '", (char)lexer->lookahead, "'");

    consume_whitespace(lexer);

    if (lexer->eof(lexer)) {
      debug("EOF in scan");
      lexer->result_symbol = NEWLINE;
      return true;
    }

    if (lexer->lookahead == '-') {
        advance(lexer);
        if (lexer->lookahead == '>') {
          advance(lexer);
          lexer->result_symbol = SCOPE_START;
          debug("result_symbol = SCOPE_START");
          return true;
        }
    } else if (lexer->lookahead == '\n') {
        advance(lexer);
        lexer->result_symbol = NEWLINE;
        debug("result_symbol = NEWLINE");
        return true;
    }

    debug("no match");
    return false;
  }

  uint8_t consume_whitespace(TSLexer *lexer) {
    uint8_t count = 0;
    while (lexer->lookahead == ' ') {
      skip(lexer);
      ++count;
    }
    debug("consumed ", (int)count, " space(s)");
    return count;
  }

  void advance(TSLexer *lexer) {
      lexer->advance(lexer, false);
  }

  void skip(TSLexer *lexer) {
      lexer->advance(lexer, true);
  }

  uint8_t indent_level;
  vector<Bracket> bracket_stack;
};

} // namespace

extern "C" {

void * tree_sitter_feint_external_scanner_create() {
  // TODO:
  return new Scanner();
}

void tree_sitter_feint_external_scanner_destroy(void *payload) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  delete scanner;
}

unsigned tree_sitter_feint_external_scanner_serialize(void *payload, char *buffer) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->serialize(buffer);
}

void tree_sitter_feint_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  scanner->deserialize(buffer, length);
}

bool tree_sitter_feint_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {
  Scanner *scanner = static_cast<Scanner *>(payload);
  return scanner->scan(lexer, valid_symbols);
}

} // extern "C"
