#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 63
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  sym_open_start_markup = 1,
  sym_close_start_markup = 2,
  sym_open_end_markup = 3,
  sym_close_end_markup = 4,
  anon_sym_PIPE = 5,
  anon_sym_PLUS = 6,
  anon_sym_COMMA = 7,
  sym_begin_text_variation = 8,
  sym_end_text_variation = 9,
  aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH = 10,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH = 11,
  aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH = 12,
  sym_document = 13,
  sym__chunk = 14,
  sym_start_tag = 15,
  sym_end_tag = 16,
  sym_milestone_tag = 17,
  sym_start_layer_suffix = 18,
  sym_end_layer_suffix = 19,
  sym_text_variation = 20,
  sym_text_variation_separator = 21,
  sym_variant_text = 22,
  sym_name = 23,
  sym_text = 24,
  aux_sym_document_repeat1 = 25,
  aux_sym_start_layer_suffix_repeat1 = 26,
  aux_sym_end_layer_suffix_repeat1 = 27,
  aux_sym_text_variation_repeat1 = 28,
  aux_sym_variant_text_repeat1 = 29,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [sym_open_start_markup] = "open_start_markup",
  [sym_close_start_markup] = "close_start_markup",
  [sym_open_end_markup] = "open_end_markup",
  [sym_close_end_markup] = "close_end_markup",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [sym_begin_text_variation] = "begin_text_variation",
  [sym_end_text_variation] = "end_text_variation",
  [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = "/[^[<\\|]+/",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = "/[a-zA-Z]+/",
  [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = "/[^[<]+/",
  [sym_document] = "document",
  [sym__chunk] = "_chunk",
  [sym_start_tag] = "start_tag",
  [sym_end_tag] = "end_tag",
  [sym_milestone_tag] = "milestone_tag",
  [sym_start_layer_suffix] = "start_layer_suffix",
  [sym_end_layer_suffix] = "end_layer_suffix",
  [sym_text_variation] = "text_variation",
  [sym_text_variation_separator] = "text_variation_separator",
  [sym_variant_text] = "variant_text",
  [sym_name] = "name",
  [sym_text] = "text",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_layer_suffix_repeat1] = "start_layer_suffix_repeat1",
  [aux_sym_end_layer_suffix_repeat1] = "end_layer_suffix_repeat1",
  [aux_sym_text_variation_repeat1] = "text_variation_repeat1",
  [aux_sym_variant_text_repeat1] = "variant_text_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_open_start_markup] = {
    .visible = true,
    .named = true,
  },
  [sym_close_start_markup] = {
    .visible = true,
    .named = true,
  },
  [sym_open_end_markup] = {
    .visible = true,
    .named = true,
  },
  [sym_close_end_markup] = {
    .visible = true,
    .named = true,
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
  [sym_begin_text_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_end_text_variation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = {
    .visible = false,
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
  [sym_text_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_text_variation_separator] = {
    .visible = true,
    .named = true,
  },
  [sym_variant_text] = {
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
  [aux_sym_text_variation_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variant_text_repeat1] = {
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
        ADVANCE(6);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(0);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
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
      ACCEPT_TOKEN(sym_open_end_markup);
      if (lookahead == '|')
        ADVANCE(5);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(sym_begin_text_variation);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_close_start_markup);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_open_start_markup);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_close_end_markup);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_end_text_variation);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(13);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '+')
        ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(15);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(18);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH);
      if (lookahead == '|')
        ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(19);
      END_STATE();
    case 20:
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 22:
      if (lookahead == '>')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '|')
        ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(22);
      END_STATE();
    case 23:
      if (lookahead == '<')
        ADVANCE(4);
      if (lookahead == '[')
        ADVANCE(7);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead != 0)
        ADVANCE(18);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>')
        ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(14);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_end_text_variation);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(14);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH);
      if (lookahead == '|')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == '|')
        ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(27);
      END_STATE();
    case 28:
      if (lookahead == ',')
        ADVANCE(3);
      if (lookahead == '>')
        ADVANCE(6);
      if (lookahead == ']')
        ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        SKIP(28);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 12},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 16},
  [5] = {.lex_state = 12},
  [6] = {.lex_state = 19},
  [7] = {.lex_state = 12},
  [8] = {.lex_state = 20},
  [9] = {.lex_state = 22},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 15},
  [13] = {.lex_state = 16},
  [14] = {.lex_state = 23},
  [15] = {.lex_state = 27},
  [16] = {.lex_state = 23},
  [17] = {.lex_state = 12},
  [18] = {.lex_state = 12},
  [19] = {.lex_state = 12},
  [20] = {.lex_state = 15},
  [21] = {.lex_state = 20},
  [22] = {.lex_state = 12},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 20},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 22},
  [27] = {.lex_state = 27},
  [28] = {.lex_state = 27},
  [29] = {.lex_state = 12},
  [30] = {.lex_state = 27},
  [31] = {.lex_state = 23},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 12},
  [35] = {.lex_state = 12},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 12},
  [38] = {.lex_state = 23},
  [39] = {.lex_state = 23},
  [40] = {.lex_state = 20},
  [41] = {.lex_state = 23},
  [42] = {.lex_state = 20},
  [43] = {.lex_state = 23},
  [44] = {.lex_state = 27},
  [45] = {.lex_state = 12},
  [46] = {.lex_state = 27},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 15},
  [49] = {.lex_state = 28},
  [50] = {.lex_state = 15},
  [51] = {.lex_state = 28},
  [52] = {.lex_state = 23},
  [53] = {.lex_state = 23},
  [54] = {.lex_state = 23},
  [55] = {.lex_state = 23},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 15},
  [58] = {.lex_state = 28},
  [59] = {.lex_state = 28},
  [60] = {.lex_state = 28},
  [61] = {.lex_state = 28},
  [62] = {.lex_state = 28},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_open_start_markup] = ACTIONS(1),
    [sym_close_start_markup] = ACTIONS(1),
    [sym_open_end_markup] = ACTIONS(3),
    [sym_close_end_markup] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_begin_text_variation] = ACTIONS(1),
    [sym_end_text_variation] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(6),
    [sym__chunk] = STATE(7),
    [sym_start_tag] = STATE(7),
    [sym_end_tag] = STATE(7),
    [sym_milestone_tag] = STATE(7),
    [sym_text_variation] = STATE(7),
    [sym_text] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_open_start_markup] = ACTIONS(7),
    [sym_open_end_markup] = ACTIONS(9),
    [sym_begin_text_variation] = ACTIONS(11),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [2] = {
    [sym_name] = STATE(9),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [3] = {
    [sym_name] = STATE(10),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [4] = {
    [sym__chunk] = STATE(16),
    [sym_start_tag] = STATE(16),
    [sym_end_tag] = STATE(16),
    [sym_milestone_tag] = STATE(16),
    [sym_text_variation] = STATE(16),
    [sym_variant_text] = STATE(15),
    [sym_text] = STATE(16),
    [aux_sym_variant_text_repeat1] = STATE(16),
    [sym_open_start_markup] = ACTIONS(17),
    [sym_open_end_markup] = ACTIONS(19),
    [sym_begin_text_variation] = ACTIONS(21),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(25),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym_open_start_markup] = ACTIONS(29),
    [sym_open_end_markup] = ACTIONS(29),
    [sym_begin_text_variation] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(27),
  },
  [6] = {
    [ts_builtin_sym_end] = ACTIONS(31),
  },
  [7] = {
    [sym__chunk] = STATE(17),
    [sym_start_tag] = STATE(17),
    [sym_end_tag] = STATE(17),
    [sym_milestone_tag] = STATE(17),
    [sym_text_variation] = STATE(17),
    [sym_text] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(33),
    [sym_open_start_markup] = ACTIONS(7),
    [sym_open_end_markup] = ACTIONS(9),
    [sym_begin_text_variation] = ACTIONS(11),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(13),
  },
  [8] = {
    [sym_close_start_markup] = ACTIONS(35),
    [sym_close_end_markup] = ACTIONS(35),
    [anon_sym_PIPE] = ACTIONS(35),
    [anon_sym_COMMA] = ACTIONS(35),
  },
  [9] = {
    [sym_start_layer_suffix] = STATE(21),
    [sym_close_start_markup] = ACTIONS(37),
    [sym_close_end_markup] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(41),
  },
  [10] = {
    [sym_end_layer_suffix] = STATE(24),
    [sym_close_end_markup] = ACTIONS(43),
    [anon_sym_PIPE] = ACTIONS(45),
  },
  [11] = {
    [sym_name] = STATE(25),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [12] = {
    [sym_name] = STATE(26),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [13] = {
    [sym__chunk] = STATE(16),
    [sym_start_tag] = STATE(16),
    [sym_end_tag] = STATE(16),
    [sym_milestone_tag] = STATE(16),
    [sym_text_variation] = STATE(16),
    [sym_variant_text] = STATE(27),
    [sym_text] = STATE(16),
    [aux_sym_variant_text_repeat1] = STATE(16),
    [sym_open_start_markup] = ACTIONS(17),
    [sym_open_end_markup] = ACTIONS(19),
    [sym_begin_text_variation] = ACTIONS(21),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(23),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(25),
  },
  [14] = {
    [sym_open_start_markup] = ACTIONS(29),
    [sym_open_end_markup] = ACTIONS(29),
    [anon_sym_PIPE] = ACTIONS(29),
    [sym_begin_text_variation] = ACTIONS(29),
    [sym_end_text_variation] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(29),
  },
  [15] = {
    [sym_text_variation_separator] = STATE(30),
    [aux_sym_text_variation_repeat1] = STATE(30),
    [anon_sym_PIPE] = ACTIONS(47),
    [sym_end_text_variation] = ACTIONS(49),
  },
  [16] = {
    [sym__chunk] = STATE(31),
    [sym_start_tag] = STATE(31),
    [sym_end_tag] = STATE(31),
    [sym_milestone_tag] = STATE(31),
    [sym_text_variation] = STATE(31),
    [sym_text] = STATE(31),
    [aux_sym_variant_text_repeat1] = STATE(31),
    [sym_open_start_markup] = ACTIONS(17),
    [sym_open_end_markup] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(51),
    [sym_begin_text_variation] = ACTIONS(21),
    [sym_end_text_variation] = ACTIONS(51),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(53),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(25),
  },
  [17] = {
    [sym__chunk] = STATE(17),
    [sym_start_tag] = STATE(17),
    [sym_end_tag] = STATE(17),
    [sym_milestone_tag] = STATE(17),
    [sym_text_variation] = STATE(17),
    [sym_text] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_open_start_markup] = ACTIONS(57),
    [sym_open_end_markup] = ACTIONS(60),
    [sym_begin_text_variation] = ACTIONS(63),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(66),
  },
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(69),
    [sym_open_start_markup] = ACTIONS(71),
    [sym_open_end_markup] = ACTIONS(71),
    [sym_begin_text_variation] = ACTIONS(71),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(69),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(73),
    [sym_open_start_markup] = ACTIONS(75),
    [sym_open_end_markup] = ACTIONS(75),
    [sym_begin_text_variation] = ACTIONS(75),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(73),
  },
  [20] = {
    [sym_name] = STATE(33),
    [anon_sym_PLUS] = ACTIONS(77),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [21] = {
    [sym_close_start_markup] = ACTIONS(79),
    [sym_close_end_markup] = ACTIONS(81),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(83),
    [sym_open_start_markup] = ACTIONS(85),
    [sym_open_end_markup] = ACTIONS(85),
    [sym_begin_text_variation] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(83),
  },
  [23] = {
    [sym_name] = STATE(36),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [24] = {
    [sym_close_end_markup] = ACTIONS(87),
  },
  [25] = {
    [sym_start_layer_suffix] = STATE(40),
    [sym_close_start_markup] = ACTIONS(89),
    [sym_close_end_markup] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(41),
  },
  [26] = {
    [sym_end_layer_suffix] = STATE(42),
    [sym_close_end_markup] = ACTIONS(93),
    [anon_sym_PIPE] = ACTIONS(45),
  },
  [27] = {
    [sym_text_variation_separator] = STATE(44),
    [aux_sym_text_variation_repeat1] = STATE(44),
    [anon_sym_PIPE] = ACTIONS(47),
    [sym_end_text_variation] = ACTIONS(95),
  },
  [28] = {
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_end_text_variation] = ACTIONS(99),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_open_start_markup] = ACTIONS(103),
    [sym_open_end_markup] = ACTIONS(103),
    [sym_begin_text_variation] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(101),
  },
  [30] = {
    [sym_text_variation_separator] = STATE(46),
    [aux_sym_text_variation_repeat1] = STATE(46),
    [anon_sym_PIPE] = ACTIONS(47),
    [sym_end_text_variation] = ACTIONS(105),
  },
  [31] = {
    [sym__chunk] = STATE(31),
    [sym_start_tag] = STATE(31),
    [sym_end_tag] = STATE(31),
    [sym_milestone_tag] = STATE(31),
    [sym_text_variation] = STATE(31),
    [sym_text] = STATE(31),
    [aux_sym_variant_text_repeat1] = STATE(31),
    [sym_open_start_markup] = ACTIONS(107),
    [sym_open_end_markup] = ACTIONS(110),
    [anon_sym_PIPE] = ACTIONS(113),
    [sym_begin_text_variation] = ACTIONS(115),
    [sym_end_text_variation] = ACTIONS(113),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(118),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(121),
  },
  [32] = {
    [sym_name] = STATE(47),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [33] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(49),
    [sym_close_start_markup] = ACTIONS(124),
    [sym_close_end_markup] = ACTIONS(124),
    [anon_sym_COMMA] = ACTIONS(126),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(128),
    [sym_open_start_markup] = ACTIONS(130),
    [sym_open_end_markup] = ACTIONS(130),
    [sym_begin_text_variation] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(128),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym_open_start_markup] = ACTIONS(134),
    [sym_open_end_markup] = ACTIONS(134),
    [sym_begin_text_variation] = ACTIONS(134),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(132),
  },
  [36] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(51),
    [sym_close_end_markup] = ACTIONS(136),
    [anon_sym_COMMA] = ACTIONS(138),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(140),
    [sym_open_start_markup] = ACTIONS(142),
    [sym_open_end_markup] = ACTIONS(142),
    [sym_begin_text_variation] = ACTIONS(142),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(140),
  },
  [38] = {
    [sym_open_start_markup] = ACTIONS(71),
    [sym_open_end_markup] = ACTIONS(71),
    [anon_sym_PIPE] = ACTIONS(71),
    [sym_begin_text_variation] = ACTIONS(71),
    [sym_end_text_variation] = ACTIONS(71),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(71),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(71),
  },
  [39] = {
    [sym_open_start_markup] = ACTIONS(75),
    [sym_open_end_markup] = ACTIONS(75),
    [anon_sym_PIPE] = ACTIONS(75),
    [sym_begin_text_variation] = ACTIONS(75),
    [sym_end_text_variation] = ACTIONS(75),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(75),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(75),
  },
  [40] = {
    [sym_close_start_markup] = ACTIONS(144),
    [sym_close_end_markup] = ACTIONS(146),
  },
  [41] = {
    [sym_open_start_markup] = ACTIONS(85),
    [sym_open_end_markup] = ACTIONS(85),
    [anon_sym_PIPE] = ACTIONS(85),
    [sym_begin_text_variation] = ACTIONS(85),
    [sym_end_text_variation] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(85),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(85),
  },
  [42] = {
    [sym_close_end_markup] = ACTIONS(148),
  },
  [43] = {
    [sym_open_start_markup] = ACTIONS(103),
    [sym_open_end_markup] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(103),
    [sym_begin_text_variation] = ACTIONS(103),
    [sym_end_text_variation] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(103),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(103),
  },
  [44] = {
    [sym_text_variation_separator] = STATE(46),
    [aux_sym_text_variation_repeat1] = STATE(46),
    [anon_sym_PIPE] = ACTIONS(47),
    [sym_end_text_variation] = ACTIONS(150),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [sym_open_start_markup] = ACTIONS(154),
    [sym_open_end_markup] = ACTIONS(154),
    [sym_begin_text_variation] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(152),
  },
  [46] = {
    [sym_text_variation_separator] = STATE(46),
    [aux_sym_text_variation_repeat1] = STATE(46),
    [anon_sym_PIPE] = ACTIONS(156),
    [sym_end_text_variation] = ACTIONS(159),
  },
  [47] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(56),
    [sym_close_start_markup] = ACTIONS(161),
    [sym_close_end_markup] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(126),
  },
  [48] = {
    [sym_name] = STATE(58),
    [anon_sym_PLUS] = ACTIONS(163),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [49] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(59),
    [sym_close_start_markup] = ACTIONS(161),
    [sym_close_end_markup] = ACTIONS(161),
    [anon_sym_COMMA] = ACTIONS(126),
  },
  [50] = {
    [sym_name] = STATE(60),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [51] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(61),
    [sym_close_end_markup] = ACTIONS(165),
    [anon_sym_COMMA] = ACTIONS(138),
  },
  [52] = {
    [sym_open_start_markup] = ACTIONS(130),
    [sym_open_end_markup] = ACTIONS(130),
    [anon_sym_PIPE] = ACTIONS(130),
    [sym_begin_text_variation] = ACTIONS(130),
    [sym_end_text_variation] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(130),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(130),
  },
  [53] = {
    [sym_open_start_markup] = ACTIONS(134),
    [sym_open_end_markup] = ACTIONS(134),
    [anon_sym_PIPE] = ACTIONS(134),
    [sym_begin_text_variation] = ACTIONS(134),
    [sym_end_text_variation] = ACTIONS(134),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(134),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(134),
  },
  [54] = {
    [sym_open_start_markup] = ACTIONS(142),
    [sym_open_end_markup] = ACTIONS(142),
    [anon_sym_PIPE] = ACTIONS(142),
    [sym_begin_text_variation] = ACTIONS(142),
    [sym_end_text_variation] = ACTIONS(142),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(142),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(142),
  },
  [55] = {
    [sym_open_start_markup] = ACTIONS(154),
    [sym_open_end_markup] = ACTIONS(154),
    [anon_sym_PIPE] = ACTIONS(154),
    [sym_begin_text_variation] = ACTIONS(154),
    [sym_end_text_variation] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_BSLASH_PIPE_RBRACK_PLUS_SLASH] = ACTIONS(154),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(154),
  },
  [56] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(59),
    [sym_close_start_markup] = ACTIONS(167),
    [sym_close_end_markup] = ACTIONS(167),
    [anon_sym_COMMA] = ACTIONS(126),
  },
  [57] = {
    [sym_name] = STATE(62),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [58] = {
    [sym_close_start_markup] = ACTIONS(169),
    [sym_close_end_markup] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(169),
  },
  [59] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(59),
    [sym_close_start_markup] = ACTIONS(169),
    [sym_close_end_markup] = ACTIONS(169),
    [anon_sym_COMMA] = ACTIONS(171),
  },
  [60] = {
    [sym_close_end_markup] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(174),
  },
  [61] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(61),
    [sym_close_end_markup] = ACTIONS(174),
    [anon_sym_COMMA] = ACTIONS(176),
  },
  [62] = {
    [sym_close_start_markup] = ACTIONS(179),
    [sym_close_end_markup] = ACTIONS(179),
    [anon_sym_COMMA] = ACTIONS(179),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(2),
  [9] = {.count = 1, .reusable = false}, SHIFT(3),
  [11] = {.count = 1, .reusable = false}, SHIFT(4),
  [13] = {.count = 1, .reusable = true}, SHIFT(5),
  [15] = {.count = 1, .reusable = true}, SHIFT(8),
  [17] = {.count = 1, .reusable = false}, SHIFT(11),
  [19] = {.count = 1, .reusable = false}, SHIFT(12),
  [21] = {.count = 1, .reusable = false}, SHIFT(13),
  [23] = {.count = 1, .reusable = false}, SHIFT(16),
  [25] = {.count = 1, .reusable = false}, SHIFT(14),
  [27] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [29] = {.count = 1, .reusable = false}, REDUCE(sym_text, 1),
  [31] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(19),
  [41] = {.count = 1, .reusable = true}, SHIFT(20),
  [43] = {.count = 1, .reusable = true}, SHIFT(22),
  [45] = {.count = 1, .reusable = true}, SHIFT(23),
  [47] = {.count = 1, .reusable = false}, SHIFT(28),
  [49] = {.count = 1, .reusable = true}, SHIFT(29),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_variant_text, 1),
  [53] = {.count = 1, .reusable = false}, SHIFT(31),
  [55] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [57] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [60] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [63] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [66] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [69] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [71] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [73] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 3),
  [75] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 3),
  [77] = {.count = 1, .reusable = true}, SHIFT(32),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, SHIFT(35),
  [83] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [85] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [87] = {.count = 1, .reusable = true}, SHIFT(37),
  [89] = {.count = 1, .reusable = true}, SHIFT(38),
  [91] = {.count = 1, .reusable = true}, SHIFT(39),
  [93] = {.count = 1, .reusable = true}, SHIFT(41),
  [95] = {.count = 1, .reusable = true}, SHIFT(43),
  [97] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation_separator, 1),
  [99] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation_separator, 1),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation, 3),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation, 3),
  [105] = {.count = 1, .reusable = true}, SHIFT(45),
  [107] = {.count = 2, .reusable = false}, REDUCE(aux_sym_variant_text_repeat1, 2), SHIFT_REPEAT(11),
  [110] = {.count = 2, .reusable = false}, REDUCE(aux_sym_variant_text_repeat1, 2), SHIFT_REPEAT(12),
  [113] = {.count = 1, .reusable = false}, REDUCE(aux_sym_variant_text_repeat1, 2),
  [115] = {.count = 2, .reusable = false}, REDUCE(aux_sym_variant_text_repeat1, 2), SHIFT_REPEAT(13),
  [118] = {.count = 2, .reusable = false}, REDUCE(aux_sym_variant_text_repeat1, 2), SHIFT_REPEAT(31),
  [121] = {.count = 2, .reusable = false}, REDUCE(aux_sym_variant_text_repeat1, 2), SHIFT_REPEAT(14),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 2),
  [126] = {.count = 1, .reusable = true}, SHIFT(48),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 4),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 4),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 2),
  [138] = {.count = 1, .reusable = true}, SHIFT(50),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 4),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 4),
  [144] = {.count = 1, .reusable = true}, SHIFT(52),
  [146] = {.count = 1, .reusable = true}, SHIFT(53),
  [148] = {.count = 1, .reusable = true}, SHIFT(54),
  [150] = {.count = 1, .reusable = true}, SHIFT(55),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation, 4),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation, 4),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_variation_repeat1, 2), SHIFT_REPEAT(28),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_variation_repeat1, 2),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 3),
  [163] = {.count = 1, .reusable = true}, SHIFT(57),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 3),
  [167] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 4),
  [169] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2),
  [171] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2), SHIFT_REPEAT(48),
  [174] = {.count = 1, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2),
  [176] = {.count = 2, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2), SHIFT_REPEAT(50),
  [179] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 3),
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
