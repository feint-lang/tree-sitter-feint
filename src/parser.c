#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 14
#define SYMBOL_COUNT 68
#define ALIAS_COUNT 0
#define TOKEN_COUNT 40
#define EXTERNAL_TOKEN_COUNT 6
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_break = 1,
  sym_continue = 2,
  anon_sym_jump = 3,
  sym_label = 4,
  anon_sym_return = 5,
  anon_sym_EQ = 6,
  anon_sym_block = 7,
  anon_sym_nil = 8,
  anon_sym_true = 9,
  anon_sym_false = 10,
  anon_sym_AT = 11,
  anon_sym_LPAREN = 12,
  anon_sym_RPAREN = 13,
  anon_sym_COMMA = 14,
  aux_sym_var_ident_token1 = 15,
  aux_sym_var_ident_token2 = 16,
  aux_sym_const_ident_token1 = 17,
  aux_sym_const_ident_token2 = 18,
  aux_sym_type_ident_token1 = 19,
  aux_sym_int_token1 = 20,
  aux_sym_int_token2 = 21,
  aux_sym_int_token3 = 22,
  aux_sym_int_token4 = 23,
  aux_sym_int_token5 = 24,
  aux_sym_int_token6 = 25,
  aux_sym_float_token1 = 26,
  aux_sym_float_token2 = 27,
  sym__string_single = 28,
  sym__string_double = 29,
  sym__format_string_single = 30,
  sym__format_string_double = 31,
  anon_sym_POUND = 32,
  aux_sym_comment_token1 = 33,
  sym_scope_start = 34,
  sym_func_scope_start = 35,
  sym__end_of_statement = 36,
  sym__indent = 37,
  sym__dedent = 38,
  sym__error_sentinel = 39,
  sym_module = 40,
  sym__statement = 41,
  sym_break = 42,
  sym_jump = 43,
  sym_return = 44,
  sym__expr = 45,
  sym_assignment = 46,
  sym_block = 47,
  sym_func = 48,
  sym_atom = 49,
  sym_inline_suite = 50,
  sym_suite = 51,
  sym_func_suite = 52,
  sym_inline_func_suite = 53,
  sym_params = 54,
  sym_param = 55,
  sym__ident = 56,
  sym_var_ident = 57,
  sym_const_ident = 58,
  sym_type_ident = 59,
  sym__num = 60,
  sym_int = 61,
  sym_float = 62,
  sym_string = 63,
  sym_format_string = 64,
  sym_comment = 65,
  aux_sym_module_repeat1 = 66,
  aux_sym_params_repeat1 = 67,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_break] = "break",
  [sym_continue] = "continue",
  [anon_sym_jump] = "jump",
  [sym_label] = "label",
  [anon_sym_return] = "return",
  [anon_sym_EQ] = "=",
  [anon_sym_block] = "block",
  [anon_sym_nil] = "nil",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_AT] = "@",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
  [aux_sym_var_ident_token1] = "var_ident_token1",
  [aux_sym_var_ident_token2] = "var_ident_token2",
  [aux_sym_const_ident_token1] = "const_ident_token1",
  [aux_sym_const_ident_token2] = "const_ident_token2",
  [aux_sym_type_ident_token1] = "type_ident_token1",
  [aux_sym_int_token1] = "int_token1",
  [aux_sym_int_token2] = "int_token2",
  [aux_sym_int_token3] = "int_token3",
  [aux_sym_int_token4] = "int_token4",
  [aux_sym_int_token5] = "int_token5",
  [aux_sym_int_token6] = "int_token6",
  [aux_sym_float_token1] = "float_token1",
  [aux_sym_float_token2] = "float_token2",
  [sym__string_single] = "_string_single",
  [sym__string_double] = "_string_double",
  [sym__format_string_single] = "_format_string_single",
  [sym__format_string_double] = "_format_string_double",
  [anon_sym_POUND] = "#",
  [aux_sym_comment_token1] = "comment_token1",
  [sym_scope_start] = "scope_start",
  [sym_func_scope_start] = "func_scope_start",
  [sym__end_of_statement] = "_end_of_statement",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_module] = "module",
  [sym__statement] = "_statement",
  [sym_break] = "break",
  [sym_jump] = "jump",
  [sym_return] = "return",
  [sym__expr] = "_expr",
  [sym_assignment] = "assignment",
  [sym_block] = "block",
  [sym_func] = "func",
  [sym_atom] = "atom",
  [sym_inline_suite] = "inline_suite",
  [sym_suite] = "suite",
  [sym_func_suite] = "func_suite",
  [sym_inline_func_suite] = "inline_func_suite",
  [sym_params] = "params",
  [sym_param] = "param",
  [sym__ident] = "_ident",
  [sym_var_ident] = "var_ident",
  [sym_const_ident] = "const_ident",
  [sym_type_ident] = "type_ident",
  [sym__num] = "_num",
  [sym_int] = "int",
  [sym_float] = "float",
  [sym_string] = "string",
  [sym_format_string] = "format_string",
  [sym_comment] = "comment",
  [aux_sym_module_repeat1] = "module_repeat1",
  [aux_sym_params_repeat1] = "params_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_break] = anon_sym_break,
  [sym_continue] = sym_continue,
  [anon_sym_jump] = anon_sym_jump,
  [sym_label] = sym_label,
  [anon_sym_return] = anon_sym_return,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_nil] = anon_sym_nil,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [aux_sym_var_ident_token1] = aux_sym_var_ident_token1,
  [aux_sym_var_ident_token2] = aux_sym_var_ident_token2,
  [aux_sym_const_ident_token1] = aux_sym_const_ident_token1,
  [aux_sym_const_ident_token2] = aux_sym_const_ident_token2,
  [aux_sym_type_ident_token1] = aux_sym_type_ident_token1,
  [aux_sym_int_token1] = aux_sym_int_token1,
  [aux_sym_int_token2] = aux_sym_int_token2,
  [aux_sym_int_token3] = aux_sym_int_token3,
  [aux_sym_int_token4] = aux_sym_int_token4,
  [aux_sym_int_token5] = aux_sym_int_token5,
  [aux_sym_int_token6] = aux_sym_int_token6,
  [aux_sym_float_token1] = aux_sym_float_token1,
  [aux_sym_float_token2] = aux_sym_float_token2,
  [sym__string_single] = sym__string_single,
  [sym__string_double] = sym__string_double,
  [sym__format_string_single] = sym__format_string_single,
  [sym__format_string_double] = sym__format_string_double,
  [anon_sym_POUND] = anon_sym_POUND,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [sym_scope_start] = sym_scope_start,
  [sym_func_scope_start] = sym_func_scope_start,
  [sym__end_of_statement] = sym__end_of_statement,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_module] = sym_module,
  [sym__statement] = sym__statement,
  [sym_break] = sym_break,
  [sym_jump] = sym_jump,
  [sym_return] = sym_return,
  [sym__expr] = sym__expr,
  [sym_assignment] = sym_assignment,
  [sym_block] = sym_block,
  [sym_func] = sym_func,
  [sym_atom] = sym_atom,
  [sym_inline_suite] = sym_inline_suite,
  [sym_suite] = sym_suite,
  [sym_func_suite] = sym_func_suite,
  [sym_inline_func_suite] = sym_inline_func_suite,
  [sym_params] = sym_params,
  [sym_param] = sym_param,
  [sym__ident] = sym__ident,
  [sym_var_ident] = sym_var_ident,
  [sym_const_ident] = sym_const_ident,
  [sym_type_ident] = sym_type_ident,
  [sym__num] = sym__num,
  [sym_int] = sym_int,
  [sym_float] = sym_float,
  [sym_string] = sym_string,
  [sym_format_string] = sym_format_string,
  [sym_comment] = sym_comment,
  [aux_sym_module_repeat1] = aux_sym_module_repeat1,
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
  [sym_continue] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_jump] = {
    .visible = true,
    .named = false,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_return] = {
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
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_var_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_var_ident_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_const_ident_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_type_ident_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token4] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token5] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_int_token6] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_float_token2] = {
    .visible = false,
    .named = false,
  },
  [sym__string_single] = {
    .visible = false,
    .named = true,
  },
  [sym__string_double] = {
    .visible = false,
    .named = true,
  },
  [sym__format_string_single] = {
    .visible = false,
    .named = true,
  },
  [sym__format_string_double] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_scope_start] = {
    .visible = true,
    .named = true,
  },
  [sym_func_scope_start] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_statement] = {
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
  [sym_module] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_break] = {
    .visible = true,
    .named = true,
  },
  [sym_jump] = {
    .visible = true,
    .named = true,
  },
  [sym_return] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_assignment] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_func] = {
    .visible = true,
    .named = true,
  },
  [sym_atom] = {
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
  [sym_func_suite] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_func_suite] = {
    .visible = true,
    .named = true,
  },
  [sym_params] = {
    .visible = true,
    .named = true,
  },
  [sym_param] = {
    .visible = true,
    .named = true,
  },
  [sym__ident] = {
    .visible = false,
    .named = true,
  },
  [sym_var_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_const_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_type_ident] = {
    .visible = true,
    .named = true,
  },
  [sym__num] = {
    .visible = false,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_format_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_module_repeat1] = {
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
  [4] = 4,
  [5] = 5,
  [6] = 3,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 14,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 27,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 14,
  [61] = 61,
  [62] = 62,
  [63] = 37,
  [64] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == ',') ADVANCE(43);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == ':') ADVANCE(23);
      if (lookahead == '=') ADVANCE(31);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(47);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'f') ADVANCE(44);
      if (lookahead == 'j') ADVANCE(50);
      if (lookahead == 'n') ADVANCE(46);
      if (lookahead == 'r') ADVANCE(45);
      if (lookahead == 't') ADVANCE(49);
      if (('+' <= lookahead && lookahead <= '-')) ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(51);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '$') ADVANCE(4);
      if (lookahead == '\'') ADVANCE(5);
      if (lookahead == '(') ADVANCE(41);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == '@') ADVANCE(40);
      if (lookahead == 'b') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'n') ADVANCE(53);
      if (lookahead == 't') ADVANCE(55);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(92);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(3);
      if (lookahead == '\'') ADVANCE(6);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ')') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(56);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '_') ADVANCE(20);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(98);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 11:
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 13:
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(101);
      END_STATE();
    case 14:
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 15:
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 16:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 17:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(101);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 23:
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(29);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_break);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_continue);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_jump);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_label);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_return);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_block);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_nil);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_true);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_false);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(72);
      if (lookahead == 'r') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(86);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'i') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_var_ident_token1);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'a') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'c') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'e') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'k') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'k') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'l') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'm') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'n') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'o') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'p') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'r') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 's') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 't') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 't') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (lookahead == 'u') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == ':') ADVANCE(29);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'c') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'e') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'k') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(89);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'l') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 's') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (lookahead == 'u') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_var_ident_token2);
      if (lookahead == '_') ADVANCE(15);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_const_ident_token1);
      if (lookahead == '_') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_const_ident_token2);
      if (lookahead == '_') ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_const_ident_token2);
      if (lookahead == '_') ADVANCE(11);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_type_ident_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_int_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'b') ADVANCE(12);
      if (lookahead == 'o') ADVANCE(13);
      if (lookahead == 'x') ADVANCE(14);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_int_token2);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_int_token3);
      if (lookahead == '.') ADVANCE(21);
      if (lookahead == '_') ADVANCE(19);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_int_token4);
      if (lookahead == '_') ADVANCE(17);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_int_token5);
      if (lookahead == '_') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_int_token6);
      if (lookahead == '_') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_float_token1);
      if (lookahead == '_') ADVANCE(21);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(16);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_float_token2);
      if (lookahead == '_') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__string_single);
      if (lookahead == '\'') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(5);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__string_double);
      if (lookahead == '"') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__format_string_single);
      if (lookahead == '\'') ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(6);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__format_string_double);
      if (lookahead == '"') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0, .external_lex_state = 2},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0, .external_lex_state = 2},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0, .external_lex_state = 2},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0, .external_lex_state = 3},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 1, .external_lex_state = 4},
  [11] = {.lex_state = 1, .external_lex_state = 4},
  [12] = {.lex_state = 1, .external_lex_state = 3},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0, .external_lex_state = 2},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 7},
  [18] = {.lex_state = 7},
  [19] = {.lex_state = 7},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0, .external_lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0, .external_lex_state = 6},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0, .external_lex_state = 4},
  [30] = {.lex_state = 0, .external_lex_state = 4},
  [31] = {.lex_state = 0, .external_lex_state = 4},
  [32] = {.lex_state = 0, .external_lex_state = 4},
  [33] = {.lex_state = 0, .external_lex_state = 4},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0, .external_lex_state = 4},
  [36] = {.lex_state = 0, .external_lex_state = 4},
  [37] = {.lex_state = 0, .external_lex_state = 4},
  [38] = {.lex_state = 0, .external_lex_state = 4},
  [39] = {.lex_state = 0, .external_lex_state = 4},
  [40] = {.lex_state = 0, .external_lex_state = 4},
  [41] = {.lex_state = 0, .external_lex_state = 5},
  [42] = {.lex_state = 0, .external_lex_state = 5},
  [43] = {.lex_state = 0, .external_lex_state = 4},
  [44] = {.lex_state = 0, .external_lex_state = 4},
  [45] = {.lex_state = 0, .external_lex_state = 4},
  [46] = {.lex_state = 0, .external_lex_state = 4},
  [47] = {.lex_state = 0, .external_lex_state = 4},
  [48] = {.lex_state = 0, .external_lex_state = 4},
  [49] = {.lex_state = 0, .external_lex_state = 5},
  [50] = {.lex_state = 0, .external_lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 110},
  [53] = {.lex_state = 0, .external_lex_state = 4},
  [54] = {.lex_state = 0, .external_lex_state = 4},
  [55] = {.lex_state = 0, .external_lex_state = 4},
  [56] = {.lex_state = 0, .external_lex_state = 5},
  [57] = {.lex_state = 0, .external_lex_state = 4},
  [58] = {.lex_state = 0, .external_lex_state = 4},
  [59] = {.lex_state = 0, .external_lex_state = 4},
  [60] = {.lex_state = 0, .external_lex_state = 4},
  [61] = {.lex_state = 0, .external_lex_state = 4},
  [62] = {.lex_state = 0, .external_lex_state = 4},
  [63] = {.lex_state = 0, .external_lex_state = 4},
  [64] = {.lex_state = 0, .external_lex_state = 4},
};

