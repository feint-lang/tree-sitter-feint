#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 11
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_break = 1,
  anon_sym_continue = 2,
  sym_ident = 3,
  anon_sym_nil = 4,
  anon_sym_true = 5,
  anon_sym_false = 6,
  anon_sym_EQ = 7,
  anon_sym_DASH_GT = 8,
  anon_sym_block = 9,
  anon_sym_EQ_GT = 10,
  anon_sym_LPAREN = 11,
  anon_sym_COMMA = 12,
  anon_sym_RPAREN = 13,
  sym__newline = 14,
  sym__indent = 15,
  sym__dedent = 16,
  sym_source_file = 17,
  sym__statement = 18,
  sym__expr = 19,
  sym_literal = 20,
  sym_assignment = 21,
  sym_suite = 22,
  sym_inline_suite = 23,
  sym_block = 24,
  sym_inline_func_suite = 25,
  sym_func = 26,
  sym_params = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_params_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_break] = "break",
  [anon_sym_continue] = "continue",
  [sym_ident] = "ident",
  [anon_sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_block] = "block",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expr] = "_expr",
  [sym_literal] = "literal",
  [sym_assignment] = "assignment",
  [sym_suite] = "suite",
  [sym_inline_suite] = "inline_suite",
  [sym_block] = "block",
  [sym_inline_func_suite] = "inline_func_suite",
  [sym_func] = "func",
  [sym_params] = "params",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_break] = anon_sym_break,
  [anon_sym_continue] = anon_sym_continue,
  [sym_ident] = sym_ident,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expr] = sym__expr,
  [sym_literal] = sym_literal,
  [sym_assignment] = sym_assignment,
  [sym_suite] = sym_suite,
  [sym_inline_suite] = sym_inline_suite,
  [sym_block] = sym_block,
  [sym_inline_func_suite] = sym_inline_func_suite,
  [sym_func] = sym_func,
  [sym_params] = sym_params,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_params_repeat1] = aux_sym_params_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_break] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_continue] = {
    .visible = true,
    .named = false,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_nil] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_suite] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_suite] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_func_suite] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_params_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 2,
  [4] = 4,
  [5] = 5,
  [6] = 4,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 7,
  [11] = 11,
  [12] = 12,
  [13] = 12,
  [14] = 11,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 18,
  [23] = 23,
  [24] = 21,
  [25] = 23,
  [26] = 20,
  [27] = 19,
  [28] = 28,
  [29] = 28,
  [30] = 17,
  [31] = 31,
  [32] = 31,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == ',') ADVANCE(44);
      if (lookahead == '-') ADVANCE(3);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == 'b') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 3:
      if (lookahead == '>') ADVANCE(40);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '(') ADVANCE(43);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead == 'b') ADVANCE(23);
      if (lookahead == 'c') ADVANCE(27);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(18);
      if (lookahead == 't') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(21);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'a') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'c') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'e') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'i') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'k') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'k') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(28);
      if (lookahead == 'r') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'l') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'n') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'o') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'r') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 's') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 't') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (lookahead == 'u') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '_') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(34);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 6, .external_lex_state = 2},
  [17] = {.lex_state = 0, .external_lex_state = 2},
  [18] = {.lex_state = 0, .external_lex_state = 2},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0, .external_lex_state = 2},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0, .external_lex_state = 2},
  [27] = {.lex_state = 0, .external_lex_state = 2},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 2},
  [39] = {.lex_state = 2},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 2},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
};

