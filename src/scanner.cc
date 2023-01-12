// NOTE: Inspired by https://github.com/tree-sitter/tree-sitter-python
#include <tree_sitter/parser.h>
#include <iostream>
#include <vector>

namespace {

using std::vector;

enum TokenType {
  NEWLINE,
  INDENT,
  DEDENT,
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
    std::cout << "[DEBUG] serialize()\n";
    buffer[0] = indent_level;
    return 1;
  }

  // Restore state from buffer. This will be called *before* `scan`.
  void deserialize(const char *buffer, unsigned length) {
    std::cout << "[DEBUG] deserialize()\n";

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
    std::cout << "[DEBUG] scan()\n";
    std::cout << "[DEBUG] " << "col: " << lexer->get_column(lexer) << "\n";
    std::cout << "[DEBUG] " << "next: " << lexer->lookahead << "\n";

    consume_whitespace(lexer);
    lexer->mark_end(lexer);

    // NOTE: This is simplistic/wonky/incorrect/etc (WIP)
    if (lexer->lookahead == '\n') {
      std::cout << "[DEBUG] " << "found NEWLINE @ " << lexer->get_column(lexer) + 1 << "\n";
      advance(lexer);
      uint8_t count = consume_whitespace(lexer);
      if (count == 4) {
          indent_level += 1;
          lexer->result_symbol = INDENT;
          return true;
      } else {
          indent_level -= 1;
          lexer->result_symbol = DEDENT;
          return true;
      }
    }

    return false;
  }

  uint8_t consume_whitespace(TSLexer *lexer) {
    uint8_t count = 0;
    while (lexer->lookahead == ' ') {
      std::cout << "[DEBUG] " << "skip space\n";
      skip(lexer);
      ++count;
    }
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
