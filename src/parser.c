#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 14
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 7

enum ts_symbol_identifiers {
  sym_identifier = 1,
  anon_sym_sig = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_COMMA = 5,
  anon_sym_extends = 6,
  anon_sym_in = 7,
  anon_sym_PLUS = 8,
  sym_abstract = 9,
  sym_var = 10,
  anon_sym_one = 11,
  anon_sym_lone = 12,
  anon_sym_some = 13,
  sym_source_file = 14,
  sym__definition = 15,
  sym_sig_definition = 16,
  sym_name_list = 17,
  sym__name_list = 18,
  sym_sig_extends = 19,
  sym_sig_in = 20,
  sym_sig_in_list = 21,
  sym__sig_in_list = 22,
  sym_qualified_name = 23,
  sym_multiplicity = 24,
  aux_sym_source_file_repeat1 = 25,
  aux_sym__sig_in_list_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_identifier] = "identifier",
  [anon_sym_sig] = "sig",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COMMA] = ",",
  [anon_sym_extends] = "extends",
  [anon_sym_in] = "in",
  [anon_sym_PLUS] = "+",
  [sym_abstract] = "abstract",
  [sym_var] = "var",
  [anon_sym_one] = "one",
  [anon_sym_lone] = "lone",
  [anon_sym_some] = "some",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_sig_definition] = "sig_definition",
  [sym_name_list] = "name_list",
  [sym__name_list] = "_name_list",
  [sym_sig_extends] = "sig_extends",
  [sym_sig_in] = "sig_in",
  [sym_sig_in_list] = "sig_in_list",
  [sym__sig_in_list] = "_sig_in_list",
  [sym_qualified_name] = "qualified_name",
  [sym_multiplicity] = "multiplicity",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym__sig_in_list_repeat1] = "_sig_in_list_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_identifier] = sym_identifier,
  [anon_sym_sig] = anon_sym_sig,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_abstract] = sym_abstract,
  [sym_var] = sym_var,
  [anon_sym_one] = anon_sym_one,
  [anon_sym_lone] = anon_sym_lone,
  [anon_sym_some] = anon_sym_some,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_sig_definition] = sym_sig_definition,
  [sym_name_list] = sym_name_list,
  [sym__name_list] = sym__name_list,
  [sym_sig_extends] = sym_sig_extends,
  [sym_sig_in] = sym_sig_in,
  [sym_sig_in_list] = sym_sig_in_list,
  [sym__sig_in_list] = sym__sig_in_list,
  [sym_qualified_name] = sym_qualified_name,
  [sym_multiplicity] = sym_multiplicity,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym__sig_in_list_repeat1] = aux_sym__sig_in_list_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_sig] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [sym_abstract] = {
    .visible = true,
    .named = true,
  },
  [sym_var] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_one] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_lone] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_some] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_sig_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_name_list] = {
    .visible = true,
    .named = true,
  },
  [sym__name_list] = {
    .visible = false,
    .named = true,
  },
  [sym_sig_extends] = {
    .visible = true,
    .named = true,
  },
  [sym_sig_in] = {
    .visible = true,
    .named = true,
  },
  [sym_sig_in_list] = {
    .visible = true,
    .named = true,
  },
  [sym__sig_in_list] = {
    .visible = false,
    .named = true,
  },
  [sym_qualified_name] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicity] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__sig_in_list_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_extends = 1,
  field_in_list = 2,
  field_names = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_extends] = "extends",
  [field_in_list] = "in_list",
  [field_names] = "names",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 1},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_names, 1},
  [1] =
    {field_extends, 1},
  [2] =
    {field_in_list, 1},
  [3] =
    {field_names, 2},
  [4] =
    {field_names, 3},
  [5] =
    {field_names, 4},
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
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
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
  [33] = 33,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(1);
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == ',') ADVANCE(4);
      if (lookahead == '{') ADVANCE(2);
      if (lookahead == '}') ADVANCE(3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '"' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'a') ADVANCE(1);
      if (lookahead == 'e') ADVANCE(2);
      if (lookahead == 'i') ADVANCE(3);
      if (lookahead == 'l') ADVANCE(4);
      if (lookahead == 'o') ADVANCE(5);
      if (lookahead == 's') ADVANCE(6);
      if (lookahead == 'v') ADVANCE(7);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'b') ADVANCE(8);
      END_STATE();
    case 2:
      if (lookahead == 'x') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 6:
      if (lookahead == 'i') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(15);
      END_STATE();
    case 8:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 9:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 13:
      if (lookahead == 'g') ADVANCE(20);
      END_STATE();
    case 14:
      if (lookahead == 'm') ADVANCE(21);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_one);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_sig);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(26);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_var);
      END_STATE();
    case 23:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_lone);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_some);
      END_STATE();
    case 27:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(30);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_abstract);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_sig] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_abstract] = ACTIONS(1),
    [sym_var] = ACTIONS(1),
    [anon_sym_one] = ACTIONS(1),
    [anon_sym_lone] = ACTIONS(1),
    [anon_sym_some] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(52),
    [sym__definition] = STATE(2),
    [sym_sig_definition] = STATE(2),
    [sym_multiplicity] = STATE(51),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_sig] = ACTIONS(5),
    [sym_abstract] = ACTIONS(7),
    [sym_var] = ACTIONS(9),
    [anon_sym_one] = ACTIONS(11),
    [anon_sym_lone] = ACTIONS(11),
    [anon_sym_some] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_sig,
    ACTIONS(7), 1,
      sym_abstract,
    ACTIONS(9), 1,
      sym_var,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(51), 1,
      sym_multiplicity,
    ACTIONS(11), 3,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
    STATE(3), 3,
      sym__definition,
      sym_sig_definition,
      aux_sym_source_file_repeat1,
  [26] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_sig,
    ACTIONS(20), 1,
      sym_abstract,
    ACTIONS(23), 1,
      sym_var,
    STATE(51), 1,
      sym_multiplicity,
    ACTIONS(26), 3,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
    STATE(3), 3,
      sym__definition,
      sym_sig_definition,
      aux_sym_source_file_repeat1,
  [52] = 1,
    ACTIONS(29), 7,
      ts_builtin_sym_end,
      anon_sym_sig,
      sym_abstract,
      sym_var,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [62] = 1,
    ACTIONS(31), 7,
      ts_builtin_sym_end,
      anon_sym_sig,
      sym_abstract,
      sym_var,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [72] = 1,
    ACTIONS(33), 7,
      ts_builtin_sym_end,
      anon_sym_sig,
      sym_abstract,
      sym_var,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [82] = 1,
    ACTIONS(35), 7,
      ts_builtin_sym_end,
      anon_sym_sig,
      sym_abstract,
      sym_var,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [92] = 1,
    ACTIONS(37), 7,
      ts_builtin_sym_end,
      anon_sym_sig,
      sym_abstract,
      sym_var,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [102] = 1,
    ACTIONS(39), 7,
      ts_builtin_sym_end,
      anon_sym_sig,
      sym_abstract,
      sym_var,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [112] = 1,
    ACTIONS(41), 7,
      ts_builtin_sym_end,
      anon_sym_sig,
      sym_abstract,
      sym_var,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [122] = 1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_sig,
      sym_abstract,
      sym_var,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [132] = 4,
    ACTIONS(45), 1,
      anon_sym_sig,
    ACTIONS(47), 1,
      sym_abstract,
    STATE(46), 1,
      sym_multiplicity,
    ACTIONS(11), 3,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [147] = 4,
    ACTIONS(49), 1,
      anon_sym_LBRACE,
    ACTIONS(51), 1,
      anon_sym_extends,
    ACTIONS(53), 1,
      anon_sym_in,
    STATE(36), 2,
      sym_sig_extends,
      sym_sig_in,
  [161] = 4,
    ACTIONS(51), 1,
      anon_sym_extends,
    ACTIONS(53), 1,
      anon_sym_in,
    ACTIONS(55), 1,
      anon_sym_LBRACE,
    STATE(38), 2,
      sym_sig_extends,
      sym_sig_in,
  [175] = 4,
    ACTIONS(51), 1,
      anon_sym_extends,
    ACTIONS(53), 1,
      anon_sym_in,
    ACTIONS(57), 1,
      anon_sym_LBRACE,
    STATE(50), 2,
      sym_sig_extends,
      sym_sig_in,
  [189] = 3,
    ACTIONS(59), 1,
      anon_sym_sig,
    STATE(35), 1,
      sym_multiplicity,
    ACTIONS(11), 3,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [201] = 3,
    ACTIONS(45), 1,
      anon_sym_sig,
    STATE(46), 1,
      sym_multiplicity,
    ACTIONS(11), 3,
      anon_sym_one,
      anon_sym_lone,
      anon_sym_some,
  [213] = 4,
    ACTIONS(51), 1,
      anon_sym_extends,
    ACTIONS(53), 1,
      anon_sym_in,
    ACTIONS(61), 1,
      anon_sym_LBRACE,
    STATE(42), 2,
      sym_sig_extends,
      sym_sig_in,
  [227] = 2,
    ACTIONS(65), 1,
      anon_sym_COMMA,
    ACTIONS(63), 3,
      anon_sym_LBRACE,
      anon_sym_extends,
      anon_sym_in,
  [236] = 4,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(22), 1,
      sym_qualified_name,
    STATE(37), 1,
      sym_sig_in_list,
    STATE(43), 1,
      sym__sig_in_list,
  [249] = 3,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(13), 1,
      sym_name_list,
    STATE(24), 1,
      sym__name_list,
  [259] = 3,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    STATE(27), 1,
      aux_sym__sig_in_list_repeat1,
  [269] = 3,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(18), 1,
      sym_name_list,
    STATE(24), 1,
      sym__name_list,
  [279] = 1,
    ACTIONS(75), 3,
      anon_sym_LBRACE,
      anon_sym_extends,
      anon_sym_in,
  [285] = 1,
    ACTIONS(77), 3,
      anon_sym_LBRACE,
      anon_sym_extends,
      anon_sym_in,
  [291] = 3,
    ACTIONS(79), 1,
      anon_sym_LBRACE,
    ACTIONS(81), 1,
      anon_sym_PLUS,
    STATE(26), 1,
      aux_sym__sig_in_list_repeat1,
  [301] = 3,
    ACTIONS(73), 1,
      anon_sym_PLUS,
    ACTIONS(84), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      aux_sym__sig_in_list_repeat1,
  [311] = 3,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(15), 1,
      sym_name_list,
    STATE(24), 1,
      sym__name_list,
  [321] = 3,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(14), 1,
      sym_name_list,
    STATE(24), 1,
      sym__name_list,
  [331] = 2,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(45), 1,
      sym_qualified_name,
  [338] = 2,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(33), 1,
      sym_qualified_name,
  [345] = 1,
    ACTIONS(86), 2,
      anon_sym_LBRACE,
      anon_sym_PLUS,
  [350] = 1,
    ACTIONS(79), 2,
      anon_sym_LBRACE,
      anon_sym_PLUS,
  [355] = 2,
    ACTIONS(69), 1,
      sym_identifier,
    STATE(25), 1,
      sym__name_list,
  [362] = 1,
    ACTIONS(88), 1,
      anon_sym_sig,
  [366] = 1,
    ACTIONS(90), 1,
      anon_sym_LBRACE,
  [370] = 1,
    ACTIONS(92), 1,
      anon_sym_LBRACE,
  [374] = 1,
    ACTIONS(94), 1,
      anon_sym_LBRACE,
  [378] = 1,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
  [382] = 1,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
  [386] = 1,
    ACTIONS(100), 1,
      anon_sym_RBRACE,
  [390] = 1,
    ACTIONS(102), 1,
      anon_sym_LBRACE,
  [394] = 1,
    ACTIONS(104), 1,
      anon_sym_LBRACE,
  [398] = 1,
    ACTIONS(106), 1,
      anon_sym_RBRACE,
  [402] = 1,
    ACTIONS(108), 1,
      anon_sym_LBRACE,
  [406] = 1,
    ACTIONS(59), 1,
      anon_sym_sig,
  [410] = 1,
    ACTIONS(110), 1,
      anon_sym_RBRACE,
  [414] = 1,
    ACTIONS(112), 1,
      anon_sym_RBRACE,
  [418] = 1,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
  [422] = 1,
    ACTIONS(116), 1,
      anon_sym_LBRACE,
  [426] = 1,
    ACTIONS(45), 1,
      anon_sym_sig,
  [430] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [434] = 1,
    ACTIONS(120), 1,
      anon_sym_RBRACE,
  [438] = 1,
    ACTIONS(122), 1,
      anon_sym_sig,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 62,
  [SMALL_STATE(6)] = 72,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 102,
  [SMALL_STATE(10)] = 112,
  [SMALL_STATE(11)] = 122,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 147,
  [SMALL_STATE(14)] = 161,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 189,
  [SMALL_STATE(17)] = 201,
  [SMALL_STATE(18)] = 213,
  [SMALL_STATE(19)] = 227,
  [SMALL_STATE(20)] = 236,
  [SMALL_STATE(21)] = 249,
  [SMALL_STATE(22)] = 259,
  [SMALL_STATE(23)] = 269,
  [SMALL_STATE(24)] = 279,
  [SMALL_STATE(25)] = 285,
  [SMALL_STATE(26)] = 291,
  [SMALL_STATE(27)] = 301,
  [SMALL_STATE(28)] = 311,
  [SMALL_STATE(29)] = 321,
  [SMALL_STATE(30)] = 331,
  [SMALL_STATE(31)] = 338,
  [SMALL_STATE(32)] = 345,
  [SMALL_STATE(33)] = 350,
  [SMALL_STATE(34)] = 355,
  [SMALL_STATE(35)] = 362,
  [SMALL_STATE(36)] = 366,
  [SMALL_STATE(37)] = 370,
  [SMALL_STATE(38)] = 374,
  [SMALL_STATE(39)] = 378,
  [SMALL_STATE(40)] = 382,
  [SMALL_STATE(41)] = 386,
  [SMALL_STATE(42)] = 390,
  [SMALL_STATE(43)] = 394,
  [SMALL_STATE(44)] = 398,
  [SMALL_STATE(45)] = 402,
  [SMALL_STATE(46)] = 406,
  [SMALL_STATE(47)] = 410,
  [SMALL_STATE(48)] = 414,
  [SMALL_STATE(49)] = 418,
  [SMALL_STATE(50)] = 422,
  [SMALL_STATE(51)] = 426,
  [SMALL_STATE(52)] = 430,
  [SMALL_STATE(53)] = 434,
  [SMALL_STATE(54)] = 438,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(29),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(17),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(54),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_definition, 7, .production_id = 6),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_definition, 7, .production_id = 5),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_definition, 6, .production_id = 5),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_definition, 6, .production_id = 4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_definition, 8, .production_id = 6),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_definition, 5, .production_id = 4),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_definition, 5, .production_id = 1),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_definition, 4, .production_id = 1),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_in_list, 1),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_name_list, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__name_list, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__sig_in_list_repeat1, 2),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__sig_in_list_repeat1, 2), SHIFT_REPEAT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__sig_in_list, 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_qualified_name, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_in, 2, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_in_list, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sig_extends, 2, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multiplicity, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_Alloy6(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_identifier,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