enum {
  ts_external_token_scope_start = 0,
  ts_external_token_func_scope_start = 1,
  ts_external_token__end_of_statement = 2,
  ts_external_token__indent = 3,
  ts_external_token__dedent = 4,
  ts_external_token__error_sentinel = 5,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_scope_start] = sym_scope_start,
  [ts_external_token_func_scope_start] = sym_func_scope_start,
  [ts_external_token__end_of_statement] = sym__end_of_statement,
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[7][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_scope_start] = true,
    [ts_external_token_func_scope_start] = true,
    [ts_external_token__end_of_statement] = true,
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
    [ts_external_token__end_of_statement] = true,
  },
  [5] = {
    [ts_external_token_func_scope_start] = true,
  },
  [6] = {
    [ts_external_token_scope_start] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_break] = ACTIONS(1),
    [sym_continue] = ACTIONS(1),
    [anon_sym_jump] = ACTIONS(1),
    [sym_label] = ACTIONS(1),
    [anon_sym_return] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_nil] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_var_ident_token1] = ACTIONS(1),
    [aux_sym_var_ident_token2] = ACTIONS(1),
    [aux_sym_const_ident_token1] = ACTIONS(1),
    [aux_sym_const_ident_token2] = ACTIONS(1),
    [aux_sym_type_ident_token1] = ACTIONS(1),
    [aux_sym_int_token1] = ACTIONS(1),
    [aux_sym_int_token2] = ACTIONS(1),
    [aux_sym_int_token3] = ACTIONS(1),
    [aux_sym_int_token4] = ACTIONS(1),
    [aux_sym_int_token5] = ACTIONS(1),
    [aux_sym_int_token6] = ACTIONS(1),
    [aux_sym_float_token1] = ACTIONS(1),
    [aux_sym_float_token2] = ACTIONS(1),
    [sym__string_single] = ACTIONS(1),
    [sym__string_double] = ACTIONS(1),
    [sym__format_string_single] = ACTIONS(1),
    [sym__format_string_double] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_scope_start] = ACTIONS(1),
    [sym_func_scope_start] = ACTIONS(1),
    [sym__end_of_statement] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_module] = STATE(51),
    [sym__statement] = STATE(5),
    [sym_break] = STATE(37),
    [sym_jump] = STATE(37),
    [sym_return] = STATE(37),
    [sym__expr] = STATE(37),
    [sym_assignment] = STATE(37),
    [sym_block] = STATE(37),
    [sym_func] = STATE(37),
    [sym_atom] = STATE(37),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(37),
    [aux_sym_module_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_break] = ACTIONS(5),
    [sym_continue] = ACTIONS(7),
    [anon_sym_jump] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
  },
  [2] = {
    [sym__statement] = STATE(6),
    [sym_break] = STATE(64),
    [sym_jump] = STATE(64),
    [sym_return] = STATE(64),
    [sym__expr] = STATE(64),
    [sym_assignment] = STATE(64),
    [sym_block] = STATE(64),
    [sym_func] = STATE(64),
    [sym_atom] = STATE(64),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(64),
    [aux_sym_module_repeat1] = STATE(6),
    [anon_sym_break] = ACTIONS(5),
    [sym_continue] = ACTIONS(47),
    [anon_sym_jump] = ACTIONS(9),
    [sym_label] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [sym__dedent] = ACTIONS(51),
  },
  [3] = {
    [sym__statement] = STATE(3),
    [sym_break] = STATE(37),
    [sym_jump] = STATE(37),
    [sym_return] = STATE(37),
    [sym__expr] = STATE(37),
    [sym_assignment] = STATE(37),
    [sym_block] = STATE(37),
    [sym_func] = STATE(37),
    [sym_atom] = STATE(37),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(37),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(58),
    [anon_sym_jump] = ACTIONS(61),
    [sym_label] = ACTIONS(64),
    [anon_sym_return] = ACTIONS(67),
    [anon_sym_block] = ACTIONS(70),
    [anon_sym_nil] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(79),
    [aux_sym_var_ident_token1] = ACTIONS(82),
    [aux_sym_var_ident_token2] = ACTIONS(82),
    [aux_sym_const_ident_token1] = ACTIONS(85),
    [aux_sym_const_ident_token2] = ACTIONS(88),
    [aux_sym_type_ident_token1] = ACTIONS(91),
    [aux_sym_int_token1] = ACTIONS(94),
    [aux_sym_int_token2] = ACTIONS(97),
    [aux_sym_int_token3] = ACTIONS(97),
    [aux_sym_int_token4] = ACTIONS(100),
    [aux_sym_int_token5] = ACTIONS(100),
    [aux_sym_int_token6] = ACTIONS(100),
    [aux_sym_float_token1] = ACTIONS(103),
    [aux_sym_float_token2] = ACTIONS(106),
    [sym__string_single] = ACTIONS(109),
    [sym__string_double] = ACTIONS(109),
    [sym__format_string_single] = ACTIONS(112),
    [sym__format_string_double] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(115),
  },
  [4] = {
    [sym__statement] = STATE(6),
    [sym_break] = STATE(64),
    [sym_jump] = STATE(64),
    [sym_return] = STATE(64),
    [sym__expr] = STATE(64),
    [sym_assignment] = STATE(64),
    [sym_block] = STATE(64),
    [sym_func] = STATE(64),
    [sym_atom] = STATE(64),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(64),
    [aux_sym_module_repeat1] = STATE(6),
    [anon_sym_break] = ACTIONS(5),
    [sym_continue] = ACTIONS(47),
    [anon_sym_jump] = ACTIONS(9),
    [sym_label] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [sym__dedent] = ACTIONS(118),
  },
  [5] = {
    [sym__statement] = STATE(3),
    [sym_break] = STATE(37),
    [sym_jump] = STATE(37),
    [sym_return] = STATE(37),
    [sym__expr] = STATE(37),
    [sym_assignment] = STATE(37),
    [sym_block] = STATE(37),
    [sym_func] = STATE(37),
    [sym_atom] = STATE(37),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(37),
    [aux_sym_module_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(120),
    [anon_sym_break] = ACTIONS(5),
    [sym_continue] = ACTIONS(7),
    [anon_sym_jump] = ACTIONS(9),
    [sym_label] = ACTIONS(11),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
  },
  [6] = {
    [sym__statement] = STATE(6),
    [sym_break] = STATE(64),
    [sym_jump] = STATE(64),
    [sym_return] = STATE(64),
    [sym__expr] = STATE(64),
    [sym_assignment] = STATE(64),
    [sym_block] = STATE(64),
    [sym_func] = STATE(64),
    [sym_atom] = STATE(64),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(64),
    [aux_sym_module_repeat1] = STATE(6),
    [anon_sym_break] = ACTIONS(55),
    [sym_continue] = ACTIONS(122),
    [anon_sym_jump] = ACTIONS(61),
    [sym_label] = ACTIONS(125),
    [anon_sym_return] = ACTIONS(67),
    [anon_sym_block] = ACTIONS(70),
    [anon_sym_nil] = ACTIONS(73),
    [anon_sym_true] = ACTIONS(73),
    [anon_sym_false] = ACTIONS(73),
    [anon_sym_AT] = ACTIONS(76),
    [anon_sym_LPAREN] = ACTIONS(79),
    [aux_sym_var_ident_token1] = ACTIONS(82),
    [aux_sym_var_ident_token2] = ACTIONS(82),
    [aux_sym_const_ident_token1] = ACTIONS(85),
    [aux_sym_const_ident_token2] = ACTIONS(88),
    [aux_sym_type_ident_token1] = ACTIONS(91),
    [aux_sym_int_token1] = ACTIONS(94),
    [aux_sym_int_token2] = ACTIONS(97),
    [aux_sym_int_token3] = ACTIONS(97),
    [aux_sym_int_token4] = ACTIONS(100),
    [aux_sym_int_token5] = ACTIONS(100),
    [aux_sym_int_token6] = ACTIONS(100),
    [aux_sym_float_token1] = ACTIONS(103),
    [aux_sym_float_token2] = ACTIONS(106),
    [sym__string_single] = ACTIONS(109),
    [sym__string_double] = ACTIONS(109),
    [sym__format_string_single] = ACTIONS(112),
    [sym__format_string_double] = ACTIONS(112),
    [anon_sym_POUND] = ACTIONS(115),
    [sym__dedent] = ACTIONS(53),
  },
  [7] = {
    [sym__statement] = STATE(4),
    [sym_break] = STATE(64),
    [sym_jump] = STATE(64),
    [sym_return] = STATE(64),
    [sym__expr] = STATE(64),
    [sym_assignment] = STATE(64),
    [sym_block] = STATE(64),
    [sym_func] = STATE(64),
    [sym_atom] = STATE(64),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(64),
    [aux_sym_module_repeat1] = STATE(4),
    [anon_sym_break] = ACTIONS(5),
    [sym_continue] = ACTIONS(47),
    [anon_sym_jump] = ACTIONS(9),
    [sym_label] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
  },
  [8] = {
    [sym__statement] = STATE(40),
    [sym_break] = STATE(63),
    [sym_jump] = STATE(63),
    [sym_return] = STATE(63),
    [sym__expr] = STATE(63),
    [sym_assignment] = STATE(63),
    [sym_block] = STATE(63),
    [sym_func] = STATE(63),
    [sym_atom] = STATE(63),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(63),
    [anon_sym_break] = ACTIONS(5),
    [sym_continue] = ACTIONS(128),
    [anon_sym_jump] = ACTIONS(9),
    [sym_label] = ACTIONS(130),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [sym__indent] = ACTIONS(132),
  },
  [9] = {
    [sym__statement] = STATE(2),
    [sym_break] = STATE(64),
    [sym_jump] = STATE(64),
    [sym_return] = STATE(64),
    [sym__expr] = STATE(64),
    [sym_assignment] = STATE(64),
    [sym_block] = STATE(64),
    [sym_func] = STATE(64),
    [sym_atom] = STATE(64),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(64),
    [aux_sym_module_repeat1] = STATE(2),
    [anon_sym_break] = ACTIONS(5),
    [sym_continue] = ACTIONS(47),
    [anon_sym_jump] = ACTIONS(9),
    [sym_label] = ACTIONS(49),
    [anon_sym_return] = ACTIONS(13),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
  },
  [10] = {
    [sym__expr] = STATE(50),
    [sym_assignment] = STATE(50),
    [sym_block] = STATE(50),
    [sym_func] = STATE(50),
    [sym_atom] = STATE(50),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(50),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [sym__end_of_statement] = ACTIONS(134),
  },
  [11] = {
    [sym__expr] = STATE(44),
    [sym_assignment] = STATE(44),
    [sym_block] = STATE(44),
    [sym_func] = STATE(44),
    [sym_atom] = STATE(44),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(44),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [sym__end_of_statement] = ACTIONS(136),
  },
  [12] = {
    [sym__expr] = STATE(45),
    [sym_assignment] = STATE(45),
    [sym_block] = STATE(45),
    [sym_func] = STATE(45),
    [sym_atom] = STATE(45),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(45),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
    [sym__indent] = ACTIONS(138),
  },
  [13] = {
    [sym__expr] = STATE(46),
    [sym_assignment] = STATE(46),
    [sym_block] = STATE(46),
    [sym_func] = STATE(46),
    [sym_atom] = STATE(46),
    [sym_params] = STATE(22),
    [sym__ident] = STATE(29),
    [sym_var_ident] = STATE(29),
    [sym_const_ident] = STATE(29),
    [sym_type_ident] = STATE(29),
    [sym__num] = STATE(62),
    [sym_int] = STATE(62),
    [sym_float] = STATE(62),
    [sym_string] = STATE(62),
    [sym_format_string] = STATE(62),
    [sym_comment] = STATE(46),
    [anon_sym_block] = ACTIONS(15),
    [anon_sym_nil] = ACTIONS(17),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_AT] = ACTIONS(19),
    [anon_sym_LPAREN] = ACTIONS(21),
    [aux_sym_var_ident_token1] = ACTIONS(23),
    [aux_sym_var_ident_token2] = ACTIONS(23),
    [aux_sym_const_ident_token1] = ACTIONS(25),
    [aux_sym_const_ident_token2] = ACTIONS(27),
    [aux_sym_type_ident_token1] = ACTIONS(29),
    [aux_sym_int_token1] = ACTIONS(31),
    [aux_sym_int_token2] = ACTIONS(33),
    [aux_sym_int_token3] = ACTIONS(33),
    [aux_sym_int_token4] = ACTIONS(35),
    [aux_sym_int_token5] = ACTIONS(35),
    [aux_sym_int_token6] = ACTIONS(35),
    [aux_sym_float_token1] = ACTIONS(37),
    [aux_sym_float_token2] = ACTIONS(39),
    [sym__string_single] = ACTIONS(41),
    [sym__string_double] = ACTIONS(41),
    [sym__format_string_single] = ACTIONS(43),
    [sym__format_string_double] = ACTIONS(43),
    [anon_sym_POUND] = ACTIONS(45),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(140), 14,
      ts_builtin_sym_end,
      sym_label,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_int_token1,
      aux_sym_int_token4,
      aux_sym_int_token5,
      aux_sym_int_token6,
      aux_sym_float_token2,
      sym__string_single,
      sym__string_double,
      sym__format_string_single,
      sym__format_string_double,
      anon_sym_POUND,
    ACTIONS(142), 16,
      anon_sym_break,
      sym_continue,
      anon_sym_jump,
      anon_sym_return,
      anon_sym_block,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_var_ident_token1,
      aux_sym_var_ident_token2,
      aux_sym_const_ident_token1,
      aux_sym_const_ident_token2,
      aux_sym_type_ident_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
  [35] = 2,
    ACTIONS(140), 14,
      sym__dedent,
      sym_label,
      anon_sym_AT,
      anon_sym_LPAREN,
      aux_sym_int_token1,
      aux_sym_int_token4,
      aux_sym_int_token5,
      aux_sym_int_token6,
      aux_sym_float_token2,
      sym__string_single,
      sym__string_double,
      sym__format_string_single,
      sym__format_string_double,
      anon_sym_POUND,
    ACTIONS(142), 16,
      anon_sym_break,
      sym_continue,
      anon_sym_jump,
      anon_sym_return,
      anon_sym_block,
      anon_sym_nil,
      anon_sym_true,
      anon_sym_false,
      aux_sym_var_ident_token1,
      aux_sym_var_ident_token2,
      aux_sym_const_ident_token1,
      aux_sym_const_ident_token2,
      aux_sym_type_ident_token1,
      aux_sym_int_token2,
      aux_sym_int_token3,
      aux_sym_float_token1,
  [70] = 4,
    ACTIONS(148), 1,
      aux_sym_float_token1,
    ACTIONS(150), 1,
      aux_sym_float_token2,
    ACTIONS(144), 2,
      aux_sym_int_token2,
      aux_sym_int_token3,
    ACTIONS(146), 3,
      aux_sym_int_token4,
      aux_sym_int_token5,
      aux_sym_int_token6,
  [86] = 5,
    ACTIONS(152), 1,
      anon_sym_RPAREN,
    ACTIONS(154), 1,
      aux_sym_var_ident_token1,
    ACTIONS(156), 1,
      aux_sym_var_ident_token2,
    STATE(28), 1,
      sym_param,
    STATE(34), 1,
      sym_var_ident,
  [102] = 5,
    ACTIONS(154), 1,
      aux_sym_var_ident_token1,
    ACTIONS(156), 1,
      aux_sym_var_ident_token2,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    STATE(28), 1,
      sym_param,
    STATE(34), 1,
      sym_var_ident,
  [118] = 5,
    ACTIONS(154), 1,
      aux_sym_var_ident_token1,
    ACTIONS(156), 1,
      aux_sym_var_ident_token2,
    ACTIONS(160), 1,
      anon_sym_RPAREN,
    STATE(24), 1,
      sym_param,
    STATE(34), 1,
      sym_var_ident,
  [134] = 4,
    ACTIONS(154), 1,
      aux_sym_var_ident_token1,
    ACTIONS(156), 1,
      aux_sym_var_ident_token2,
    STATE(28), 1,
      sym_param,
    STATE(34), 1,
      sym_var_ident,
  [147] = 3,
    ACTIONS(162), 1,
      anon_sym_RPAREN,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_params_repeat1,
  [157] = 2,
    ACTIONS(167), 1,
      sym_func_scope_start,
    STATE(36), 2,
      sym_func_suite,
      sym_inline_func_suite,
  [165] = 3,
    ACTIONS(158), 1,
      anon_sym_RPAREN,
    ACTIONS(169), 1,
      anon_sym_COMMA,
    STATE(21), 1,
      aux_sym_params_repeat1,
  [175] = 3,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
    ACTIONS(173), 1,
      anon_sym_COMMA,
    STATE(23), 1,
      aux_sym_params_repeat1,
  [185] = 2,
    ACTIONS(175), 1,
      sym_scope_start,
    STATE(43), 2,
      sym_inline_suite,
      sym_suite,
  [193] = 3,
    ACTIONS(23), 1,
      aux_sym_var_ident_token1,
    ACTIONS(177), 1,
      aux_sym_var_ident_token2,
    STATE(47), 1,
      sym_var_ident,
  [203] = 1,
    ACTIONS(179), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [208] = 1,
    ACTIONS(162), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [213] = 2,
    ACTIONS(181), 1,
      anon_sym_EQ,
    ACTIONS(183), 1,
      sym__end_of_statement,
  [220] = 1,
    ACTIONS(185), 2,
      sym__end_of_statement,
      anon_sym_EQ,
  [225] = 1,
    ACTIONS(187), 2,
      sym__end_of_statement,
      anon_sym_EQ,
  [230] = 1,
    ACTIONS(189), 2,
      sym__end_of_statement,
      anon_sym_EQ,
  [235] = 1,
    ACTIONS(179), 2,
      sym__end_of_statement,
      anon_sym_EQ,
  [240] = 1,
    ACTIONS(192), 2,
      anon_sym_RPAREN,
      anon_sym_COMMA,
  [245] = 1,
    ACTIONS(194), 1,
      sym__end_of_statement,
  [249] = 1,
    ACTIONS(196), 1,
      sym__end_of_statement,
  [253] = 1,
    ACTIONS(198), 1,
      sym__end_of_statement,
  [257] = 1,
    ACTIONS(200), 1,
      sym__end_of_statement,
  [261] = 1,
    ACTIONS(202), 1,
      sym__end_of_statement,
  [265] = 1,
    ACTIONS(204), 1,
      sym__end_of_statement,
  [269] = 1,
    ACTIONS(206), 1,
      sym_func_scope_start,
  [273] = 1,
    ACTIONS(208), 1,
      sym_func_scope_start,
  [277] = 1,
    ACTIONS(210), 1,
      sym__end_of_statement,
  [281] = 1,
    ACTIONS(212), 1,
      sym__end_of_statement,
  [285] = 1,
    ACTIONS(214), 1,
      sym__end_of_statement,
  [289] = 1,
    ACTIONS(216), 1,
      sym__end_of_statement,
  [293] = 1,
    ACTIONS(218), 1,
      sym__end_of_statement,
  [297] = 1,
    ACTIONS(220), 1,
      sym__end_of_statement,
  [301] = 1,
    ACTIONS(222), 1,
      sym_func_scope_start,
  [305] = 1,
    ACTIONS(224), 1,
      sym__end_of_statement,
  [309] = 1,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
  [313] = 1,
    ACTIONS(228), 1,
      aux_sym_comment_token1,
  [317] = 1,
    ACTIONS(230), 1,
      sym__end_of_statement,
  [321] = 1,
    ACTIONS(232), 1,
      sym__end_of_statement,
  [325] = 1,
    ACTIONS(234), 1,
      sym__end_of_statement,
  [329] = 1,
    ACTIONS(236), 1,
      sym_func_scope_start,
  [333] = 1,
    ACTIONS(238), 1,
      sym__end_of_statement,
  [337] = 1,
    ACTIONS(240), 1,
      sym__end_of_statement,
  [341] = 1,
    ACTIONS(242), 1,
      sym__end_of_statement,
  [345] = 1,
    ACTIONS(140), 1,
      sym__end_of_statement,
  [349] = 1,
    ACTIONS(244), 1,
      sym__end_of_statement,
  [353] = 1,
    ACTIONS(183), 1,
      sym__end_of_statement,
  [357] = 1,
    ACTIONS(246), 1,
      sym__end_of_statement,
  [361] = 1,
    ACTIONS(248), 1,
      sym__end_of_statement,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(14)] = 0,
  [SMALL_STATE(15)] = 35,
  [SMALL_STATE(16)] = 70,
  [SMALL_STATE(17)] = 86,
  [SMALL_STATE(18)] = 102,
  [SMALL_STATE(19)] = 118,
  [SMALL_STATE(20)] = 134,
  [SMALL_STATE(21)] = 147,
  [SMALL_STATE(22)] = 157,
  [SMALL_STATE(23)] = 165,
  [SMALL_STATE(24)] = 175,
  [SMALL_STATE(25)] = 185,
  [SMALL_STATE(26)] = 193,
  [SMALL_STATE(27)] = 203,
  [SMALL_STATE(28)] = 208,
  [SMALL_STATE(29)] = 213,
  [SMALL_STATE(30)] = 220,
  [SMALL_STATE(31)] = 225,
  [SMALL_STATE(32)] = 230,
  [SMALL_STATE(33)] = 235,
  [SMALL_STATE(34)] = 240,
  [SMALL_STATE(35)] = 245,
  [SMALL_STATE(36)] = 249,
  [SMALL_STATE(37)] = 253,
  [SMALL_STATE(38)] = 257,
  [SMALL_STATE(39)] = 261,
  [SMALL_STATE(40)] = 265,
  [SMALL_STATE(41)] = 269,
  [SMALL_STATE(42)] = 273,
  [SMALL_STATE(43)] = 277,
  [SMALL_STATE(44)] = 281,
  [SMALL_STATE(45)] = 285,
  [SMALL_STATE(46)] = 289,
  [SMALL_STATE(47)] = 293,
  [SMALL_STATE(48)] = 297,
  [SMALL_STATE(49)] = 301,
  [SMALL_STATE(50)] = 305,
  [SMALL_STATE(51)] = 309,
  [SMALL_STATE(52)] = 313,
  [SMALL_STATE(53)] = 317,
  [SMALL_STATE(54)] = 321,
  [SMALL_STATE(55)] = 325,
  [SMALL_STATE(56)] = 329,
  [SMALL_STATE(57)] = 333,
  [SMALL_STATE(58)] = 337,
  [SMALL_STATE(59)] = 341,
  [SMALL_STATE(60)] = 345,
  [SMALL_STATE(61)] = 349,
  [SMALL_STATE(62)] = 353,
  [SMALL_STATE(63)] = 357,
  [SMALL_STATE(64)] = 361,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(10),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(37),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(26),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(37),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(11),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(25),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(62),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(62),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(19),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(33),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(32),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(31),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(30),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(16),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(61),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(61),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(59),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(59),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(57),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(53),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(52),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_module, 1),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(64),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_module_repeat1, 2), SHIFT_REPEAT(64),
  [128] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 2),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [154] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2),
  [164] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_params_repeat1, 2), SHIFT_REPEAT(20),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_var_ident, 1),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_atom, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type_ident, 1),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_const_ident, 1),
  [189] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_const_ident, 1), REDUCE(sym_type_ident, 1),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_param, 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 3),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 2),
  [210] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_return, 2),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assignment, 3),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jump, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_suite, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_break, 2),
  [226] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_format_string, 1),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_func_suite, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_suite, 4),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params, 5),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_func_suite, 4),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_float, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_int, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
