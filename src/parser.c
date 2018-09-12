#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 37
#define SYMBOL_COUNT 24
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  anon_sym_LBRACK = 1,
  anon_sym_GT = 2,
  anon_sym_LT = 3,
  anon_sym_RBRACK = 4,
  anon_sym_PIPE = 5,
  anon_sym_PLUS = 6,
  anon_sym_COMMA = 7,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH = 8,
  aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH = 9,
  aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH = 10,
  sym_document = 11,
  sym__chunk = 12,
  sym_start_tag = 13,
  sym_end_tag = 14,
  sym_milestone_tag = 15,
  sym_start_layer_suffix = 16,
  sym_end_layer_suffix = 17,
  sym_name = 18,
  sym_text = 19,
  sym_whitespace = 20,
  aux_sym_document_repeat1 = 21,
  aux_sym_start_layer_suffix_repeat1 = 22,
  aux_sym_end_layer_suffix_repeat1 = 23,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [anon_sym_LBRACK] = "[",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = "/[a-zA-Z]+/",
  [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = "/[^[<]+/",
  [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = "/[ \\t\\n]+/",
  [sym_document] = "document",
  [sym__chunk] = "_chunk",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_milestone_tag] = "milestone_tag",
  [sym_start_layer_suffix] = "start_layer_suffix",
  [sym_end_layer_suffix] = "end_layer_suffix",
  [sym_name] = "name",
  [sym_text] = "text",
  [sym_whitespace] = "whitespace",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_layer_suffix_repeat1] = "start_layer_suffix_repeat1",
  [aux_sym_end_layer_suffix_repeat1] = "end_layer_suffix_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__chunk] = {
    .visible = false,
    .named = true,
  },
  [sym_start_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_milestone_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_start_layer_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_end_layer_suffix] = {
    .visible = true,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [sym_whitespace] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_layer_suffix_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_end_layer_suffix_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '+')
        ADVANCE(2);
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '|')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        ADVANCE(9);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        ADVANCE(9);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 11:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '[')
        ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        ADVANCE(12);
      ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == ' ')
        ADVANCE(12);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(13);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '+')
        ADVANCE(2);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 0)
        ADVANCE(1);
      END_STATE();
    case 16:
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '|')
        ADVANCE(8);
      END_STATE();
    case 17:
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(7);
      if (lookahead == '|')
        ADVANCE(8);
      END_STATE();
    case 18:
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(5);
      if (lookahead == ']')
        ADVANCE(7);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 16},
  [9] = {.lex_state = 17},
  [10] = {.lex_state = 17},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 16},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 18},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 18},
  [26] = {.lex_state = 14},
  [27] = {.lex_state = 18},
  [28] = {.lex_state = 14},
  [29] = {.lex_state = 18},
  [30] = {.lex_state = 18},
  [31] = {.lex_state = 14},
  [32] = {.lex_state = 18},
  [33] = {.lex_state = 18},
  [34] = {.lex_state = 18},
  [35] = {.lex_state = 18},
  [36] = {.lex_state = 18},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(6),
    [sym__chunk] = STATE(7),
    [sym_start_tag] = STATE(7),
    [sym_end_tag] = STATE(7),
    [sym_milestone_tag] = STATE(7),
    [sym_text] = STATE(7),
    [sym_whitespace] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(9),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(11),
  },
  [2] = {
    [sym_name] = STATE(9),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [3] = {
    [sym_name] = STATE(10),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(15),
    [anon_sym_LBRACK] = ACTIONS(15),
    [anon_sym_LT] = ACTIONS(15),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(15),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(17),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_LT] = ACTIONS(19),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(23),
  },
  [7] = {
    [sym__chunk] = STATE(11),
    [sym_start_tag] = STATE(11),
    [sym_end_tag] = STATE(11),
    [sym_milestone_tag] = STATE(11),
    [sym_text] = STATE(11),
    [sym_whitespace] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_LT] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(9),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(11),
  },
  [8] = {
    [anon_sym_GT] = ACTIONS(27),
    [anon_sym_RBRACK] = ACTIONS(27),
    [anon_sym_PIPE] = ACTIONS(27),
    [anon_sym_COMMA] = ACTIONS(27),
  },
  [9] = {
    [sym_start_layer_suffix] = STATE(15),
    [anon_sym_GT] = ACTIONS(29),
    [anon_sym_RBRACK] = ACTIONS(31),
    [anon_sym_PIPE] = ACTIONS(33),
  },
  [10] = {
    [sym_end_layer_suffix] = STATE(18),
    [anon_sym_RBRACK] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(37),
  },
  [11] = {
    [sym__chunk] = STATE(11),
    [sym_start_tag] = STATE(11),
    [sym_end_tag] = STATE(11),
    [sym_milestone_tag] = STATE(11),
    [sym_text] = STATE(11),
    [sym_whitespace] = STATE(11),
    [aux_sym_document_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(39),
    [anon_sym_LBRACK] = ACTIONS(41),
    [anon_sym_LT] = ACTIONS(44),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(47),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(50),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(53),
    [anon_sym_LBRACK] = ACTIONS(53),
    [anon_sym_LT] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(55),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(57),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_LT] = ACTIONS(57),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(57),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(59),
  },
  [14] = {
    [sym_name] = STATE(20),
    [anon_sym_PLUS] = ACTIONS(61),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [15] = {
    [anon_sym_GT] = ACTIONS(63),
    [anon_sym_RBRACK] = ACTIONS(65),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(67),
    [anon_sym_LT] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(67),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(69),
  },
  [17] = {
    [sym_name] = STATE(23),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [18] = {
    [anon_sym_RBRACK] = ACTIONS(71),
  },
  [19] = {
    [sym_name] = STATE(25),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [20] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(27),
    [anon_sym_GT] = ACTIONS(73),
    [anon_sym_RBRACK] = ACTIONS(73),
    [anon_sym_COMMA] = ACTIONS(75),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(77),
    [anon_sym_LBRACK] = ACTIONS(77),
    [anon_sym_LT] = ACTIONS(77),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(79),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(81),
    [anon_sym_LT] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(81),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(83),
  },
  [23] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(29),
    [anon_sym_RBRACK] = ACTIONS(85),
    [anon_sym_COMMA] = ACTIONS(87),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(89),
    [anon_sym_LBRACK] = ACTIONS(89),
    [anon_sym_LT] = ACTIONS(89),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [aux_sym_SLASH_LBRACK_BSLASHt_BSLASHn_RBRACK_PLUS_SLASH] = ACTIONS(91),
  },
  [25] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(30),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(75),
  },
  [26] = {
    [sym_name] = STATE(32),
    [anon_sym_PLUS] = ACTIONS(95),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [27] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(33),
    [anon_sym_GT] = ACTIONS(93),
    [anon_sym_RBRACK] = ACTIONS(93),
    [anon_sym_COMMA] = ACTIONS(75),
  },
  [28] = {
    [sym_name] = STATE(34),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [29] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(97),
    [anon_sym_COMMA] = ACTIONS(87),
  },
  [30] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(33),
    [anon_sym_GT] = ACTIONS(99),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_COMMA] = ACTIONS(75),
  },
  [31] = {
    [sym_name] = STATE(36),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [32] = {
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(101),
  },
  [33] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(33),
    [anon_sym_GT] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(101),
    [anon_sym_COMMA] = ACTIONS(103),
  },
  [34] = {
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(106),
  },
  [35] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(35),
    [anon_sym_RBRACK] = ACTIONS(106),
    [anon_sym_COMMA] = ACTIONS(108),
  },
  [36] = {
    [anon_sym_GT] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(111),
    [anon_sym_COMMA] = ACTIONS(111),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(3),
  [9] = {.count = 1, .reusable = true}, SHIFT(4),
  [11] = {.count = 1, .reusable = false}, SHIFT(5),
  [13] = {.count = 1, .reusable = true}, SHIFT(8),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [17] = {.count = 1, .reusable = false}, REDUCE(sym_text, 1),
  [19] = {.count = 1, .reusable = true}, REDUCE(sym_whitespace, 1),
  [21] = {.count = 1, .reusable = false}, REDUCE(sym_whitespace, 1),
  [23] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [25] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [29] = {.count = 1, .reusable = true}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(13),
  [33] = {.count = 1, .reusable = true}, SHIFT(14),
  [35] = {.count = 1, .reusable = true}, SHIFT(16),
  [37] = {.count = 1, .reusable = true}, SHIFT(17),
  [39] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [44] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [53] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [55] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [57] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 3),
  [59] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 3),
  [61] = {.count = 1, .reusable = true}, SHIFT(19),
  [63] = {.count = 1, .reusable = true}, SHIFT(21),
  [65] = {.count = 1, .reusable = true}, SHIFT(22),
  [67] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [69] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [71] = {.count = 1, .reusable = true}, SHIFT(24),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 2),
  [75] = {.count = 1, .reusable = true}, SHIFT(26),
  [77] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [79] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 4),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 4),
  [85] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 2),
  [87] = {.count = 1, .reusable = true}, SHIFT(28),
  [89] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 4),
  [91] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 4),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 3),
  [95] = {.count = 1, .reusable = true}, SHIFT(31),
  [97] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 3),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 4),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2),
  [103] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2), SHIFT_REPEAT(26),
  [106] = {.count = 1, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2),
  [108] = {.count = 2, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2), SHIFT_REPEAT(28),
  [111] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 3),
};

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_TAGML() {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