enum {
  ts_external_token__newline = 0,
  ts_external_token__indent = 1,
  ts_external_token__dedent = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [anon_sym_continue] = ACTIONS(1),
    [sym_ident] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(43),
    [sym__statement] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_literal] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_block] = STATE(5),
    [sym_func] = STATE(5),
    [sym_params] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(5),
    [anon_sym_continue] = ACTIONS(5),
    [sym_ident] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [2] = {
    [sym__statement] = STATE(4),
    [sym__expr] = STATE(4),
    [sym_literal] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_block] = STATE(4),
    [sym_func] = STATE(4),
    [sym_params] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [sym_ident] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__dedent] = ACTIONS(23),
  },
  [3] = {
    [sym__statement] = STATE(4),
    [sym__expr] = STATE(4),
    [sym_literal] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_block] = STATE(4),
    [sym_func] = STATE(4),
    [sym_params] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_break] = ACTIONS(15),
    [anon_sym_continue] = ACTIONS(15),
    [sym_ident] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__dedent] = ACTIONS(25),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym__expr] = STATE(4),
    [sym_literal] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_block] = STATE(4),
    [sym_func] = STATE(4),
    [sym_params] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(4),
    [anon_sym_break] = ACTIONS(27),
    [anon_sym_continue] = ACTIONS(27),
    [sym_ident] = ACTIONS(30),
    [anon_sym_nil] = ACTIONS(33),
    [anon_sym_true] = ACTIONS(33),
    [anon_sym_false] = ACTIONS(33),
    [anon_sym_block] = ACTIONS(36),
    [anon_sym_LPAREN] = ACTIONS(39),
    [sym__dedent] = ACTIONS(42),
  },
  [5] = {
    [sym__statement] = STATE(6),
    [sym__expr] = STATE(6),
    [sym_literal] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_block] = STATE(6),
    [sym_func] = STATE(6),
    [sym_params] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(44),
    [anon_sym_break] = ACTIONS(46),
    [anon_sym_continue] = ACTIONS(46),
    [sym_ident] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym__expr] = STATE(6),
    [sym_literal] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_block] = STATE(6),
    [sym_func] = STATE(6),
    [sym_params] = STATE(37),
    [aux_sym_source_file_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(42),
    [anon_sym_break] = ACTIONS(48),
    [anon_sym_continue] = ACTIONS(48),
    [sym_ident] = ACTIONS(51),
    [anon_sym_nil] = ACTIONS(54),
    [anon_sym_true] = ACTIONS(54),
    [anon_sym_false] = ACTIONS(54),
    [anon_sym_block] = ACTIONS(57),
    [anon_sym_LPAREN] = ACTIONS(39),
  },
  [7] = {
    [sym__statement] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_block] = STATE(3),
    [sym_func] = STATE(3),
    [sym_params] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_break] = ACTIONS(60),
    [anon_sym_continue] = ACTIONS(60),
    [sym_ident] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [8] = {
    [sym__statement] = STATE(20),
    [sym__expr] = STATE(20),
    [sym_literal] = STATE(20),
    [sym_assignment] = STATE(20),
    [sym_block] = STATE(20),
    [sym_func] = STATE(20),
    [sym_params] = STATE(37),
    [anon_sym_break] = ACTIONS(62),
    [anon_sym_continue] = ACTIONS(62),
    [sym_ident] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__indent] = ACTIONS(64),
  },
  [9] = {
    [sym__statement] = STATE(26),
    [sym__expr] = STATE(26),
    [sym_literal] = STATE(26),
    [sym_assignment] = STATE(26),
    [sym_block] = STATE(26),
    [sym_func] = STATE(26),
    [sym_params] = STATE(40),
    [anon_sym_break] = ACTIONS(66),
    [anon_sym_continue] = ACTIONS(66),
    [sym_ident] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__indent] = ACTIONS(68),
  },
  [10] = {
    [sym__statement] = STATE(2),
    [sym__expr] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_block] = STATE(2),
    [sym_func] = STATE(2),
    [sym_params] = STATE(40),
    [aux_sym_source_file_repeat1] = STATE(2),
    [anon_sym_break] = ACTIONS(70),
    [anon_sym_continue] = ACTIONS(70),
    [sym_ident] = ACTIONS(17),
    [anon_sym_nil] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(19),
    [anon_sym_false] = ACTIONS(19),
    [anon_sym_block] = ACTIONS(21),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_block,
    STATE(40), 1,
      sym_params,
    ACTIONS(19), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(24), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [25] = 6,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_block,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_params,
    ACTIONS(9), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(19), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [50] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      sym_ident,
    ACTIONS(21), 1,
      anon_sym_block,
    STATE(40), 1,
      sym_params,
    ACTIONS(19), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(27), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [75] = 6,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_block,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(37), 1,
      sym_params,
    ACTIONS(9), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(21), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [100] = 3,
    ACTIONS(76), 1,
      anon_sym_EQ,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(74), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [117] = 3,
    ACTIONS(78), 1,
      anon_sym_EQ,
    ACTIONS(72), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(74), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [134] = 2,
    ACTIONS(82), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(80), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [148] = 2,
    ACTIONS(86), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(84), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [162] = 2,
    ACTIONS(88), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(90), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [176] = 2,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(94), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [190] = 2,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(98), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [204] = 2,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(84), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [218] = 2,
    ACTIONS(102), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(100), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [232] = 2,
    ACTIONS(96), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(98), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [246] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(100), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [260] = 2,
    ACTIONS(92), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(94), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [274] = 2,
    ACTIONS(88), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(90), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [288] = 2,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(106), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [302] = 2,
    ACTIONS(104), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(106), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [316] = 2,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(80), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [330] = 2,
    ACTIONS(108), 1,
      anon_sym_DASH_GT,
    STATE(30), 2,
      sym_suite,
      sym_inline_suite,
  [338] = 2,
    ACTIONS(110), 1,
      anon_sym_DASH_GT,
    STATE(17), 2,
      sym_suite,
      sym_inline_suite,
  [346] = 3,
    ACTIONS(112), 1,
      anon_sym_COMMA,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_params_repeat1,
  [356] = 3,
    ACTIONS(116), 1,
      anon_sym_COMMA,
    ACTIONS(119), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      aux_sym_params_repeat1,
  [366] = 3,
    ACTIONS(121), 1,
      anon_sym_COMMA,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(33), 1,
      aux_sym_params_repeat1,
  [376] = 1,
    ACTIONS(119), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [381] = 2,
    ACTIONS(125), 1,
      anon_sym_EQ_GT,
    STATE(22), 1,
      sym_inline_func_suite,
  [388] = 2,
    ACTIONS(114), 1,
      anon_sym_RPAREN,
    ACTIONS(127), 1,
      sym_ident,
  [395] = 2,
    ACTIONS(127), 1,
      sym_ident,
    ACTIONS(129), 1,
      anon_sym_RPAREN,
  [402] = 2,
    ACTIONS(131), 1,
      anon_sym_EQ_GT,
    STATE(18), 1,
      sym_inline_func_suite,
  [409] = 2,
    ACTIONS(133), 1,
      sym_ident,
    ACTIONS(135), 1,
      anon_sym_RPAREN,
  [416] = 1,
    ACTIONS(137), 1,
      anon_sym_EQ_GT,
  [420] = 1,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
  [424] = 1,
    ACTIONS(127), 1,
      sym_ident,
  [428] = 1,
    ACTIONS(141), 1,
      anon_sym_EQ_GT,
  [432] = 1,
    ACTIONS(143), 1,
      anon_sym_EQ_GT,
  [436] = 1,
    ACTIONS(145), 1,
      anon_sym_EQ_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(11)] = 0,
  [SMALL_STATE(12)] = 25,
  [SMALL_STATE(13)] = 50,
  [SMALL_STATE(14)] = 75,
  [SMALL_STATE(15)] = 100,
  [SMALL_STATE(16)] = 117,
  [SMALL_STATE(17)] = 134,
  [SMALL_STATE(18)] = 148,
  [SMALL_STATE(19)] = 162,
  [SMALL_STATE(20)] = 176,
  [SMALL_STATE(21)] = 190,
  [SMALL_STATE(22)] = 204,
  [SMALL_STATE(23)] = 218,
  [SMALL_STATE(24)] = 232,
  [SMALL_STATE(25)] = 246,
  [SMALL_STATE(26)] = 260,
  [SMALL_STATE(27)] = 274,
  [SMALL_STATE(28)] = 288,
  [SMALL_STATE(29)] = 302,
  [SMALL_STATE(30)] = 316,
  [SMALL_STATE(31)] = 330,
  [SMALL_STATE(32)] = 338,
  [SMALL_STATE(33)] = 346,
  [SMALL_STATE(34)] = 356,
  [SMALL_STATE(35)] = 366,
  [SMALL_STATE(36)] = 376,
  [SMALL_STATE(37)] = 381,
  [SMALL_STATE(38)] = 388,
  [SMALL_STATE(39)] = 395,
  [SMALL_STATE(40)] = 402,
  [SMALL_STATE(41)] = 409,
  [SMALL_STATE(42)] = 416,
  [SMALL_STATE(43)] = 420,
  [SMALL_STATE(44)] = 424,
  [SMALL_STATE(45)] = 428,
  [SMALL_STATE(46)] = 432,
  [SMALL_STATE(47)] = 436,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(16),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(6),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(28),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_suite, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_suite, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func_suite, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func_suite, 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suite, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suite, 4),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(44),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [139] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [145] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_feint_external_scanner_create(void);
void tree_sitter_feint_external_scanner_destroy(void *);
bool tree_sitter_feint_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_feint_external_scanner_serialize(void *, char *);
void tree_sitter_feint_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_feint(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_feint_external_scanner_create,
      tree_sitter_feint_external_scanner_destroy,
      tree_sitter_feint_external_scanner_scan,
      tree_sitter_feint_external_scanner_serialize,
      tree_sitter_feint_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
