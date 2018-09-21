#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 142
#define SYMBOL_COUNT 71
#define ALIAS_COUNT 0
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 0

enum {
  aux_sym_SLASH_BSLASHs_PLUS_SLASH = 1,
  anon_sym_LBRACK = 2,
  sym__close_start_markup = 3,
  sym__open_end_markup = 4,
  anon_sym_RBRACK = 5,
  anon_sym_PIPE = 6,
  anon_sym_PLUS = 7,
  anon_sym_COMMA = 8,
  sym_begin_text_variation = 9,
  sym_end_text_variation = 10,
  aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH = 11,
  sym__regular_char = 12,
  anon_sym_BSLASH_BSLASH = 13,
  anon_sym_BSLASH_DQUOTE = 14,
  anon_sym_BSLASH_SQUOTE = 15,
  anon_sym_BSLASH_LT = 16,
  anon_sym_BSLASH_LBRACK = 17,
  anon_sym_BSLASH_BANG = 18,
  anon_sym_BSLASH_PIPE = 19,
  anon_sym_EQ = 20,
  anon_sym_DASH_GT = 21,
  sym_id_annotation = 22,
  anon_sym_DQUOTE = 23,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 24,
  anon_sym_SQUOTE = 25,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH = 26,
  aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH = 27,
  aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH = 28,
  sym_number_value = 29,
  anon_sym_LBRACK_GT = 30,
  aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH = 31,
  anon_sym_LT_RBRACK = 32,
  anon_sym_LBRACE = 33,
  anon_sym_RBRACE = 34,
  sym_document = 35,
  sym__chunk = 36,
  sym_start_tag = 37,
  sym__open_start_markup = 38,
  sym_end_tag = 39,
  sym__close_end_markup = 40,
  sym_milestone_tag = 41,
  sym_start_layer_suffix = 42,
  sym_end_layer_suffix = 43,
  sym_text_variation = 44,
  sym_text_variation_separator = 45,
  sym_variant_text = 46,
  sym_name = 47,
  sym_text = 48,
  sym__escaped_char = 49,
  sym_annotation = 50,
  sym_basic_annotation = 51,
  sym_ref_annotation = 52,
  sym_identifying_annotation = 53,
  sym_annotation_name = 54,
  sym__annotation_value = 55,
  sym_ref_value = 56,
  sym_id_value = 57,
  sym_string_value = 58,
  sym_boolean_value = 59,
  sym_richtext_value = 60,
  sym_list_value = 61,
  sym_object_value = 62,
  aux_sym_document_repeat1 = 63,
  aux_sym_start_tag_repeat1 = 64,
  aux_sym_start_layer_suffix_repeat1 = 65,
  aux_sym_end_layer_suffix_repeat1 = 66,
  aux_sym_text_variation_repeat1 = 67,
  aux_sym_text_repeat1 = 68,
  aux_sym_list_value_repeat1 = 69,
  aux_sym_object_value_repeat1 = 70,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "END",
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = "/\\s+/",
  [anon_sym_LBRACK] = "[",
  [sym__close_start_markup] = "_close_start_markup",
  [sym__open_end_markup] = "_open_end_markup",
  [anon_sym_RBRACK] = "]",
  [anon_sym_PIPE] = "|",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [sym_begin_text_variation] = "begin_text_variation",
  [sym_end_text_variation] = "end_text_variation",
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = "/[a-zA-Z0-9_]+/",
  [sym__regular_char] = "_regular_char",
  [anon_sym_BSLASH_BSLASH] = "\\\\",
  [anon_sym_BSLASH_DQUOTE] = "\\\"",
  [anon_sym_BSLASH_SQUOTE] = "\\'",
  [anon_sym_BSLASH_LT] = "\\<",
  [anon_sym_BSLASH_LBRACK] = "\\[",
  [anon_sym_BSLASH_BANG] = "\\!",
  [anon_sym_BSLASH_PIPE] = "\\|",
  [anon_sym_EQ] = "=",
  [anon_sym_DASH_GT] = "->",
  [sym_id_annotation] = "id_annotation",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = "/[^\"]*/",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH] = "/[^']*/",
  [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = "/[Tt][Rr][Uu][Ee]/",
  [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = "/[Ff][Aa][Ll][Ss][Ee]/",
  [sym_number_value] = "number_value",
  [anon_sym_LBRACK_GT] = "[>",
  [aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH] = "/[^<]*/",
  [anon_sym_LT_RBRACK] = "<]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_document] = "document",
  [sym__chunk] = "_chunk",
  [sym_start_tag] = "start_tag",
  [sym__open_start_markup] = "_open_start_markup",
  [sym_end_tag] = "end_tag",
  [sym__close_end_markup] = "_close_end_markup",
  [sym_milestone_tag] = "milestone_tag",
  [sym_start_layer_suffix] = "start_layer_suffix",
  [sym_end_layer_suffix] = "end_layer_suffix",
  [sym_text_variation] = "text_variation",
  [sym_text_variation_separator] = "text_variation_separator",
  [sym_variant_text] = "variant_text",
  [sym_name] = "name",
  [sym_text] = "text",
  [sym__escaped_char] = "_escaped_char",
  [sym_annotation] = "annotation",
  [sym_basic_annotation] = "basic_annotation",
  [sym_ref_annotation] = "ref_annotation",
  [sym_identifying_annotation] = "identifying_annotation",
  [sym_annotation_name] = "annotation_name",
  [sym__annotation_value] = "_annotation_value",
  [sym_ref_value] = "ref_value",
  [sym_id_value] = "id_value",
  [sym_string_value] = "string_value",
  [sym_boolean_value] = "boolean_value",
  [sym_richtext_value] = "richtext_value",
  [sym_list_value] = "list_value",
  [sym_object_value] = "object_value",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_start_tag_repeat1] = "start_tag_repeat1",
  [aux_sym_start_layer_suffix_repeat1] = "start_layer_suffix_repeat1",
  [aux_sym_end_layer_suffix_repeat1] = "end_layer_suffix_repeat1",
  [aux_sym_text_variation_repeat1] = "text_variation_repeat1",
  [aux_sym_text_repeat1] = "text_repeat1",
  [aux_sym_list_value_repeat1] = "list_value_repeat1",
  [aux_sym_object_value_repeat1] = "object_value_repeat1",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym__close_start_markup] = {
    .visible = false,
    .named = true,
  },
  [sym__open_end_markup] = {
    .visible = false,
    .named = true,
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
  [sym_begin_text_variation] = {
    .visible = true,
    .named = true,
  },
  [sym_end_text_variation] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym__regular_char] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASH_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH_PIPE] = {
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
  [sym_id_annotation] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = {
    .visible = false,
    .named = false,
  },
  [sym_number_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_RBRACK] = {
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
  [sym__open_start_markup] = {
    .visible = false,
    .named = true,
  },
  [sym_end_tag] = {
    .visible = true,
    .named = true,
  },
  [sym__close_end_markup] = {
    .visible = false,
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
  [sym__escaped_char] = {
    .visible = false,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_basic_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_ref_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_identifying_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation_name] = {
    .visible = true,
    .named = true,
  },
  [sym__annotation_value] = {
    .visible = false,
    .named = true,
  },
  [sym_ref_value] = {
    .visible = true,
    .named = true,
  },
  [sym_id_value] = {
    .visible = true,
    .named = true,
  },
  [sym_string_value] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_value] = {
    .visible = true,
    .named = true,
  },
  [sym_richtext_value] = {
    .visible = true,
    .named = true,
  },
  [sym_list_value] = {
    .visible = true,
    .named = true,
  },
  [sym_object_value] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_tag_repeat1] = {
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
  [aux_sym_text_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_value_repeat1] = {
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
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '<')
        ADVANCE(11);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(31);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      ADVANCE(42);
      END_STATE();
    case 1:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 2:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 3:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 4:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym__regular_char);
      if (lookahead == '>')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym__regular_char);
      if (lookahead == 'i')
        ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == 'd')
        ADVANCE(10);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_id_annotation);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym__open_end_markup);
      if (lookahead == ']')
        ADVANCE(12);
      if (lookahead == '|')
        ADVANCE(13);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(anon_sym_LT_RBRACK);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_begin_text_variation);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym__close_start_markup);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '>')
        ADVANCE(17);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_LBRACK_GT);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__regular_char);
      if (lookahead == '!')
        ADVANCE(19);
      if (lookahead == '\"')
        ADVANCE(20);
      if (lookahead == '\'')
        ADVANCE(21);
      if (lookahead == '<')
        ADVANCE(22);
      if (lookahead == '[')
        ADVANCE(23);
      if (lookahead == '\\')
        ADVANCE(24);
      if (lookahead == '|')
        ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_BSLASH_BANG);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_BSLASH_DQUOTE);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_BSLASH_SQUOTE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_BSLASH_LT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_BSLASH_LBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_BSLASH_BSLASH);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_BSLASH_PIPE);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>')
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_end_text_variation);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__regular_char);
      END_STATE();
    case 43:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(44);
      if (lookahead == '[')
        ADVANCE(45);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      ADVANCE(42);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__open_end_markup);
      if (lookahead == '|')
        ADVANCE(13);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 46:
      if (lookahead == ':')
        ADVANCE(47);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 47:
      if (lookahead == 'i')
        ADVANCE(9);
      END_STATE();
    case 48:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 51:
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      END_STATE();
    case 52:
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != '\\')
        ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == '|')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      END_STATE();
    case 54:
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 55:
      if (lookahead == '-')
        ADVANCE(56);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      END_STATE();
    case 56:
      if (lookahead == '>')
        ADVANCE(7);
      END_STATE();
    case 57:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      END_STATE();
    case 58:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(27);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(59);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(68);
      END_STATE();
    case 59:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(60);
      END_STATE();
    case 60:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(61);
      END_STATE();
    case 61:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(62);
      END_STATE();
    case 62:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH);
      END_STATE();
    case 64:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(65);
      END_STATE();
    case 65:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(66);
      END_STATE();
    case 66:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_number_value);
      if (lookahead == '.')
        ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(68);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(71);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(71);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(74);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(77);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(76);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(77);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(77);
      END_STATE();
    case 78:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(47);
      if (lookahead == ']')
        ADVANCE(26);
      if (lookahead == '}')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(35);
      END_STATE();
    case 79:
      if (lookahead == '<')
        ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(38);
      END_STATE();
    case 80:
      if (lookahead == ']')
        ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 43},
  [2] = {.lex_state = 46},
  [3] = {.lex_state = 43},
  [4] = {.lex_state = 48},
  [5] = {.lex_state = 46},
  [6] = {.lex_state = 43},
  [7] = {.lex_state = 43},
  [8] = {.lex_state = 49},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 46},
  [11] = {.lex_state = 43},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 46},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 52},
  [16] = {.lex_state = 51},
  [17] = {.lex_state = 43},
  [18] = {.lex_state = 43},
  [19] = {.lex_state = 46},
  [20] = {.lex_state = 46},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 49},
  [23] = {.lex_state = 49},
  [24] = {.lex_state = 51},
  [25] = {.lex_state = 51},
  [26] = {.lex_state = 51},
  [27] = {.lex_state = 53},
  [28] = {.lex_state = 53},
  [29] = {.lex_state = 52},
  [30] = {.lex_state = 43},
  [31] = {.lex_state = 54},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 49},
  [34] = {.lex_state = 49},
  [35] = {.lex_state = 55},
  [36] = {.lex_state = 55},
  [37] = {.lex_state = 49},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 55},
  [40] = {.lex_state = 57},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 49},
  [43] = {.lex_state = 49},
  [44] = {.lex_state = 51},
  [45] = {.lex_state = 49},
  [46] = {.lex_state = 49},
  [47] = {.lex_state = 53},
  [48] = {.lex_state = 51},
  [49] = {.lex_state = 51},
  [50] = {.lex_state = 49},
  [51] = {.lex_state = 49},
  [52] = {.lex_state = 43},
  [53] = {.lex_state = 53},
  [54] = {.lex_state = 46},
  [55] = {.lex_state = 57},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 49},
  [59] = {.lex_state = 49},
  [60] = {.lex_state = 46},
  [61] = {.lex_state = 58},
  [62] = {.lex_state = 46},
  [63] = {.lex_state = 46},
  [64] = {.lex_state = 57},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 51},
  [67] = {.lex_state = 49},
  [68] = {.lex_state = 51},
  [69] = {.lex_state = 51},
  [70] = {.lex_state = 51},
  [71] = {.lex_state = 49},
  [72] = {.lex_state = 57},
  [73] = {.lex_state = 54},
  [74] = {.lex_state = 57},
  [75] = {.lex_state = 43},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 49},
  [78] = {.lex_state = 49},
  [79] = {.lex_state = 58},
  [80] = {.lex_state = 69},
  [81] = {.lex_state = 72},
  [82] = {.lex_state = 49},
  [83] = {.lex_state = 75},
  [84] = {.lex_state = 46},
  [85] = {.lex_state = 49},
  [86] = {.lex_state = 49},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 57},
  [89] = {.lex_state = 57},
  [90] = {.lex_state = 51},
  [91] = {.lex_state = 51},
  [92] = {.lex_state = 51},
  [93] = {.lex_state = 57},
  [94] = {.lex_state = 46},
  [95] = {.lex_state = 57},
  [96] = {.lex_state = 57},
  [97] = {.lex_state = 58},
  [98] = {.lex_state = 69},
  [99] = {.lex_state = 72},
  [100] = {.lex_state = 78},
  [101] = {.lex_state = 75},
  [102] = {.lex_state = 46},
  [103] = {.lex_state = 57},
  [104] = {.lex_state = 58},
  [105] = {.lex_state = 58},
  [106] = {.lex_state = 79},
  [107] = {.lex_state = 55},
  [108] = {.lex_state = 46},
  [109] = {.lex_state = 55},
  [110] = {.lex_state = 46},
  [111] = {.lex_state = 57},
  [112] = {.lex_state = 57},
  [113] = {.lex_state = 58},
  [114] = {.lex_state = 58},
  [115] = {.lex_state = 79},
  [116] = {.lex_state = 46},
  [117] = {.lex_state = 49},
  [118] = {.lex_state = 58},
  [119] = {.lex_state = 57},
  [120] = {.lex_state = 49},
  [121] = {.lex_state = 49},
  [122] = {.lex_state = 46},
  [123] = {.lex_state = 58},
  [124] = {.lex_state = 46},
  [125] = {.lex_state = 49},
  [126] = {.lex_state = 46},
  [127] = {.lex_state = 78},
  [128] = {.lex_state = 57},
  [129] = {.lex_state = 78},
  [130] = {.lex_state = 78},
  [131] = {.lex_state = 78},
  [132] = {.lex_state = 57},
  [133] = {.lex_state = 49},
  [134] = {.lex_state = 57},
  [135] = {.lex_state = 46},
  [136] = {.lex_state = 46},
  [137] = {.lex_state = 46},
  [138] = {.lex_state = 46},
  [139] = {.lex_state = 46},
  [140] = {.lex_state = 46},
  [141] = {.lex_state = 78},
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(3),
    [sym__close_start_markup] = ACTIONS(1),
    [sym__open_end_markup] = ACTIONS(3),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(3),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_begin_text_variation] = ACTIONS(1),
    [sym_end_text_variation] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(3),
    [sym__regular_char] = ACTIONS(3),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(1),
    [anon_sym_BSLASH_LT] = ACTIONS(1),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(1),
    [anon_sym_BSLASH_BANG] = ACTIONS(1),
    [anon_sym_BSLASH_PIPE] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_id_annotation] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(3),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(3),
    [sym_number_value] = ACTIONS(3),
    [anon_sym_LBRACK_GT] = ACTIONS(1),
    [anon_sym_LT_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(4),
    [sym__chunk] = STATE(6),
    [sym_start_tag] = STATE(6),
    [sym__open_start_markup] = STATE(5),
    [sym_end_tag] = STATE(6),
    [sym_milestone_tag] = STATE(6),
    [sym_text_variation] = STATE(6),
    [sym_text] = STATE(6),
    [sym__escaped_char] = STATE(7),
    [aux_sym_document_repeat1] = STATE(6),
    [aux_sym_text_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym__open_end_markup] = ACTIONS(11),
    [sym_begin_text_variation] = ACTIONS(13),
    [sym__regular_char] = ACTIONS(15),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_LT] = ACTIONS(17),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(17),
    [anon_sym_BSLASH_BANG] = ACTIONS(17),
    [anon_sym_BSLASH_PIPE] = ACTIONS(17),
  },
  [2] = {
    [sym_name] = STATE(9),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [3] = {
    [sym__chunk] = STATE(12),
    [sym_start_tag] = STATE(12),
    [sym__open_start_markup] = STATE(13),
    [sym_end_tag] = STATE(12),
    [sym_milestone_tag] = STATE(12),
    [sym_text_variation] = STATE(12),
    [sym_variant_text] = STATE(14),
    [sym_text] = STATE(12),
    [sym__escaped_char] = STATE(15),
    [aux_sym_text_repeat1] = STATE(15),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym__open_end_markup] = ACTIONS(23),
    [sym_begin_text_variation] = ACTIONS(25),
    [sym__regular_char] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH_LT] = ACTIONS(29),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(29),
    [anon_sym_BSLASH_BANG] = ACTIONS(29),
    [anon_sym_BSLASH_PIPE] = ACTIONS(29),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(31),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
  },
  [5] = {
    [sym_name] = STATE(16),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [6] = {
    [sym__chunk] = STATE(17),
    [sym_start_tag] = STATE(17),
    [sym__open_start_markup] = STATE(5),
    [sym_end_tag] = STATE(17),
    [sym_milestone_tag] = STATE(17),
    [sym_text_variation] = STATE(17),
    [sym_text] = STATE(17),
    [sym__escaped_char] = STATE(7),
    [aux_sym_document_repeat1] = STATE(17),
    [aux_sym_text_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym__open_end_markup] = ACTIONS(11),
    [sym_begin_text_variation] = ACTIONS(13),
    [sym__regular_char] = ACTIONS(15),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(17),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(17),
    [anon_sym_BSLASH_LT] = ACTIONS(17),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(17),
    [anon_sym_BSLASH_BANG] = ACTIONS(17),
    [anon_sym_BSLASH_PIPE] = ACTIONS(17),
  },
  [7] = {
    [sym__escaped_char] = STATE(18),
    [aux_sym_text_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(35),
    [sym__open_end_markup] = ACTIONS(37),
    [sym_begin_text_variation] = ACTIONS(35),
    [sym__regular_char] = ACTIONS(37),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(35),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(35),
    [anon_sym_BSLASH_LT] = ACTIONS(35),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(35),
    [anon_sym_BSLASH_BANG] = ACTIONS(35),
    [anon_sym_BSLASH_PIPE] = ACTIONS(35),
  },
  [8] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(39),
    [anon_sym_PIPE] = ACTIONS(39),
    [anon_sym_COMMA] = ACTIONS(39),
  },
  [9] = {
    [sym__close_end_markup] = STATE(21),
    [sym_end_layer_suffix] = STATE(22),
    [aux_sym_start_tag_repeat1] = STATE(23),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(44),
    [anon_sym_PIPE] = ACTIONS(46),
  },
  [10] = {
    [sym_name] = STATE(24),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [11] = {
    [sym__chunk] = STATE(12),
    [sym_start_tag] = STATE(12),
    [sym__open_start_markup] = STATE(13),
    [sym_end_tag] = STATE(12),
    [sym_milestone_tag] = STATE(12),
    [sym_text_variation] = STATE(12),
    [sym_variant_text] = STATE(25),
    [sym_text] = STATE(12),
    [sym__escaped_char] = STATE(15),
    [aux_sym_text_repeat1] = STATE(15),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym__open_end_markup] = ACTIONS(23),
    [sym_begin_text_variation] = ACTIONS(25),
    [sym__regular_char] = ACTIONS(27),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(29),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(29),
    [anon_sym_BSLASH_LT] = ACTIONS(29),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(29),
    [anon_sym_BSLASH_BANG] = ACTIONS(29),
    [anon_sym_BSLASH_PIPE] = ACTIONS(29),
  },
  [12] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(48),
  },
  [13] = {
    [sym_name] = STATE(26),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [14] = {
    [sym_text_variation_separator] = STATE(28),
    [aux_sym_text_variation_repeat1] = STATE(28),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(50),
  },
  [15] = {
    [sym__escaped_char] = STATE(29),
    [aux_sym_text_repeat1] = STATE(29),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(35),
    [sym__regular_char] = ACTIONS(52),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(54),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(54),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(54),
    [anon_sym_BSLASH_LT] = ACTIONS(54),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(54),
    [anon_sym_BSLASH_BANG] = ACTIONS(54),
    [anon_sym_BSLASH_PIPE] = ACTIONS(54),
  },
  [16] = {
    [sym__close_end_markup] = STATE(32),
    [sym_start_layer_suffix] = STATE(33),
    [aux_sym_start_tag_repeat1] = STATE(34),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(56),
    [anon_sym_RBRACK] = ACTIONS(58),
    [anon_sym_PIPE] = ACTIONS(60),
  },
  [17] = {
    [sym__chunk] = STATE(17),
    [sym_start_tag] = STATE(17),
    [sym__open_start_markup] = STATE(5),
    [sym_end_tag] = STATE(17),
    [sym_milestone_tag] = STATE(17),
    [sym_text_variation] = STATE(17),
    [sym_text] = STATE(17),
    [sym__escaped_char] = STATE(7),
    [aux_sym_document_repeat1] = STATE(17),
    [aux_sym_text_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(62),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(64),
    [sym__open_end_markup] = ACTIONS(67),
    [sym_begin_text_variation] = ACTIONS(70),
    [sym__regular_char] = ACTIONS(73),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(76),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(76),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(76),
    [anon_sym_BSLASH_LT] = ACTIONS(76),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(76),
    [anon_sym_BSLASH_BANG] = ACTIONS(76),
    [anon_sym_BSLASH_PIPE] = ACTIONS(76),
  },
  [18] = {
    [sym__escaped_char] = STATE(18),
    [aux_sym_text_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(79),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(79),
    [sym__open_end_markup] = ACTIONS(81),
    [sym_begin_text_variation] = ACTIONS(79),
    [sym__regular_char] = ACTIONS(83),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(86),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(86),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(86),
    [anon_sym_BSLASH_LT] = ACTIONS(86),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(86),
    [anon_sym_BSLASH_BANG] = ACTIONS(86),
    [anon_sym_BSLASH_PIPE] = ACTIONS(86),
  },
  [19] = {
    [sym_annotation] = STATE(37),
    [sym_basic_annotation] = STATE(38),
    [sym_ref_annotation] = STATE(38),
    [sym_identifying_annotation] = STATE(38),
    [sym_annotation_name] = STATE(39),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [sym_id_annotation] = ACTIONS(91),
  },
  [20] = {
    [sym_name] = STATE(40),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(93),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(93),
    [sym__open_end_markup] = ACTIONS(95),
    [sym_begin_text_variation] = ACTIONS(93),
    [sym__regular_char] = ACTIONS(95),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(93),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(93),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(93),
    [anon_sym_BSLASH_LT] = ACTIONS(93),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(93),
    [anon_sym_BSLASH_BANG] = ACTIONS(93),
    [anon_sym_BSLASH_PIPE] = ACTIONS(93),
  },
  [22] = {
    [sym__close_end_markup] = STATE(41),
    [aux_sym_start_tag_repeat1] = STATE(42),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(97),
  },
  [23] = {
    [sym__close_end_markup] = STATE(41),
    [aux_sym_start_tag_repeat1] = STATE(43),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(97),
  },
  [24] = {
    [sym__close_end_markup] = STATE(44),
    [sym_end_layer_suffix] = STATE(45),
    [aux_sym_start_tag_repeat1] = STATE(46),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(99),
    [anon_sym_PIPE] = ACTIONS(46),
  },
  [25] = {
    [sym_text_variation_separator] = STATE(47),
    [aux_sym_text_variation_repeat1] = STATE(47),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(50),
  },
  [26] = {
    [sym__close_end_markup] = STATE(49),
    [sym_start_layer_suffix] = STATE(50),
    [aux_sym_start_tag_repeat1] = STATE(51),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(101),
    [anon_sym_RBRACK] = ACTIONS(103),
    [anon_sym_PIPE] = ACTIONS(60),
  },
  [27] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(105),
    [sym_end_text_variation] = ACTIONS(107),
  },
  [28] = {
    [sym_text_variation_separator] = STATE(53),
    [aux_sym_text_variation_repeat1] = STATE(53),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(109),
    [sym_end_text_variation] = ACTIONS(111),
  },
  [29] = {
    [sym__escaped_char] = STATE(29),
    [aux_sym_text_repeat1] = STATE(29),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(79),
    [sym__regular_char] = ACTIONS(113),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(116),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(116),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(116),
    [anon_sym_BSLASH_LT] = ACTIONS(116),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(116),
    [anon_sym_BSLASH_BANG] = ACTIONS(116),
    [anon_sym_BSLASH_PIPE] = ACTIONS(116),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(119),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(119),
    [sym__open_end_markup] = ACTIONS(121),
    [sym_begin_text_variation] = ACTIONS(119),
    [sym__regular_char] = ACTIONS(121),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(119),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(119),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(119),
    [anon_sym_BSLASH_LT] = ACTIONS(119),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(119),
    [anon_sym_BSLASH_BANG] = ACTIONS(119),
    [anon_sym_BSLASH_PIPE] = ACTIONS(119),
  },
  [31] = {
    [sym_name] = STATE(55),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(123),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(125),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(125),
    [sym__open_end_markup] = ACTIONS(127),
    [sym_begin_text_variation] = ACTIONS(125),
    [sym__regular_char] = ACTIONS(127),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(125),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(125),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(125),
    [anon_sym_BSLASH_LT] = ACTIONS(125),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(125),
    [anon_sym_BSLASH_BANG] = ACTIONS(125),
    [anon_sym_BSLASH_PIPE] = ACTIONS(125),
  },
  [33] = {
    [sym__close_end_markup] = STATE(57),
    [aux_sym_start_tag_repeat1] = STATE(58),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(131),
  },
  [34] = {
    [sym__close_end_markup] = STATE(57),
    [aux_sym_start_tag_repeat1] = STATE(59),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(129),
    [anon_sym_RBRACK] = ACTIONS(131),
  },
  [35] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(133),
    [anon_sym_DASH_GT] = ACTIONS(133),
  },
  [36] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(135),
  },
  [37] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(137),
    [sym__close_start_markup] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
  },
  [38] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(139),
    [sym__close_start_markup] = ACTIONS(139),
    [anon_sym_RBRACK] = ACTIONS(139),
  },
  [39] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(141),
    [anon_sym_DASH_GT] = ACTIONS(143),
  },
  [40] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(64),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(145),
    [anon_sym_RBRACK] = ACTIONS(148),
    [anon_sym_COMMA] = ACTIONS(150),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(152),
    [sym__open_end_markup] = ACTIONS(154),
    [sym_begin_text_variation] = ACTIONS(152),
    [sym__regular_char] = ACTIONS(154),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(152),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(152),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(152),
    [anon_sym_BSLASH_LT] = ACTIONS(152),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(152),
    [anon_sym_BSLASH_BANG] = ACTIONS(152),
    [anon_sym_BSLASH_PIPE] = ACTIONS(152),
  },
  [42] = {
    [sym__close_end_markup] = STATE(65),
    [aux_sym_start_tag_repeat1] = STATE(43),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(156),
  },
  [43] = {
    [aux_sym_start_tag_repeat1] = STATE(43),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(158),
    [anon_sym_RBRACK] = ACTIONS(137),
  },
  [44] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(93),
  },
  [45] = {
    [sym__close_end_markup] = STATE(66),
    [aux_sym_start_tag_repeat1] = STATE(67),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(162),
  },
  [46] = {
    [sym__close_end_markup] = STATE(66),
    [aux_sym_start_tag_repeat1] = STATE(43),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(162),
  },
  [47] = {
    [sym_text_variation_separator] = STATE(53),
    [aux_sym_text_variation_repeat1] = STATE(53),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(109),
    [sym_end_text_variation] = ACTIONS(164),
  },
  [48] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(119),
  },
  [49] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(125),
  },
  [50] = {
    [sym__close_end_markup] = STATE(70),
    [aux_sym_start_tag_repeat1] = STATE(71),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(168),
  },
  [51] = {
    [sym__close_end_markup] = STATE(70),
    [aux_sym_start_tag_repeat1] = STATE(59),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(166),
    [anon_sym_RBRACK] = ACTIONS(168),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(170),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(170),
    [sym__open_end_markup] = ACTIONS(172),
    [sym_begin_text_variation] = ACTIONS(170),
    [sym__regular_char] = ACTIONS(172),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(170),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(170),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(170),
    [anon_sym_BSLASH_LT] = ACTIONS(170),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(170),
    [anon_sym_BSLASH_BANG] = ACTIONS(170),
    [anon_sym_BSLASH_PIPE] = ACTIONS(170),
  },
  [53] = {
    [sym_text_variation_separator] = STATE(53),
    [aux_sym_text_variation_repeat1] = STATE(53),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(174),
    [sym_end_text_variation] = ACTIONS(177),
  },
  [54] = {
    [sym_name] = STATE(72),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [55] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(74),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(179),
    [sym__close_start_markup] = ACTIONS(182),
    [anon_sym_RBRACK] = ACTIONS(182),
    [anon_sym_COMMA] = ACTIONS(184),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(186),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(186),
    [sym__open_end_markup] = ACTIONS(188),
    [sym_begin_text_variation] = ACTIONS(186),
    [sym__regular_char] = ACTIONS(188),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(186),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(186),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(186),
    [anon_sym_BSLASH_LT] = ACTIONS(186),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(186),
    [anon_sym_BSLASH_BANG] = ACTIONS(186),
    [anon_sym_BSLASH_PIPE] = ACTIONS(186),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(190),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(190),
    [sym__open_end_markup] = ACTIONS(192),
    [sym_begin_text_variation] = ACTIONS(190),
    [sym__regular_char] = ACTIONS(192),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(190),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(190),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(190),
    [anon_sym_BSLASH_LT] = ACTIONS(190),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(190),
    [anon_sym_BSLASH_BANG] = ACTIONS(190),
    [anon_sym_BSLASH_PIPE] = ACTIONS(190),
  },
  [58] = {
    [sym__close_end_markup] = STATE(76),
    [aux_sym_start_tag_repeat1] = STATE(59),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(196),
  },
  [59] = {
    [aux_sym_start_tag_repeat1] = STATE(59),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(158),
    [sym__close_start_markup] = ACTIONS(137),
    [anon_sym_RBRACK] = ACTIONS(137),
  },
  [60] = {
    [sym_name] = STATE(77),
    [sym_id_value] = STATE(78),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [61] = {
    [sym__annotation_value] = STATE(85),
    [sym_string_value] = STATE(85),
    [sym_boolean_value] = STATE(85),
    [sym_richtext_value] = STATE(85),
    [sym_list_value] = STATE(85),
    [sym_object_value] = STATE(85),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(198),
    [anon_sym_DQUOTE] = ACTIONS(200),
    [anon_sym_SQUOTE] = ACTIONS(202),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(204),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(204),
    [sym_number_value] = ACTIONS(206),
    [anon_sym_LBRACK_GT] = ACTIONS(208),
    [anon_sym_LBRACE] = ACTIONS(210),
  },
  [62] = {
    [sym_name] = STATE(86),
    [sym_ref_value] = STATE(87),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [63] = {
    [sym_name] = STATE(88),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [64] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(89),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(215),
    [anon_sym_COMMA] = ACTIONS(150),
  },
  [65] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(217),
    [sym__open_end_markup] = ACTIONS(219),
    [sym_begin_text_variation] = ACTIONS(217),
    [sym__regular_char] = ACTIONS(219),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(217),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(217),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(217),
    [anon_sym_BSLASH_LT] = ACTIONS(217),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(217),
    [anon_sym_BSLASH_BANG] = ACTIONS(217),
    [anon_sym_BSLASH_PIPE] = ACTIONS(217),
  },
  [66] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(152),
  },
  [67] = {
    [sym__close_end_markup] = STATE(90),
    [aux_sym_start_tag_repeat1] = STATE(43),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(221),
  },
  [68] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(170),
  },
  [69] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(186),
  },
  [70] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(190),
  },
  [71] = {
    [sym__close_end_markup] = STATE(92),
    [aux_sym_start_tag_repeat1] = STATE(59),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(223),
    [anon_sym_RBRACK] = ACTIONS(225),
  },
  [72] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(93),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(227),
    [sym__close_start_markup] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(184),
  },
  [73] = {
    [sym_name] = STATE(95),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PLUS] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [74] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(96),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(227),
    [sym__close_start_markup] = ACTIONS(230),
    [anon_sym_RBRACK] = ACTIONS(230),
    [anon_sym_COMMA] = ACTIONS(184),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(234),
    [sym__open_end_markup] = ACTIONS(236),
    [sym_begin_text_variation] = ACTIONS(234),
    [sym__regular_char] = ACTIONS(236),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(234),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(234),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(234),
    [anon_sym_BSLASH_LT] = ACTIONS(234),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(234),
    [anon_sym_BSLASH_BANG] = ACTIONS(234),
    [anon_sym_BSLASH_PIPE] = ACTIONS(234),
  },
  [76] = {
    [ts_builtin_sym_end] = ACTIONS(238),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(238),
    [sym__open_end_markup] = ACTIONS(240),
    [sym_begin_text_variation] = ACTIONS(238),
    [sym__regular_char] = ACTIONS(240),
    [anon_sym_BSLASH_BSLASH] = ACTIONS(238),
    [anon_sym_BSLASH_DQUOTE] = ACTIONS(238),
    [anon_sym_BSLASH_SQUOTE] = ACTIONS(238),
    [anon_sym_BSLASH_LT] = ACTIONS(238),
    [anon_sym_BSLASH_LBRACK] = ACTIONS(238),
    [anon_sym_BSLASH_BANG] = ACTIONS(238),
    [anon_sym_BSLASH_PIPE] = ACTIONS(238),
  },
  [77] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(242),
    [sym__close_start_markup] = ACTIONS(242),
    [anon_sym_RBRACK] = ACTIONS(242),
  },
  [78] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(244),
    [sym__close_start_markup] = ACTIONS(244),
    [anon_sym_RBRACK] = ACTIONS(244),
  },
  [79] = {
    [sym__annotation_value] = STATE(103),
    [sym_string_value] = STATE(103),
    [sym_boolean_value] = STATE(103),
    [sym_richtext_value] = STATE(103),
    [sym_list_value] = STATE(103),
    [sym_object_value] = STATE(103),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(252),
    [sym_number_value] = ACTIONS(254),
    [anon_sym_LBRACK_GT] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(258),
  },
  [80] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(262),
  },
  [81] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH] = ACTIONS(264),
  },
  [82] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(266),
    [sym__close_start_markup] = ACTIONS(266),
    [anon_sym_RBRACK] = ACTIONS(266),
  },
  [83] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH] = ACTIONS(268),
  },
  [84] = {
    [sym_annotation] = STATE(110),
    [sym_basic_annotation] = STATE(108),
    [sym_ref_annotation] = STATE(108),
    [sym_identifying_annotation] = STATE(108),
    [sym_annotation_name] = STATE(109),
    [aux_sym_object_value_repeat1] = STATE(110),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [sym_id_annotation] = ACTIONS(270),
  },
  [85] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(272),
    [sym__close_start_markup] = ACTIONS(272),
    [anon_sym_RBRACK] = ACTIONS(272),
  },
  [86] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(274),
    [sym__close_start_markup] = ACTIONS(274),
    [anon_sym_RBRACK] = ACTIONS(274),
  },
  [87] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(276),
    [sym__close_start_markup] = ACTIONS(276),
    [anon_sym_RBRACK] = ACTIONS(276),
  },
  [88] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(278),
    [anon_sym_RBRACK] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(278),
  },
  [89] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(89),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(280),
    [anon_sym_RBRACK] = ACTIONS(278),
    [anon_sym_COMMA] = ACTIONS(283),
  },
  [90] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(217),
  },
  [91] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(234),
  },
  [92] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_PIPE] = ACTIONS(238),
  },
  [93] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(96),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(286),
    [sym__close_start_markup] = ACTIONS(289),
    [anon_sym_RBRACK] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(184),
  },
  [94] = {
    [sym_name] = STATE(111),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [95] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(291),
    [sym__close_start_markup] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(291),
  },
  [96] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(96),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(293),
    [sym__close_start_markup] = ACTIONS(291),
    [anon_sym_RBRACK] = ACTIONS(291),
    [anon_sym_COMMA] = ACTIONS(296),
  },
  [97] = {
    [sym__annotation_value] = STATE(112),
    [sym_string_value] = STATE(112),
    [sym_boolean_value] = STATE(112),
    [sym_richtext_value] = STATE(112),
    [sym_list_value] = STATE(112),
    [sym_object_value] = STATE(112),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(252),
    [sym_number_value] = ACTIONS(299),
    [anon_sym_LBRACK_GT] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(258),
  },
  [98] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(301),
  },
  [99] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH] = ACTIONS(303),
  },
  [100] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(266),
    [anon_sym_COMMA] = ACTIONS(266),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(266),
    [sym_id_annotation] = ACTIONS(266),
    [anon_sym_RBRACE] = ACTIONS(266),
  },
  [101] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(260),
    [aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH] = ACTIONS(305),
  },
  [102] = {
    [sym_annotation] = STATE(116),
    [sym_basic_annotation] = STATE(108),
    [sym_ref_annotation] = STATE(108),
    [sym_identifying_annotation] = STATE(108),
    [sym_annotation_name] = STATE(109),
    [aux_sym_object_value_repeat1] = STATE(116),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [sym_id_annotation] = ACTIONS(270),
  },
  [103] = {
    [aux_sym_list_value_repeat1] = STATE(119),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(307),
    [anon_sym_COMMA] = ACTIONS(309),
  },
  [104] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(311),
  },
  [105] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(311),
  },
  [106] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LT_RBRACK] = ACTIONS(313),
  },
  [107] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(315),
  },
  [108] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(139),
    [sym_id_annotation] = ACTIONS(139),
    [anon_sym_RBRACE] = ACTIONS(139),
  },
  [109] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_EQ] = ACTIONS(317),
    [anon_sym_DASH_GT] = ACTIONS(319),
  },
  [110] = {
    [sym_annotation] = STATE(126),
    [sym_basic_annotation] = STATE(108),
    [sym_ref_annotation] = STATE(108),
    [sym_identifying_annotation] = STATE(108),
    [sym_annotation_name] = STATE(109),
    [aux_sym_object_value_repeat1] = STATE(126),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [sym_id_annotation] = ACTIONS(270),
    [anon_sym_RBRACE] = ACTIONS(321),
  },
  [111] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(323),
    [sym__close_start_markup] = ACTIONS(323),
    [anon_sym_RBRACK] = ACTIONS(323),
    [anon_sym_COMMA] = ACTIONS(323),
  },
  [112] = {
    [aux_sym_list_value_repeat1] = STATE(128),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(325),
    [anon_sym_COMMA] = ACTIONS(309),
  },
  [113] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_DQUOTE] = ACTIONS(327),
  },
  [114] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_SQUOTE] = ACTIONS(327),
  },
  [115] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LT_RBRACK] = ACTIONS(329),
  },
  [116] = {
    [sym_annotation] = STATE(126),
    [sym_basic_annotation] = STATE(108),
    [sym_ref_annotation] = STATE(108),
    [sym_identifying_annotation] = STATE(108),
    [sym_annotation_name] = STATE(109),
    [aux_sym_object_value_repeat1] = STATE(126),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(89),
    [sym_id_annotation] = ACTIONS(270),
    [anon_sym_RBRACE] = ACTIONS(331),
  },
  [117] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(333),
    [sym__close_start_markup] = ACTIONS(333),
    [anon_sym_RBRACK] = ACTIONS(333),
  },
  [118] = {
    [sym__annotation_value] = STATE(132),
    [sym_string_value] = STATE(132),
    [sym_boolean_value] = STATE(132),
    [sym_richtext_value] = STATE(132),
    [sym_list_value] = STATE(132),
    [sym_object_value] = STATE(132),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(252),
    [sym_number_value] = ACTIONS(335),
    [anon_sym_LBRACK_GT] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(258),
  },
  [119] = {
    [aux_sym_list_value_repeat1] = STATE(134),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(309),
  },
  [120] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(339),
    [sym__close_start_markup] = ACTIONS(339),
    [anon_sym_RBRACK] = ACTIONS(339),
  },
  [121] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(341),
    [sym__close_start_markup] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
  },
  [122] = {
    [sym_name] = STATE(136),
    [sym_id_value] = STATE(137),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(343),
  },
  [123] = {
    [sym__annotation_value] = STATE(138),
    [sym_string_value] = STATE(138),
    [sym_boolean_value] = STATE(138),
    [sym_richtext_value] = STATE(138),
    [sym_list_value] = STATE(138),
    [sym_object_value] = STATE(138),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(246),
    [anon_sym_DQUOTE] = ACTIONS(248),
    [anon_sym_SQUOTE] = ACTIONS(250),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(252),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(252),
    [sym_number_value] = ACTIONS(345),
    [anon_sym_LBRACK_GT] = ACTIONS(256),
    [anon_sym_LBRACE] = ACTIONS(258),
  },
  [124] = {
    [sym_name] = STATE(139),
    [sym_ref_value] = STATE(140),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(343),
  },
  [125] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(347),
    [sym__close_start_markup] = ACTIONS(347),
    [anon_sym_RBRACK] = ACTIONS(347),
  },
  [126] = {
    [sym_annotation] = STATE(126),
    [sym_basic_annotation] = STATE(108),
    [sym_ref_annotation] = STATE(108),
    [sym_identifying_annotation] = STATE(108),
    [sym_annotation_name] = STATE(109),
    [aux_sym_object_value_repeat1] = STATE(126),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(349),
    [sym_id_annotation] = ACTIONS(352),
    [anon_sym_RBRACE] = ACTIONS(355),
  },
  [127] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(333),
    [anon_sym_COMMA] = ACTIONS(333),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(333),
    [sym_id_annotation] = ACTIONS(333),
    [anon_sym_RBRACE] = ACTIONS(333),
  },
  [128] = {
    [aux_sym_list_value_repeat1] = STATE(134),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(357),
    [anon_sym_COMMA] = ACTIONS(309),
  },
  [129] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(339),
    [sym_id_annotation] = ACTIONS(339),
    [anon_sym_RBRACE] = ACTIONS(339),
  },
  [130] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(341),
    [sym_id_annotation] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
  },
  [131] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(347),
    [anon_sym_COMMA] = ACTIONS(347),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(347),
    [sym_id_annotation] = ACTIONS(347),
    [anon_sym_RBRACE] = ACTIONS(347),
  },
  [132] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(359),
  },
  [133] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(361),
    [sym__close_start_markup] = ACTIONS(361),
    [anon_sym_RBRACK] = ACTIONS(361),
  },
  [134] = {
    [aux_sym_list_value_repeat1] = STATE(134),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(359),
    [anon_sym_COMMA] = ACTIONS(363),
  },
  [135] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(39),
    [sym_id_annotation] = ACTIONS(39),
    [anon_sym_RBRACE] = ACTIONS(39),
  },
  [136] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(242),
    [sym_id_annotation] = ACTIONS(242),
    [anon_sym_RBRACE] = ACTIONS(242),
  },
  [137] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(244),
    [sym_id_annotation] = ACTIONS(244),
    [anon_sym_RBRACE] = ACTIONS(244),
  },
  [138] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(272),
    [sym_id_annotation] = ACTIONS(272),
    [anon_sym_RBRACE] = ACTIONS(272),
  },
  [139] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(274),
    [sym_id_annotation] = ACTIONS(274),
    [anon_sym_RBRACE] = ACTIONS(274),
  },
  [140] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(276),
    [sym_id_annotation] = ACTIONS(276),
    [anon_sym_RBRACE] = ACTIONS(276),
  },
  [141] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_RBRACK] = ACTIONS(361),
    [anon_sym_COMMA] = ACTIONS(361),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(361),
    [sym_id_annotation] = ACTIONS(361),
    [anon_sym_RBRACE] = ACTIONS(361),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(5),
  [11] = {.count = 1, .reusable = false}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = false}, SHIFT(7),
  [17] = {.count = 1, .reusable = true}, SHIFT(7),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(13),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(15),
  [29] = {.count = 1, .reusable = true}, SHIFT(15),
  [31] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [37] = {.count = 1, .reusable = false}, REDUCE(sym_text, 1),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [41] = {.count = 2, .reusable = true}, SHIFT(19), SHIFT_EXTRA(),
  [44] = {.count = 1, .reusable = true}, SHIFT(21),
  [46] = {.count = 1, .reusable = true}, SHIFT(20),
  [48] = {.count = 1, .reusable = true}, REDUCE(sym_variant_text, 1),
  [50] = {.count = 1, .reusable = true}, SHIFT(27),
  [52] = {.count = 1, .reusable = false}, SHIFT(29),
  [54] = {.count = 1, .reusable = true}, SHIFT(29),
  [56] = {.count = 1, .reusable = true}, SHIFT(30),
  [58] = {.count = 1, .reusable = true}, SHIFT(32),
  [60] = {.count = 1, .reusable = true}, SHIFT(31),
  [62] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(5),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [73] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(7),
  [79] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2),
  [81] = {.count = 1, .reusable = false}, REDUCE(aux_sym_text_repeat1, 2),
  [83] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(18),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(18),
  [89] = {.count = 1, .reusable = true}, SHIFT(35),
  [91] = {.count = 1, .reusable = true}, SHIFT(36),
  [93] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [95] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [97] = {.count = 1, .reusable = true}, SHIFT(41),
  [99] = {.count = 1, .reusable = true}, SHIFT(44),
  [101] = {.count = 1, .reusable = true}, SHIFT(48),
  [103] = {.count = 1, .reusable = true}, SHIFT(49),
  [105] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation_separator, 1),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation_separator, 1),
  [109] = {.count = 1, .reusable = false}, SHIFT(27),
  [111] = {.count = 1, .reusable = true}, SHIFT(52),
  [113] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(29),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_text_repeat1, 2), SHIFT_REPEAT(29),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [123] = {.count = 1, .reusable = true}, SHIFT(54),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 3),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 3),
  [129] = {.count = 1, .reusable = true}, SHIFT(56),
  [131] = {.count = 1, .reusable = true}, SHIFT(57),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_annotation_name, 1),
  [135] = {.count = 1, .reusable = true}, SHIFT(60),
  [137] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [139] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 1),
  [141] = {.count = 1, .reusable = true}, SHIFT(61),
  [143] = {.count = 1, .reusable = true}, SHIFT(62),
  [145] = {.count = 2, .reusable = true}, REDUCE(sym_end_layer_suffix, 2), SHIFT_EXTRA(),
  [148] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 2),
  [150] = {.count = 1, .reusable = true}, SHIFT(63),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 4),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 4),
  [156] = {.count = 1, .reusable = true}, SHIFT(65),
  [158] = {.count = 3, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(19), SHIFT_EXTRA(),
  [162] = {.count = 1, .reusable = true}, SHIFT(66),
  [164] = {.count = 1, .reusable = true}, SHIFT(68),
  [166] = {.count = 1, .reusable = true}, SHIFT(69),
  [168] = {.count = 1, .reusable = true}, SHIFT(70),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation, 4),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation, 4),
  [174] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_variation_repeat1, 2), SHIFT_REPEAT(27),
  [177] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_variation_repeat1, 2),
  [179] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 2), SHIFT_EXTRA(),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 2),
  [184] = {.count = 1, .reusable = true}, SHIFT(73),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 4),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 4),
  [194] = {.count = 1, .reusable = true}, SHIFT(75),
  [196] = {.count = 1, .reusable = true}, SHIFT(76),
  [198] = {.count = 1, .reusable = false}, SHIFT(79),
  [200] = {.count = 1, .reusable = true}, SHIFT(80),
  [202] = {.count = 1, .reusable = true}, SHIFT(81),
  [204] = {.count = 1, .reusable = true}, SHIFT(82),
  [206] = {.count = 1, .reusable = true}, SHIFT(85),
  [208] = {.count = 1, .reusable = true}, SHIFT(83),
  [210] = {.count = 1, .reusable = true}, SHIFT(84),
  [212] = {.count = 2, .reusable = true}, REDUCE(sym_end_layer_suffix, 3), SHIFT_EXTRA(),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 3),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 5),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 5),
  [221] = {.count = 1, .reusable = true}, SHIFT(90),
  [223] = {.count = 1, .reusable = true}, SHIFT(91),
  [225] = {.count = 1, .reusable = true}, SHIFT(92),
  [227] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 3), SHIFT_EXTRA(),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 3),
  [232] = {.count = 1, .reusable = true}, SHIFT(94),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 5),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 5),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 5),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 5),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_id_value, 1),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_identifying_annotation, 3),
  [246] = {.count = 1, .reusable = false}, SHIFT(97),
  [248] = {.count = 1, .reusable = true}, SHIFT(98),
  [250] = {.count = 1, .reusable = true}, SHIFT(99),
  [252] = {.count = 1, .reusable = true}, SHIFT(100),
  [254] = {.count = 1, .reusable = true}, SHIFT(103),
  [256] = {.count = 1, .reusable = true}, SHIFT(101),
  [258] = {.count = 1, .reusable = true}, SHIFT(102),
  [260] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [262] = {.count = 1, .reusable = false}, SHIFT(104),
  [264] = {.count = 1, .reusable = false}, SHIFT(105),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_value, 1),
  [268] = {.count = 1, .reusable = false}, SHIFT(106),
  [270] = {.count = 1, .reusable = true}, SHIFT(107),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_basic_annotation, 3),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_ref_value, 1),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_ref_annotation, 3),
  [278] = {.count = 1, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2),
  [280] = {.count = 2, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2), SHIFT_EXTRA(),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2), SHIFT_REPEAT(63),
  [286] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 4), SHIFT_EXTRA(),
  [289] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 4),
  [291] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2),
  [293] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2), SHIFT_EXTRA(),
  [296] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2), SHIFT_REPEAT(73),
  [299] = {.count = 1, .reusable = true}, SHIFT(112),
  [301] = {.count = 1, .reusable = false}, SHIFT(113),
  [303] = {.count = 1, .reusable = false}, SHIFT(114),
  [305] = {.count = 1, .reusable = false}, SHIFT(115),
  [307] = {.count = 1, .reusable = true}, SHIFT(117),
  [309] = {.count = 1, .reusable = true}, SHIFT(118),
  [311] = {.count = 1, .reusable = true}, SHIFT(120),
  [313] = {.count = 1, .reusable = true}, SHIFT(121),
  [315] = {.count = 1, .reusable = true}, SHIFT(122),
  [317] = {.count = 1, .reusable = true}, SHIFT(123),
  [319] = {.count = 1, .reusable = true}, SHIFT(124),
  [321] = {.count = 1, .reusable = true}, SHIFT(125),
  [323] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 3),
  [325] = {.count = 1, .reusable = true}, SHIFT(127),
  [327] = {.count = 1, .reusable = true}, SHIFT(129),
  [329] = {.count = 1, .reusable = true}, SHIFT(130),
  [331] = {.count = 1, .reusable = true}, SHIFT(131),
  [333] = {.count = 1, .reusable = true}, REDUCE(sym_list_value, 3),
  [335] = {.count = 1, .reusable = true}, SHIFT(132),
  [337] = {.count = 1, .reusable = true}, SHIFT(133),
  [339] = {.count = 1, .reusable = true}, REDUCE(sym_string_value, 3),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_richtext_value, 3),
  [343] = {.count = 1, .reusable = true}, SHIFT(135),
  [345] = {.count = 1, .reusable = true}, SHIFT(138),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_object_value, 3),
  [349] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2), SHIFT_REPEAT(35),
  [352] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2), SHIFT_REPEAT(107),
  [355] = {.count = 1, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2),
  [357] = {.count = 1, .reusable = true}, SHIFT(141),
  [359] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_value_repeat1, 2),
  [361] = {.count = 1, .reusable = true}, REDUCE(sym_list_value, 4),
  [363] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(118),
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
