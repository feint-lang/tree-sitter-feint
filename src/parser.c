#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 69
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 6
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
  anon_sym_block = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  sym__scope_start = 12,
  sym__func_scope_start = 13,
  sym__newline = 14,
  sym__indent = 15,
  sym__dedent = 16,
  sym__error_sentinel = 17,
  sym_source_file = 18,
  sym__statement = 19,
  sym__expr = 20,
  sym_literal = 21,
  sym_assignment = 22,
  sym_inline_suite = 23,
  sym_suite = 24,
  sym_block = 25,
  sym_inline_func_suite = 26,
  sym_func = 27,
  sym_params = 28,
  aux_sym_source_file_repeat1 = 29,
  aux_sym_params_repeat1 = 30,
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
  [anon_sym_block] = "block",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [sym__scope_start] = "_scope_start",
  [sym__func_scope_start] = "_func_scope_start",
  [sym__newline] = "_newline",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source_file] = "source_file",
  [sym__statement] = "_statement",
  [sym__expr] = "_expr",
  [sym_literal] = "literal",
  [sym_assignment] = "assignment",
  [sym_inline_suite] = "inline_suite",
  [sym_suite] = "suite",
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
  [anon_sym_block] = anon_sym_block,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym__scope_start] = sym__scope_start,
  [sym__func_scope_start] = sym__func_scope_start,
  [sym__newline] = sym__newline,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym__statement] = sym__statement,
  [sym__expr] = sym__expr,
  [sym_literal] = sym_literal,
  [sym_assignment] = sym_assignment,
  [sym_inline_suite] = sym_inline_suite,
  [sym_suite] = sym_suite,
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
  [anon_sym_block] = {
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
  [sym__scope_start] = {
    .visible = false,
    .named = true,
  },
  [sym__func_scope_start] = {
    .visible = false,
    .named = true,
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
  [sym__error_sentinel] = {
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
  [sym_inline_suite] = {
    .visible = true,
    .named = true,
  },
  [sym_suite] = {
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
  [3] = 3,
  [4] = 3,
  [5] = 5,
  [6] = 5,
  [7] = 5,
  [8] = 8,
  [9] = 8,
  [10] = 8,
  [11] = 11,
  [12] = 11,
  [13] = 11,
  [14] = 14,
  [15] = 15,
  [16] = 15,
  [17] = 15,
  [18] = 14,
  [19] = 14,
  [20] = 20,
  [21] = 20,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 22,
  [27] = 27,
  [28] = 28,
  [29] = 27,
  [30] = 23,
  [31] = 31,
  [32] = 24,
  [33] = 31,
  [34] = 28,
  [35] = 25,
  [36] = 36,
  [37] = 37,
  [38] = 36,
  [39] = 39,
  [40] = 36,
  [41] = 41,
  [42] = 20,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 43,
  [48] = 48,
  [49] = 43,
  [50] = 50,
  [51] = 51,
  [52] = 28,
  [53] = 25,
  [54] = 23,
  [55] = 22,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 27,
  [60] = 50,
  [61] = 56,
  [62] = 62,
  [63] = 31,
  [64] = 64,
  [65] = 24,
  [66] = 66,
  [67] = 56,
  [68] = 50,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(4);
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == ',') ADVANCE(38);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead == 'b') ADVANCE(20);
      if (lookahead == 'c') ADVANCE(24);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 1:
      if (lookahead == '(') ADVANCE(37);
      if (lookahead == 'b') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(7);
      if (lookahead == 'n') ADVANCE(15);
      if (lookahead == 't') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 2:
      if (lookahead == ')') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 3:
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_continue);
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'a') ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'c') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'e') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'i') ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'k') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'k') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(25);
      if (lookahead == 'r') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'o') ADVANCE(9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'r') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 's') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 't') ADVANCE(14);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (lookahead == 'u') ADVANCE(12);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '_') ADVANCE(3);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(31);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0, .external_lex_state = 2},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0, .external_lex_state = 2},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0, .external_lex_state = 2},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0, .external_lex_state = 3},
  [10] = {.lex_state = 0, .external_lex_state = 3},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0, .external_lex_state = 2},
  [22] = {.lex_state = 0, .external_lex_state = 2},
  [23] = {.lex_state = 0, .external_lex_state = 2},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 2},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0, .external_lex_state = 2},
  [33] = {.lex_state = 0, .external_lex_state = 2},
  [34] = {.lex_state = 0, .external_lex_state = 2},
  [35] = {.lex_state = 0, .external_lex_state = 2},
  [36] = {.lex_state = 0, .external_lex_state = 4},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0, .external_lex_state = 4},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0, .external_lex_state = 4},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 0, .external_lex_state = 6},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0, .external_lex_state = 6},
  [50] = {.lex_state = 0, .external_lex_state = 5},
  [51] = {.lex_state = 0, .external_lex_state = 6},
  [52] = {.lex_state = 0, .external_lex_state = 5},
  [53] = {.lex_state = 0, .external_lex_state = 5},
  [54] = {.lex_state = 0, .external_lex_state = 5},
  [55] = {.lex_state = 0, .external_lex_state = 5},
  [56] = {.lex_state = 0, .external_lex_state = 5},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 0, .external_lex_state = 6},
  [59] = {.lex_state = 0, .external_lex_state = 5},
  [60] = {.lex_state = 0, .external_lex_state = 5},
  [61] = {.lex_state = 0, .external_lex_state = 5},
  [62] = {.lex_state = 0, .external_lex_state = 6},
  [63] = {.lex_state = 0, .external_lex_state = 5},
  [64] = {.lex_state = 0, .external_lex_state = 6},
  [65] = {.lex_state = 0, .external_lex_state = 5},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0, .external_lex_state = 5},
  [68] = {.lex_state = 0, .external_lex_state = 5},
};

