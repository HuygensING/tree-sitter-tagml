#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 140
#define SYMBOL_COUNT 62
#define ALIAS_COUNT 0
#define TOKEN_COUNT 28
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
  aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH = 12,
  anon_sym_EQ = 13,
  anon_sym_DASH_GT = 14,
  sym_id_annotation = 15,
  anon_sym_DQUOTE = 16,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 17,
  anon_sym_SQUOTE = 18,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH = 19,
  aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH = 20,
  aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH = 21,
  sym_number_value = 22,
  anon_sym_LBRACK_GT = 23,
  aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH = 24,
  anon_sym_LT_RBRACK = 25,
  anon_sym_LBRACE = 26,
  anon_sym_RBRACE = 27,
  sym_document = 28,
  sym__chunk = 29,
  sym_start_tag = 30,
  sym__open_start_markup = 31,
  sym_end_tag = 32,
  sym__close_end_markup = 33,
  sym_milestone_tag = 34,
  sym_start_layer_suffix = 35,
  sym_end_layer_suffix = 36,
  sym_text_variation = 37,
  sym_text_variation_separator = 38,
  sym_variant_text = 39,
  sym_name = 40,
  sym_text = 41,
  sym_annotation = 42,
  sym_basic_annotation = 43,
  sym_ref_annotation = 44,
  sym_identifying_annotation = 45,
  sym_annotation_name = 46,
  sym__annotation_value = 47,
  sym_ref_value = 48,
  sym_id_value = 49,
  sym_string_value = 50,
  sym_boolean_value = 51,
  sym_richtext_value = 52,
  sym_list_value = 53,
  sym_object_value = 54,
  aux_sym_document_repeat1 = 55,
  aux_sym_start_tag_repeat1 = 56,
  aux_sym_start_layer_suffix_repeat1 = 57,
  aux_sym_end_layer_suffix_repeat1 = 58,
  aux_sym_text_variation_repeat1 = 59,
  aux_sym_list_value_repeat1 = 60,
  aux_sym_object_value_repeat1 = 61,
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
  [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = "/[^[<]+/",
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
  [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = {
    .visible = false,
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
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '{')
        ADVANCE(19);
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(23);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
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
      if (lookahead == '>')
        ADVANCE(7);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 8:
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
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>')
        ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_end_text_variation);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(25);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(31);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(35);
      if (lookahead == '[')
        ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(37);
      ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__open_end_markup);
      if (lookahead == '|')
        ADVANCE(13);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[')
        ADVANCE(38);
      END_STATE();
    case 39:
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 40:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 41:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 43:
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '|')
        ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 44:
      if (lookahead == '|')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 46:
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(19);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(49);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(54);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 49:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(50);
      END_STATE();
    case 50:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(51);
      END_STATE();
    case 51:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(53);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH);
      END_STATE();
    case 54:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(55);
      END_STATE();
    case 55:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(56);
      END_STATE();
    case 56:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_number_value);
      if (lookahead == '.')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(61);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(61);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(64);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(64);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(67);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(67);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(18);
      if (lookahead == '}')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(27);
      END_STATE();
    case 69:
      if (lookahead == '<')
        ADVANCE(70);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(30);
      END_STATE();
    case 70:
      if (lookahead == ']')
        ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 34},
  [2] = {.lex_state = 39},
  [3] = {.lex_state = 34},
  [4] = {.lex_state = 34},
  [5] = {.lex_state = 40},
  [6] = {.lex_state = 39},
  [7] = {.lex_state = 34},
  [8] = {.lex_state = 41},
  [9] = {.lex_state = 43},
  [10] = {.lex_state = 39},
  [11] = {.lex_state = 34},
  [12] = {.lex_state = 43},
  [13] = {.lex_state = 43},
  [14] = {.lex_state = 39},
  [15] = {.lex_state = 43},
  [16] = {.lex_state = 43},
  [17] = {.lex_state = 34},
  [18] = {.lex_state = 39},
  [19] = {.lex_state = 39},
  [20] = {.lex_state = 34},
  [21] = {.lex_state = 41},
  [22] = {.lex_state = 41},
  [23] = {.lex_state = 43},
  [24] = {.lex_state = 43},
  [25] = {.lex_state = 43},
  [26] = {.lex_state = 44},
  [27] = {.lex_state = 44},
  [28] = {.lex_state = 34},
  [29] = {.lex_state = 45},
  [30] = {.lex_state = 34},
  [31] = {.lex_state = 41},
  [32] = {.lex_state = 41},
  [33] = {.lex_state = 46},
  [34] = {.lex_state = 46},
  [35] = {.lex_state = 41},
  [36] = {.lex_state = 41},
  [37] = {.lex_state = 46},
  [38] = {.lex_state = 47},
  [39] = {.lex_state = 34},
  [40] = {.lex_state = 41},
  [41] = {.lex_state = 41},
  [42] = {.lex_state = 43},
  [43] = {.lex_state = 41},
  [44] = {.lex_state = 41},
  [45] = {.lex_state = 44},
  [46] = {.lex_state = 43},
  [47] = {.lex_state = 43},
  [48] = {.lex_state = 41},
  [49] = {.lex_state = 41},
  [50] = {.lex_state = 34},
  [51] = {.lex_state = 44},
  [52] = {.lex_state = 39},
  [53] = {.lex_state = 47},
  [54] = {.lex_state = 34},
  [55] = {.lex_state = 34},
  [56] = {.lex_state = 41},
  [57] = {.lex_state = 41},
  [58] = {.lex_state = 39},
  [59] = {.lex_state = 48},
  [60] = {.lex_state = 39},
  [61] = {.lex_state = 39},
  [62] = {.lex_state = 47},
  [63] = {.lex_state = 34},
  [64] = {.lex_state = 43},
  [65] = {.lex_state = 41},
  [66] = {.lex_state = 43},
  [67] = {.lex_state = 43},
  [68] = {.lex_state = 43},
  [69] = {.lex_state = 41},
  [70] = {.lex_state = 47},
  [71] = {.lex_state = 45},
  [72] = {.lex_state = 47},
  [73] = {.lex_state = 34},
  [74] = {.lex_state = 34},
  [75] = {.lex_state = 41},
  [76] = {.lex_state = 41},
  [77] = {.lex_state = 48},
  [78] = {.lex_state = 59},
  [79] = {.lex_state = 62},
  [80] = {.lex_state = 41},
  [81] = {.lex_state = 65},
  [82] = {.lex_state = 39},
  [83] = {.lex_state = 41},
  [84] = {.lex_state = 41},
  [85] = {.lex_state = 41},
  [86] = {.lex_state = 47},
  [87] = {.lex_state = 47},
  [88] = {.lex_state = 43},
  [89] = {.lex_state = 43},
  [90] = {.lex_state = 43},
  [91] = {.lex_state = 47},
  [92] = {.lex_state = 39},
  [93] = {.lex_state = 47},
  [94] = {.lex_state = 47},
  [95] = {.lex_state = 48},
  [96] = {.lex_state = 59},
  [97] = {.lex_state = 62},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 65},
  [100] = {.lex_state = 39},
  [101] = {.lex_state = 47},
  [102] = {.lex_state = 48},
  [103] = {.lex_state = 48},
  [104] = {.lex_state = 69},
  [105] = {.lex_state = 46},
  [106] = {.lex_state = 39},
  [107] = {.lex_state = 46},
  [108] = {.lex_state = 39},
  [109] = {.lex_state = 47},
  [110] = {.lex_state = 47},
  [111] = {.lex_state = 48},
  [112] = {.lex_state = 48},
  [113] = {.lex_state = 69},
  [114] = {.lex_state = 39},
  [115] = {.lex_state = 41},
  [116] = {.lex_state = 48},
  [117] = {.lex_state = 47},
  [118] = {.lex_state = 41},
  [119] = {.lex_state = 41},
  [120] = {.lex_state = 39},
  [121] = {.lex_state = 48},
  [122] = {.lex_state = 39},
  [123] = {.lex_state = 41},
  [124] = {.lex_state = 39},
  [125] = {.lex_state = 68},
  [126] = {.lex_state = 47},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 68},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 47},
  [131] = {.lex_state = 41},
  [132] = {.lex_state = 47},
  [133] = {.lex_state = 39},
  [134] = {.lex_state = 39},
  [135] = {.lex_state = 39},
  [136] = {.lex_state = 39},
  [137] = {.lex_state = 39},
  [138] = {.lex_state = 39},
  [139] = {.lex_state = 68},
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
    [sym_document] = STATE(5),
    [sym__chunk] = STATE(7),
    [sym_start_tag] = STATE(7),
    [sym__open_start_markup] = STATE(6),
    [sym_end_tag] = STATE(7),
    [sym_milestone_tag] = STATE(7),
    [sym_text_variation] = STATE(7),
    [sym_text] = STATE(7),
    [aux_sym_document_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(5),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym__open_end_markup] = ACTIONS(11),
    [sym_begin_text_variation] = ACTIONS(13),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [2] = {
    [sym_name] = STATE(9),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [3] = {
    [sym__chunk] = STATE(13),
    [sym_start_tag] = STATE(13),
    [sym__open_start_markup] = STATE(14),
    [sym_end_tag] = STATE(13),
    [sym_milestone_tag] = STATE(13),
    [sym_text_variation] = STATE(13),
    [sym_variant_text] = STATE(15),
    [sym_text] = STATE(13),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym__open_end_markup] = ACTIONS(23),
    [sym_begin_text_variation] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(27),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(29),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym__open_end_markup] = ACTIONS(31),
    [sym_begin_text_variation] = ACTIONS(29),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(31),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
  },
  [6] = {
    [sym_name] = STATE(16),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [7] = {
    [sym__chunk] = STATE(17),
    [sym_start_tag] = STATE(17),
    [sym__open_start_markup] = STATE(6),
    [sym_end_tag] = STATE(17),
    [sym_milestone_tag] = STATE(17),
    [sym_text_variation] = STATE(17),
    [sym_text] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(35),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym__open_end_markup] = ACTIONS(11),
    [sym_begin_text_variation] = ACTIONS(13),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(15),
  },
  [8] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(37),
    [sym__close_start_markup] = ACTIONS(37),
    [anon_sym_RBRACK] = ACTIONS(37),
    [anon_sym_PIPE] = ACTIONS(37),
    [anon_sym_COMMA] = ACTIONS(37),
  },
  [9] = {
    [sym__close_end_markup] = STATE(20),
    [sym_end_layer_suffix] = STATE(21),
    [aux_sym_start_tag_repeat1] = STATE(22),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_PIPE] = ACTIONS(44),
  },
  [10] = {
    [sym_name] = STATE(23),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [11] = {
    [sym__chunk] = STATE(13),
    [sym_start_tag] = STATE(13),
    [sym__open_start_markup] = STATE(14),
    [sym_end_tag] = STATE(13),
    [sym_milestone_tag] = STATE(13),
    [sym_text_variation] = STATE(13),
    [sym_variant_text] = STATE(24),
    [sym_text] = STATE(13),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym__open_end_markup] = ACTIONS(23),
    [sym_begin_text_variation] = ACTIONS(25),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(27),
  },
  [12] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(29),
  },
  [13] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(46),
  },
  [14] = {
    [sym_name] = STATE(25),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [15] = {
    [sym_text_variation_separator] = STATE(27),
    [aux_sym_text_variation_repeat1] = STATE(27),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(48),
  },
  [16] = {
    [sym__close_end_markup] = STATE(30),
    [sym_start_layer_suffix] = STATE(31),
    [aux_sym_start_tag_repeat1] = STATE(32),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(50),
    [anon_sym_RBRACK] = ACTIONS(52),
    [anon_sym_PIPE] = ACTIONS(54),
  },
  [17] = {
    [sym__chunk] = STATE(17),
    [sym_start_tag] = STATE(17),
    [sym__open_start_markup] = STATE(6),
    [sym_end_tag] = STATE(17),
    [sym_milestone_tag] = STATE(17),
    [sym_text_variation] = STATE(17),
    [sym_text] = STATE(17),
    [aux_sym_document_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(56),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(58),
    [sym__open_end_markup] = ACTIONS(61),
    [sym_begin_text_variation] = ACTIONS(64),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(67),
  },
  [18] = {
    [sym_annotation] = STATE(35),
    [sym_basic_annotation] = STATE(36),
    [sym_ref_annotation] = STATE(36),
    [sym_identifying_annotation] = STATE(36),
    [sym_annotation_name] = STATE(37),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(70),
    [sym_id_annotation] = ACTIONS(72),
  },
  [19] = {
    [sym_name] = STATE(38),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(74),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(74),
    [sym__open_end_markup] = ACTIONS(76),
    [sym_begin_text_variation] = ACTIONS(74),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(76),
  },
  [21] = {
    [sym__close_end_markup] = STATE(39),
    [aux_sym_start_tag_repeat1] = STATE(40),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(78),
  },
  [22] = {
    [sym__close_end_markup] = STATE(39),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(78),
  },
  [23] = {
    [sym__close_end_markup] = STATE(42),
    [sym_end_layer_suffix] = STATE(43),
    [aux_sym_start_tag_repeat1] = STATE(44),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(80),
    [anon_sym_PIPE] = ACTIONS(44),
  },
  [24] = {
    [sym_text_variation_separator] = STATE(45),
    [aux_sym_text_variation_repeat1] = STATE(45),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(48),
  },
  [25] = {
    [sym__close_end_markup] = STATE(47),
    [sym_start_layer_suffix] = STATE(48),
    [aux_sym_start_tag_repeat1] = STATE(49),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(82),
    [anon_sym_RBRACK] = ACTIONS(84),
    [anon_sym_PIPE] = ACTIONS(54),
  },
  [26] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(86),
    [sym_end_text_variation] = ACTIONS(88),
  },
  [27] = {
    [sym_text_variation_separator] = STATE(51),
    [aux_sym_text_variation_repeat1] = STATE(51),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(90),
    [sym_end_text_variation] = ACTIONS(92),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(94),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(94),
    [sym__open_end_markup] = ACTIONS(96),
    [sym_begin_text_variation] = ACTIONS(94),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(96),
  },
  [29] = {
    [sym_name] = STATE(53),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(98),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(100),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym__open_end_markup] = ACTIONS(102),
    [sym_begin_text_variation] = ACTIONS(100),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(102),
  },
  [31] = {
    [sym__close_end_markup] = STATE(55),
    [aux_sym_start_tag_repeat1] = STATE(56),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(106),
  },
  [32] = {
    [sym__close_end_markup] = STATE(55),
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(104),
    [anon_sym_RBRACK] = ACTIONS(106),
  },
  [33] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(108),
    [anon_sym_DASH_GT] = ACTIONS(108),
  },
  [34] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(110),
  },
  [35] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(112),
    [sym__close_start_markup] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
  },
  [36] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(114),
    [sym__close_start_markup] = ACTIONS(114),
    [anon_sym_RBRACK] = ACTIONS(114),
  },
  [37] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(116),
    [anon_sym_DASH_GT] = ACTIONS(118),
  },
  [38] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(62),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(120),
    [anon_sym_RBRACK] = ACTIONS(123),
    [anon_sym_COMMA] = ACTIONS(125),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(127),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(127),
    [sym__open_end_markup] = ACTIONS(129),
    [sym_begin_text_variation] = ACTIONS(127),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(129),
  },
  [40] = {
    [sym__close_end_markup] = STATE(63),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(131),
  },
  [41] = {
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(133),
    [anon_sym_RBRACK] = ACTIONS(112),
  },
  [42] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(74),
  },
  [43] = {
    [sym__close_end_markup] = STATE(64),
    [aux_sym_start_tag_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(137),
  },
  [44] = {
    [sym__close_end_markup] = STATE(64),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(137),
  },
  [45] = {
    [sym_text_variation_separator] = STATE(51),
    [aux_sym_text_variation_repeat1] = STATE(51),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(90),
    [sym_end_text_variation] = ACTIONS(139),
  },
  [46] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(94),
  },
  [47] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(100),
  },
  [48] = {
    [sym__close_end_markup] = STATE(68),
    [aux_sym_start_tag_repeat1] = STATE(69),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(143),
  },
  [49] = {
    [sym__close_end_markup] = STATE(68),
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(141),
    [anon_sym_RBRACK] = ACTIONS(143),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(145),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(145),
    [sym__open_end_markup] = ACTIONS(147),
    [sym_begin_text_variation] = ACTIONS(145),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(147),
  },
  [51] = {
    [sym_text_variation_separator] = STATE(51),
    [aux_sym_text_variation_repeat1] = STATE(51),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(149),
    [sym_end_text_variation] = ACTIONS(152),
  },
  [52] = {
    [sym_name] = STATE(70),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [53] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(72),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(154),
    [sym__close_start_markup] = ACTIONS(157),
    [anon_sym_RBRACK] = ACTIONS(157),
    [anon_sym_COMMA] = ACTIONS(159),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(161),
    [sym__open_end_markup] = ACTIONS(163),
    [sym_begin_text_variation] = ACTIONS(161),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(163),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(165),
    [sym__open_end_markup] = ACTIONS(167),
    [sym_begin_text_variation] = ACTIONS(165),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(167),
  },
  [56] = {
    [sym__close_end_markup] = STATE(74),
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(169),
    [anon_sym_RBRACK] = ACTIONS(171),
  },
  [57] = {
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(133),
    [sym__close_start_markup] = ACTIONS(112),
    [anon_sym_RBRACK] = ACTIONS(112),
  },
  [58] = {
    [sym_name] = STATE(75),
    [sym_id_value] = STATE(76),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [59] = {
    [sym__annotation_value] = STATE(83),
    [sym_string_value] = STATE(83),
    [sym_boolean_value] = STATE(83),
    [sym_richtext_value] = STATE(83),
    [sym_list_value] = STATE(83),
    [sym_object_value] = STATE(83),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(173),
    [anon_sym_DQUOTE] = ACTIONS(175),
    [anon_sym_SQUOTE] = ACTIONS(177),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(179),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(179),
    [sym_number_value] = ACTIONS(181),
    [anon_sym_LBRACK_GT] = ACTIONS(183),
    [anon_sym_LBRACE] = ACTIONS(185),
  },
  [60] = {
    [sym_name] = STATE(84),
    [sym_ref_value] = STATE(85),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [61] = {
    [sym_name] = STATE(86),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [62] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(187),
    [anon_sym_RBRACK] = ACTIONS(190),
    [anon_sym_COMMA] = ACTIONS(125),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(192),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(192),
    [sym__open_end_markup] = ACTIONS(194),
    [sym_begin_text_variation] = ACTIONS(192),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(194),
  },
  [64] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(127),
  },
  [65] = {
    [sym__close_end_markup] = STATE(88),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [anon_sym_RBRACK] = ACTIONS(196),
  },
  [66] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(145),
  },
  [67] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(161),
  },
  [68] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(165),
  },
  [69] = {
    [sym__close_end_markup] = STATE(90),
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(39),
    [sym__close_start_markup] = ACTIONS(198),
    [anon_sym_RBRACK] = ACTIONS(200),
  },
  [70] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(91),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(202),
    [sym__close_start_markup] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(159),
  },
  [71] = {
    [sym_name] = STATE(93),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PLUS] = ACTIONS(207),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [72] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(94),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(202),
    [sym__close_start_markup] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(205),
    [anon_sym_COMMA] = ACTIONS(159),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(209),
    [sym__open_end_markup] = ACTIONS(211),
    [sym_begin_text_variation] = ACTIONS(209),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(211),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(213),
    [sym__open_end_markup] = ACTIONS(215),
    [sym_begin_text_variation] = ACTIONS(213),
    [aux_sym_SLASH_LBRACK_CARET_LBRACK_LT_RBRACK_PLUS_SLASH] = ACTIONS(215),
  },
  [75] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(217),
    [sym__close_start_markup] = ACTIONS(217),
    [anon_sym_RBRACK] = ACTIONS(217),
  },
  [76] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(219),
    [sym__close_start_markup] = ACTIONS(219),
    [anon_sym_RBRACK] = ACTIONS(219),
  },
  [77] = {
    [sym__annotation_value] = STATE(101),
    [sym_string_value] = STATE(101),
    [sym_boolean_value] = STATE(101),
    [sym_richtext_value] = STATE(101),
    [sym_list_value] = STATE(101),
    [sym_object_value] = STATE(101),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(227),
    [sym_number_value] = ACTIONS(229),
    [anon_sym_LBRACK_GT] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(233),
  },
  [78] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(235),
  },
  [79] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH] = ACTIONS(237),
  },
  [80] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(239),
    [sym__close_start_markup] = ACTIONS(239),
    [anon_sym_RBRACK] = ACTIONS(239),
  },
  [81] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH] = ACTIONS(241),
  },
  [82] = {
    [sym_annotation] = STATE(108),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(108),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(70),
    [sym_id_annotation] = ACTIONS(243),
  },
  [83] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(245),
    [sym__close_start_markup] = ACTIONS(245),
    [anon_sym_RBRACK] = ACTIONS(245),
  },
  [84] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(247),
    [sym__close_start_markup] = ACTIONS(247),
    [anon_sym_RBRACK] = ACTIONS(247),
  },
  [85] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(249),
    [sym__close_start_markup] = ACTIONS(249),
    [anon_sym_RBRACK] = ACTIONS(249),
  },
  [86] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(251),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(251),
  },
  [87] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(253),
    [anon_sym_RBRACK] = ACTIONS(251),
    [anon_sym_COMMA] = ACTIONS(256),
  },
  [88] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(192),
  },
  [89] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(209),
  },
  [90] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_PIPE] = ACTIONS(213),
  },
  [91] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(94),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(259),
    [sym__close_start_markup] = ACTIONS(262),
    [anon_sym_RBRACK] = ACTIONS(262),
    [anon_sym_COMMA] = ACTIONS(159),
  },
  [92] = {
    [sym_name] = STATE(109),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(19),
  },
  [93] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(264),
    [sym__close_start_markup] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(264),
  },
  [94] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(94),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(266),
    [sym__close_start_markup] = ACTIONS(264),
    [anon_sym_RBRACK] = ACTIONS(264),
    [anon_sym_COMMA] = ACTIONS(269),
  },
  [95] = {
    [sym__annotation_value] = STATE(110),
    [sym_string_value] = STATE(110),
    [sym_boolean_value] = STATE(110),
    [sym_richtext_value] = STATE(110),
    [sym_list_value] = STATE(110),
    [sym_object_value] = STATE(110),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(227),
    [sym_number_value] = ACTIONS(272),
    [anon_sym_LBRACK_GT] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(233),
  },
  [96] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(274),
  },
  [97] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH] = ACTIONS(276),
  },
  [98] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(239),
    [anon_sym_COMMA] = ACTIONS(239),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(239),
    [sym_id_annotation] = ACTIONS(239),
    [anon_sym_RBRACE] = ACTIONS(239),
  },
  [99] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH] = ACTIONS(278),
  },
  [100] = {
    [sym_annotation] = STATE(114),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(114),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(70),
    [sym_id_annotation] = ACTIONS(243),
  },
  [101] = {
    [aux_sym_list_value_repeat1] = STATE(117),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(280),
    [anon_sym_COMMA] = ACTIONS(282),
  },
  [102] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(284),
  },
  [103] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(284),
  },
  [104] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_LT_RBRACK] = ACTIONS(286),
  },
  [105] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(288),
  },
  [106] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(114),
    [sym_id_annotation] = ACTIONS(114),
    [anon_sym_RBRACE] = ACTIONS(114),
  },
  [107] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_EQ] = ACTIONS(290),
    [anon_sym_DASH_GT] = ACTIONS(292),
  },
  [108] = {
    [sym_annotation] = STATE(124),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(70),
    [sym_id_annotation] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(294),
  },
  [109] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(296),
    [sym__close_start_markup] = ACTIONS(296),
    [anon_sym_RBRACK] = ACTIONS(296),
    [anon_sym_COMMA] = ACTIONS(296),
  },
  [110] = {
    [aux_sym_list_value_repeat1] = STATE(126),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(298),
    [anon_sym_COMMA] = ACTIONS(282),
  },
  [111] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_DQUOTE] = ACTIONS(300),
  },
  [112] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_SQUOTE] = ACTIONS(300),
  },
  [113] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_LT_RBRACK] = ACTIONS(302),
  },
  [114] = {
    [sym_annotation] = STATE(124),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(70),
    [sym_id_annotation] = ACTIONS(243),
    [anon_sym_RBRACE] = ACTIONS(304),
  },
  [115] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(306),
    [sym__close_start_markup] = ACTIONS(306),
    [anon_sym_RBRACK] = ACTIONS(306),
  },
  [116] = {
    [sym__annotation_value] = STATE(130),
    [sym_string_value] = STATE(130),
    [sym_boolean_value] = STATE(130),
    [sym_richtext_value] = STATE(130),
    [sym_list_value] = STATE(130),
    [sym_object_value] = STATE(130),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(227),
    [sym_number_value] = ACTIONS(308),
    [anon_sym_LBRACK_GT] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(233),
  },
  [117] = {
    [aux_sym_list_value_repeat1] = STATE(132),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(310),
    [anon_sym_COMMA] = ACTIONS(282),
  },
  [118] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(312),
    [sym__close_start_markup] = ACTIONS(312),
    [anon_sym_RBRACK] = ACTIONS(312),
  },
  [119] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(314),
    [sym__close_start_markup] = ACTIONS(314),
    [anon_sym_RBRACK] = ACTIONS(314),
  },
  [120] = {
    [sym_name] = STATE(134),
    [sym_id_value] = STATE(135),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(316),
  },
  [121] = {
    [sym__annotation_value] = STATE(136),
    [sym_string_value] = STATE(136),
    [sym_boolean_value] = STATE(136),
    [sym_richtext_value] = STATE(136),
    [sym_list_value] = STATE(136),
    [sym_object_value] = STATE(136),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(221),
    [anon_sym_DQUOTE] = ACTIONS(223),
    [anon_sym_SQUOTE] = ACTIONS(225),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(227),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(227),
    [sym_number_value] = ACTIONS(318),
    [anon_sym_LBRACK_GT] = ACTIONS(231),
    [anon_sym_LBRACE] = ACTIONS(233),
  },
  [122] = {
    [sym_name] = STATE(137),
    [sym_ref_value] = STATE(138),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(316),
  },
  [123] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(320),
    [sym__close_start_markup] = ACTIONS(320),
    [anon_sym_RBRACK] = ACTIONS(320),
  },
  [124] = {
    [sym_annotation] = STATE(124),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(322),
    [sym_id_annotation] = ACTIONS(325),
    [anon_sym_RBRACE] = ACTIONS(328),
  },
  [125] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(306),
    [anon_sym_COMMA] = ACTIONS(306),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(306),
    [sym_id_annotation] = ACTIONS(306),
    [anon_sym_RBRACE] = ACTIONS(306),
  },
  [126] = {
    [aux_sym_list_value_repeat1] = STATE(132),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(330),
    [anon_sym_COMMA] = ACTIONS(282),
  },
  [127] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(312),
    [anon_sym_COMMA] = ACTIONS(312),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(312),
    [sym_id_annotation] = ACTIONS(312),
    [anon_sym_RBRACE] = ACTIONS(312),
  },
  [128] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(314),
    [anon_sym_COMMA] = ACTIONS(314),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(314),
    [sym_id_annotation] = ACTIONS(314),
    [anon_sym_RBRACE] = ACTIONS(314),
  },
  [129] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(320),
    [anon_sym_COMMA] = ACTIONS(320),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(320),
    [sym_id_annotation] = ACTIONS(320),
    [anon_sym_RBRACE] = ACTIONS(320),
  },
  [130] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(332),
  },
  [131] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(334),
    [sym__close_start_markup] = ACTIONS(334),
    [anon_sym_RBRACK] = ACTIONS(334),
  },
  [132] = {
    [aux_sym_list_value_repeat1] = STATE(132),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(332),
    [anon_sym_COMMA] = ACTIONS(336),
  },
  [133] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(37),
    [sym_id_annotation] = ACTIONS(37),
    [anon_sym_RBRACE] = ACTIONS(37),
  },
  [134] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(217),
    [sym_id_annotation] = ACTIONS(217),
    [anon_sym_RBRACE] = ACTIONS(217),
  },
  [135] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(219),
    [sym_id_annotation] = ACTIONS(219),
    [anon_sym_RBRACE] = ACTIONS(219),
  },
  [136] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(245),
    [sym_id_annotation] = ACTIONS(245),
    [anon_sym_RBRACE] = ACTIONS(245),
  },
  [137] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(247),
    [sym_id_annotation] = ACTIONS(247),
    [anon_sym_RBRACE] = ACTIONS(247),
  },
  [138] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(249),
    [sym_id_annotation] = ACTIONS(249),
    [anon_sym_RBRACE] = ACTIONS(249),
  },
  [139] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(17),
    [anon_sym_RBRACK] = ACTIONS(334),
    [anon_sym_COMMA] = ACTIONS(334),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(334),
    [sym_id_annotation] = ACTIONS(334),
    [anon_sym_RBRACE] = ACTIONS(334),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = true}, RECOVER(),
  [3] = {.count = 1, .reusable = false}, RECOVER(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_document, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [9] = {.count = 1, .reusable = true}, SHIFT(6),
  [11] = {.count = 1, .reusable = false}, SHIFT(2),
  [13] = {.count = 1, .reusable = true}, SHIFT(3),
  [15] = {.count = 1, .reusable = false}, SHIFT(4),
  [17] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [19] = {.count = 1, .reusable = true}, SHIFT(8),
  [21] = {.count = 1, .reusable = true}, SHIFT(14),
  [23] = {.count = 1, .reusable = false}, SHIFT(10),
  [25] = {.count = 1, .reusable = true}, SHIFT(11),
  [27] = {.count = 1, .reusable = false}, SHIFT(12),
  [29] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [31] = {.count = 1, .reusable = false}, REDUCE(sym_text, 1),
  [33] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [35] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [39] = {.count = 2, .reusable = true}, SHIFT(18), SHIFT_EXTRA(),
  [42] = {.count = 1, .reusable = true}, SHIFT(20),
  [44] = {.count = 1, .reusable = true}, SHIFT(19),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_variant_text, 1),
  [48] = {.count = 1, .reusable = true}, SHIFT(26),
  [50] = {.count = 1, .reusable = true}, SHIFT(28),
  [52] = {.count = 1, .reusable = true}, SHIFT(30),
  [54] = {.count = 1, .reusable = true}, SHIFT(29),
  [56] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [61] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [67] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [70] = {.count = 1, .reusable = true}, SHIFT(33),
  [72] = {.count = 1, .reusable = true}, SHIFT(34),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [78] = {.count = 1, .reusable = true}, SHIFT(39),
  [80] = {.count = 1, .reusable = true}, SHIFT(42),
  [82] = {.count = 1, .reusable = true}, SHIFT(46),
  [84] = {.count = 1, .reusable = true}, SHIFT(47),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation_separator, 1),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation_separator, 1),
  [90] = {.count = 1, .reusable = false}, SHIFT(26),
  [92] = {.count = 1, .reusable = true}, SHIFT(50),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [98] = {.count = 1, .reusable = true}, SHIFT(52),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 3),
  [104] = {.count = 1, .reusable = true}, SHIFT(54),
  [106] = {.count = 1, .reusable = true}, SHIFT(55),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_annotation_name, 1),
  [110] = {.count = 1, .reusable = true}, SHIFT(58),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [114] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 1),
  [116] = {.count = 1, .reusable = true}, SHIFT(59),
  [118] = {.count = 1, .reusable = true}, SHIFT(60),
  [120] = {.count = 2, .reusable = true}, REDUCE(sym_end_layer_suffix, 2), SHIFT_EXTRA(),
  [123] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 2),
  [125] = {.count = 1, .reusable = true}, SHIFT(61),
  [127] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 4),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 4),
  [131] = {.count = 1, .reusable = true}, SHIFT(63),
  [133] = {.count = 3, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(18), SHIFT_EXTRA(),
  [137] = {.count = 1, .reusable = true}, SHIFT(64),
  [139] = {.count = 1, .reusable = true}, SHIFT(66),
  [141] = {.count = 1, .reusable = true}, SHIFT(67),
  [143] = {.count = 1, .reusable = true}, SHIFT(68),
  [145] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation, 4),
  [147] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation, 4),
  [149] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_variation_repeat1, 2), SHIFT_REPEAT(26),
  [152] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_variation_repeat1, 2),
  [154] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 2), SHIFT_EXTRA(),
  [157] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(71),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 4),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 4),
  [169] = {.count = 1, .reusable = true}, SHIFT(73),
  [171] = {.count = 1, .reusable = true}, SHIFT(74),
  [173] = {.count = 1, .reusable = false}, SHIFT(77),
  [175] = {.count = 1, .reusable = true}, SHIFT(78),
  [177] = {.count = 1, .reusable = true}, SHIFT(79),
  [179] = {.count = 1, .reusable = true}, SHIFT(80),
  [181] = {.count = 1, .reusable = true}, SHIFT(83),
  [183] = {.count = 1, .reusable = true}, SHIFT(81),
  [185] = {.count = 1, .reusable = true}, SHIFT(82),
  [187] = {.count = 2, .reusable = true}, REDUCE(sym_end_layer_suffix, 3), SHIFT_EXTRA(),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 3),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 5),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 5),
  [196] = {.count = 1, .reusable = true}, SHIFT(88),
  [198] = {.count = 1, .reusable = true}, SHIFT(89),
  [200] = {.count = 1, .reusable = true}, SHIFT(90),
  [202] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 3), SHIFT_EXTRA(),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 3),
  [207] = {.count = 1, .reusable = true}, SHIFT(92),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 5),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 5),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 5),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 5),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_id_value, 1),
  [219] = {.count = 1, .reusable = true}, REDUCE(sym_identifying_annotation, 3),
  [221] = {.count = 1, .reusable = false}, SHIFT(95),
  [223] = {.count = 1, .reusable = true}, SHIFT(96),
  [225] = {.count = 1, .reusable = true}, SHIFT(97),
  [227] = {.count = 1, .reusable = true}, SHIFT(98),
  [229] = {.count = 1, .reusable = true}, SHIFT(101),
  [231] = {.count = 1, .reusable = true}, SHIFT(99),
  [233] = {.count = 1, .reusable = true}, SHIFT(100),
  [235] = {.count = 1, .reusable = false}, SHIFT(102),
  [237] = {.count = 1, .reusable = false}, SHIFT(103),
  [239] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_value, 1),
  [241] = {.count = 1, .reusable = false}, SHIFT(104),
  [243] = {.count = 1, .reusable = true}, SHIFT(105),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_basic_annotation, 3),
  [247] = {.count = 1, .reusable = true}, REDUCE(sym_ref_value, 1),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_ref_annotation, 3),
  [251] = {.count = 1, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2),
  [253] = {.count = 2, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2), SHIFT_EXTRA(),
  [256] = {.count = 2, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2), SHIFT_REPEAT(61),
  [259] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 4), SHIFT_EXTRA(),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 4),
  [264] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2), SHIFT_EXTRA(),
  [269] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2), SHIFT_REPEAT(71),
  [272] = {.count = 1, .reusable = true}, SHIFT(110),
  [274] = {.count = 1, .reusable = false}, SHIFT(111),
  [276] = {.count = 1, .reusable = false}, SHIFT(112),
  [278] = {.count = 1, .reusable = false}, SHIFT(113),
  [280] = {.count = 1, .reusable = true}, SHIFT(115),
  [282] = {.count = 1, .reusable = true}, SHIFT(116),
  [284] = {.count = 1, .reusable = true}, SHIFT(118),
  [286] = {.count = 1, .reusable = true}, SHIFT(119),
  [288] = {.count = 1, .reusable = true}, SHIFT(120),
  [290] = {.count = 1, .reusable = true}, SHIFT(121),
  [292] = {.count = 1, .reusable = true}, SHIFT(122),
  [294] = {.count = 1, .reusable = true}, SHIFT(123),
  [296] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 3),
  [298] = {.count = 1, .reusable = true}, SHIFT(125),
  [300] = {.count = 1, .reusable = true}, SHIFT(127),
  [302] = {.count = 1, .reusable = true}, SHIFT(128),
  [304] = {.count = 1, .reusable = true}, SHIFT(129),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_list_value, 3),
  [308] = {.count = 1, .reusable = true}, SHIFT(130),
  [310] = {.count = 1, .reusable = true}, SHIFT(131),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_string_value, 3),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_richtext_value, 3),
  [316] = {.count = 1, .reusable = true}, SHIFT(133),
  [318] = {.count = 1, .reusable = true}, SHIFT(136),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_object_value, 3),
  [322] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2), SHIFT_REPEAT(33),
  [325] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2), SHIFT_REPEAT(105),
  [328] = {.count = 1, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2),
  [330] = {.count = 1, .reusable = true}, SHIFT(139),
  [332] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_value_repeat1, 2),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_list_value, 4),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(116),
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