enum {
  ts_external_token__scope_start = 0,
  ts_external_token__func_scope_start = 1,
  ts_external_token__newline = 2,
  ts_external_token__indent = 3,
  ts_external_token__dedent = 4,
  ts_external_token__error_sentinel = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__scope_start] = sym__scope_start,
  [ts_external_token__func_scope_start] = sym__func_scope_start,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__scope_start] = true,
    [ts_external_token__func_scope_start] = true,
    [ts_external_token__newline] = true,
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__dedent] = true,
  },
  [3] = {
    [ts_external_token__indent] = true,
  },
  [4] = {
    [ts_external_token__scope_start] = true,
  },
  [5] = {
    [ts_external_token__newline] = true,
  },
  [6] = {
    [ts_external_token__func_scope_start] = true,
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
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym__scope_start] = ACTIONS(1),
    [sym__func_scope_start] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(66),
    [sym__statement] = STATE(2),
    [sym__expr] = STATE(2),
    [sym_literal] = STATE(2),
    [sym_assignment] = STATE(2),
    [sym_block] = STATE(2),
    [sym_func] = STATE(2),
    [sym_params] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(2),
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
    [sym_params] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_break] = ACTIONS(17),
    [anon_sym_continue] = ACTIONS(17),
    [sym_ident] = ACTIONS(7),
    [anon_sym_nil] = ACTIONS(9),
    [anon_sym_true] = ACTIONS(9),
    [anon_sym_false] = ACTIONS(9),
    [anon_sym_block] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_block] = STATE(3),
    [sym_func] = STATE(3),
    [sym_params] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_break] = ACTIONS(19),
    [anon_sym_continue] = ACTIONS(19),
    [sym_ident] = ACTIONS(22),
    [anon_sym_nil] = ACTIONS(25),
    [anon_sym_true] = ACTIONS(25),
    [anon_sym_false] = ACTIONS(25),
    [anon_sym_block] = ACTIONS(28),
    [anon_sym_LPAREN] = ACTIONS(31),
    [sym__dedent] = ACTIONS(34),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym__expr] = STATE(4),
    [sym_literal] = STATE(4),
    [sym_assignment] = STATE(4),
    [sym_block] = STATE(4),
    [sym_func] = STATE(4),
    [sym_params] = STATE(47),
    [aux_sym_source_file_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_break] = ACTIONS(36),
    [anon_sym_continue] = ACTIONS(36),
    [sym_ident] = ACTIONS(39),
    [anon_sym_nil] = ACTIONS(42),
    [anon_sym_true] = ACTIONS(42),
    [anon_sym_false] = ACTIONS(42),
    [anon_sym_block] = ACTIONS(45),
    [anon_sym_LPAREN] = ACTIONS(31),
  },
  [5] = {
    [sym__statement] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_block] = STATE(3),
    [sym_func] = STATE(3),
    [sym_params] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_break] = ACTIONS(48),
    [anon_sym_continue] = ACTIONS(48),
    [sym_ident] = ACTIONS(50),
    [anon_sym_nil] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_block] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__dedent] = ACTIONS(56),
  },
  [6] = {
    [sym__statement] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_block] = STATE(3),
    [sym_func] = STATE(3),
    [sym_params] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_break] = ACTIONS(48),
    [anon_sym_continue] = ACTIONS(48),
    [sym_ident] = ACTIONS(50),
    [anon_sym_nil] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_block] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__dedent] = ACTIONS(58),
  },
  [7] = {
    [sym__statement] = STATE(3),
    [sym__expr] = STATE(3),
    [sym_literal] = STATE(3),
    [sym_assignment] = STATE(3),
    [sym_block] = STATE(3),
    [sym_func] = STATE(3),
    [sym_params] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(3),
    [anon_sym_break] = ACTIONS(48),
    [anon_sym_continue] = ACTIONS(48),
    [sym_ident] = ACTIONS(50),
    [anon_sym_nil] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_block] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__dedent] = ACTIONS(60),
  },
  [8] = {
    [sym__statement] = STATE(60),
    [sym__expr] = STATE(60),
    [sym_literal] = STATE(60),
    [sym_assignment] = STATE(60),
    [sym_block] = STATE(60),
    [sym_func] = STATE(60),
    [sym_params] = STATE(43),
    [anon_sym_break] = ACTIONS(62),
    [anon_sym_continue] = ACTIONS(62),
    [sym_ident] = ACTIONS(64),
    [anon_sym_nil] = ACTIONS(66),
    [anon_sym_true] = ACTIONS(66),
    [anon_sym_false] = ACTIONS(66),
    [anon_sym_block] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__indent] = ACTIONS(70),
  },
  [9] = {
    [sym__statement] = STATE(68),
    [sym__expr] = STATE(68),
    [sym_literal] = STATE(68),
    [sym_assignment] = STATE(68),
    [sym_block] = STATE(68),
    [sym_func] = STATE(68),
    [sym_params] = STATE(43),
    [anon_sym_break] = ACTIONS(72),
    [anon_sym_continue] = ACTIONS(72),
    [sym_ident] = ACTIONS(64),
    [anon_sym_nil] = ACTIONS(66),
    [anon_sym_true] = ACTIONS(66),
    [anon_sym_false] = ACTIONS(66),
    [anon_sym_block] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__indent] = ACTIONS(74),
  },
  [10] = {
    [sym__statement] = STATE(50),
    [sym__expr] = STATE(50),
    [sym_literal] = STATE(50),
    [sym_assignment] = STATE(50),
    [sym_block] = STATE(50),
    [sym_func] = STATE(50),
    [sym_params] = STATE(43),
    [anon_sym_break] = ACTIONS(76),
    [anon_sym_continue] = ACTIONS(76),
    [sym_ident] = ACTIONS(64),
    [anon_sym_nil] = ACTIONS(66),
    [anon_sym_true] = ACTIONS(66),
    [anon_sym_false] = ACTIONS(66),
    [anon_sym_block] = ACTIONS(68),
    [anon_sym_LPAREN] = ACTIONS(13),
    [sym__indent] = ACTIONS(78),
  },
  [11] = {
    [sym__statement] = STATE(6),
    [sym__expr] = STATE(6),
    [sym_literal] = STATE(6),
    [sym_assignment] = STATE(6),
    [sym_block] = STATE(6),
    [sym_func] = STATE(6),
    [sym_params] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(6),
    [anon_sym_break] = ACTIONS(80),
    [anon_sym_continue] = ACTIONS(80),
    [sym_ident] = ACTIONS(50),
    [anon_sym_nil] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_block] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [12] = {
    [sym__statement] = STATE(5),
    [sym__expr] = STATE(5),
    [sym_literal] = STATE(5),
    [sym_assignment] = STATE(5),
    [sym_block] = STATE(5),
    [sym_func] = STATE(5),
    [sym_params] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(5),
    [anon_sym_break] = ACTIONS(82),
    [anon_sym_continue] = ACTIONS(82),
    [sym_ident] = ACTIONS(50),
    [anon_sym_nil] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_block] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
  [13] = {
    [sym__statement] = STATE(7),
    [sym__expr] = STATE(7),
    [sym_literal] = STATE(7),
    [sym_assignment] = STATE(7),
    [sym_block] = STATE(7),
    [sym_func] = STATE(7),
    [sym_params] = STATE(49),
    [aux_sym_source_file_repeat1] = STATE(7),
    [anon_sym_break] = ACTIONS(84),
    [anon_sym_continue] = ACTIONS(84),
    [sym_ident] = ACTIONS(50),
    [anon_sym_nil] = ACTIONS(52),
    [anon_sym_true] = ACTIONS(52),
    [anon_sym_false] = ACTIONS(52),
    [anon_sym_block] = ACTIONS(54),
    [anon_sym_LPAREN] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(7), 1,
      sym_ident,
    ACTIONS(11), 1,
      anon_sym_block,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_params,
    ACTIONS(9), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(31), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [25] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_ident,
    ACTIONS(68), 1,
      anon_sym_block,
    STATE(43), 1,
      sym_params,
    ACTIONS(66), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(56), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [50] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_ident,
    ACTIONS(68), 1,
      anon_sym_block,
    STATE(43), 1,
      sym_params,
    ACTIONS(66), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(67), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [75] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_ident,
    ACTIONS(68), 1,
      anon_sym_block,
    STATE(43), 1,
      sym_params,
    ACTIONS(66), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(61), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [100] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      sym_ident,
    ACTIONS(54), 1,
      anon_sym_block,
    STATE(49), 1,
      sym_params,
    ACTIONS(52), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(33), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [125] = 6,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(64), 1,
      sym_ident,
    ACTIONS(68), 1,
      anon_sym_block,
    STATE(43), 1,
      sym_params,
    ACTIONS(66), 3,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
    STATE(63), 5,
      sym__expr,
      sym_literal,
      sym_assignment,
      sym_block,
      sym_func,
  [150] = 3,
    ACTIONS(90), 1,
      anon_sym_EQ,
    ACTIONS(86), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(88), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [167] = 3,
    ACTIONS(92), 1,
      anon_sym_EQ,
    ACTIONS(86), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(88), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [184] = 2,
    ACTIONS(96), 2,
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
  [198] = 2,
    ACTIONS(100), 2,
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
  [212] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(104), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [226] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(108), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [240] = 2,
    ACTIONS(96), 2,
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
  [254] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(112), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [268] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(116), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [282] = 2,
    ACTIONS(110), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(112), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [296] = 2,
    ACTIONS(100), 2,
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
  [310] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
    ACTIONS(120), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [324] = 2,
    ACTIONS(102), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(104), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [338] = 2,
    ACTIONS(118), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(120), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [352] = 2,
    ACTIONS(114), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(116), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [366] = 2,
    ACTIONS(106), 2,
      sym__dedent,
      anon_sym_LPAREN,
    ACTIONS(108), 7,
      anon_sym_break,
      anon_sym_continue,
      sym_ident,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      anon_sym_block,
  [380] = 2,
    ACTIONS(122), 1,
      sym__scope_start,
    STATE(25), 2,
      sym_inline_suite,
      sym_suite,
  [388] = 3,
    ACTIONS(124), 1,
      anon_sym_COMMA,
    ACTIONS(126), 1,
      anon_sym_RPAREN,
    STATE(41), 1,
      aux_sym_params_repeat1,
  [398] = 2,
    ACTIONS(128), 1,
      sym__scope_start,
    STATE(35), 2,
      sym_inline_suite,
      sym_suite,
  [406] = 3,
    ACTIONS(130), 1,
      anon_sym_COMMA,
    ACTIONS(133), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_params_repeat1,
  [416] = 2,
    ACTIONS(135), 1,
      sym__scope_start,
    STATE(53), 2,
      sym_inline_suite,
      sym_suite,
  [424] = 3,
    ACTIONS(137), 1,
      anon_sym_COMMA,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    STATE(39), 1,
      aux_sym_params_repeat1,
  [434] = 2,
    ACTIONS(86), 1,
      sym__newline,
    ACTIONS(141), 1,
      anon_sym_EQ,
  [441] = 2,
    ACTIONS(143), 1,
      sym__func_scope_start,
    STATE(52), 1,
      sym_inline_func_suite,
  [448] = 1,
    ACTIONS(133), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [453] = 2,
    ACTIONS(139), 1,
      anon_sym_RPAREN,
    ACTIONS(145), 1,
      sym_ident,
  [460] = 2,
    ACTIONS(147), 1,
      sym_ident,
    ACTIONS(149), 1,
      anon_sym_RPAREN,
  [467] = 2,
    ACTIONS(151), 1,
      sym__func_scope_start,
    STATE(28), 1,
      sym_inline_func_suite,
  [474] = 2,
    ACTIONS(145), 1,
      sym_ident,
    ACTIONS(153), 1,
      anon_sym_RPAREN,
  [481] = 2,
    ACTIONS(155), 1,
      sym__func_scope_start,
    STATE(34), 1,
      sym_inline_func_suite,
  [488] = 1,
    ACTIONS(157), 1,
      sym__newline,
  [492] = 1,
    ACTIONS(159), 1,
      sym__func_scope_start,
  [496] = 1,
    ACTIONS(114), 1,
      sym__newline,
  [500] = 1,
    ACTIONS(106), 1,
      sym__newline,
  [504] = 1,
    ACTIONS(100), 1,
      sym__newline,
  [508] = 1,
    ACTIONS(96), 1,
      sym__newline,
  [512] = 1,
    ACTIONS(161), 1,
      sym__newline,
  [516] = 1,
    ACTIONS(145), 1,
      sym_ident,
  [520] = 1,
    ACTIONS(163), 1,
      sym__func_scope_start,
  [524] = 1,
    ACTIONS(110), 1,
      sym__newline,
  [528] = 1,
    ACTIONS(165), 1,
      sym__newline,
  [532] = 1,
    ACTIONS(167), 1,
      sym__newline,
  [536] = 1,
    ACTIONS(169), 1,
      sym__func_scope_start,
  [540] = 1,
    ACTIONS(118), 1,
      sym__newline,
  [544] = 1,
    ACTIONS(171), 1,
      sym__func_scope_start,
  [548] = 1,
    ACTIONS(102), 1,
      sym__newline,
  [552] = 1,
    ACTIONS(173), 1,
      ts_builtin_sym_end,
  [556] = 1,
    ACTIONS(175), 1,
      sym__newline,
  [560] = 1,
    ACTIONS(177), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 25,
  [SMALL_STATE(16)] = 50,
  [SMALL_STATE(17)] = 75,
  [SMALL_STATE(18)] = 100,
  [SMALL_STATE(19)] = 125,
  [SMALL_STATE(20)] = 150,
  [SMALL_STATE(21)] = 167,
  [SMALL_STATE(22)] = 184,
  [SMALL_STATE(23)] = 198,
  [SMALL_STATE(24)] = 212,
  [SMALL_STATE(25)] = 226,
  [SMALL_STATE(26)] = 240,
  [SMALL_STATE(27)] = 254,
  [SMALL_STATE(28)] = 268,
  [SMALL_STATE(29)] = 282,
  [SMALL_STATE(30)] = 296,
  [SMALL_STATE(31)] = 310,
  [SMALL_STATE(32)] = 324,
  [SMALL_STATE(33)] = 338,
  [SMALL_STATE(34)] = 352,
  [SMALL_STATE(35)] = 366,
  [SMALL_STATE(36)] = 380,
  [SMALL_STATE(37)] = 388,
  [SMALL_STATE(38)] = 398,
  [SMALL_STATE(39)] = 406,
  [SMALL_STATE(40)] = 416,
  [SMALL_STATE(41)] = 424,
  [SMALL_STATE(42)] = 434,
  [SMALL_STATE(43)] = 441,
  [SMALL_STATE(44)] = 448,
  [SMALL_STATE(45)] = 453,
  [SMALL_STATE(46)] = 460,
  [SMALL_STATE(47)] = 467,
  [SMALL_STATE(48)] = 474,
  [SMALL_STATE(49)] = 481,
  [SMALL_STATE(50)] = 488,
  [SMALL_STATE(51)] = 492,
  [SMALL_STATE(52)] = 496,
  [SMALL_STATE(53)] = 500,
  [SMALL_STATE(54)] = 504,
  [SMALL_STATE(55)] = 508,
  [SMALL_STATE(56)] = 512,
  [SMALL_STATE(57)] = 516,
  [SMALL_STATE(58)] = 520,
  [SMALL_STATE(59)] = 524,
  [SMALL_STATE(60)] = 528,
  [SMALL_STATE(61)] = 532,
  [SMALL_STATE(62)] = 536,
  [SMALL_STATE(63)] = 540,
  [SMALL_STATE(64)] = 544,
  [SMALL_STATE(65)] = 548,
  [SMALL_STATE(66)] = 552,
  [SMALL_STATE(67)] = 556,
  [SMALL_STATE(68)] = 560,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(21),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(23),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(38),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(46),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(20),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(30),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(36),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [62] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [66] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [82] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_func_suite, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func_suite, 3),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_literal, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_literal, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_suite, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_suite, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suite, 4),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_suite, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_func, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assignment, 3),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(57),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [173] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
