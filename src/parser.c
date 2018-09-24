#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 9
#define STATE_COUNT 140
#define SYMBOL_COUNT 63
#define ALIAS_COUNT 0
#define TOKEN_COUNT 29
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
  sym__regular_text = 12,
  sym_escaped_char = 13,
  anon_sym_EQ = 14,
  anon_sym_DASH_GT = 15,
  sym_id_annotation = 16,
  anon_sym_DQUOTE = 17,
  aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH = 18,
  anon_sym_SQUOTE = 19,
  aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH = 20,
  aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH = 21,
  aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH = 22,
  sym_number_value = 23,
  anon_sym_LBRACK_GT = 24,
  aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH = 25,
  anon_sym_LT_RBRACK = 26,
  anon_sym_LBRACE = 27,
  anon_sym_RBRACE = 28,
  sym_document = 29,
  sym__chunk = 30,
  sym_start_tag = 31,
  sym__open_start_markup = 32,
  sym_end_tag = 33,
  sym__close_end_markup = 34,
  sym_milestone_tag = 35,
  sym_start_layer_suffix = 36,
  sym_end_layer_suffix = 37,
  sym_text_variation = 38,
  sym_text_variation_separator = 39,
  sym_variant_text = 40,
  sym_name = 41,
  sym_text = 42,
  sym_annotation = 43,
  sym_basic_annotation = 44,
  sym_ref_annotation = 45,
  sym_identifying_annotation = 46,
  sym_annotation_name = 47,
  sym__annotation_value = 48,
  sym_ref_value = 49,
  sym_id_value = 50,
  sym_string_value = 51,
  sym_boolean_value = 52,
  sym_richtext_value = 53,
  sym_list_value = 54,
  sym_object_value = 55,
  aux_sym_document_repeat1 = 56,
  aux_sym_start_tag_repeat1 = 57,
  aux_sym_start_layer_suffix_repeat1 = 58,
  aux_sym_end_layer_suffix_repeat1 = 59,
  aux_sym_text_variation_repeat1 = 60,
  aux_sym_list_value_repeat1 = 61,
  aux_sym_object_value_repeat1 = 62,
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
  [sym__regular_text] = "_regular_text",
  [sym_escaped_char] = "escaped_char",
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
  [sym__regular_text] = {
    .visible = false,
    .named = true,
  },
  [sym_escaped_char] = {
    .visible = true,
    .named = true,
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
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(25);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
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
      if (lookahead == '!' ||
          lookahead == '\"' ||
          lookahead == '\'' ||
          lookahead == '<' ||
          lookahead == '[' ||
          lookahead == '\\' ||
          lookahead == '|')
        ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_escaped_char);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_PIPE);
      if (lookahead == '>')
        ADVANCE(23);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_end_text_variation);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH);
      if (lookahead == '.')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(33);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 34:
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_number_value);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(35);
      END_STATE();
    case 36:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '<')
        ADVANCE(37);
      if (lookahead == '[')
        ADVANCE(38);
      if (lookahead == '\\')
        ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(39);
      ADVANCE(40);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__open_end_markup);
      if (lookahead == '|')
        ADVANCE(13);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != '\\')
        ADVANCE(40);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__regular_text);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '[' &&
          lookahead != '\\')
        ADVANCE(40);
      END_STATE();
    case 41:
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 42:
      if (lookahead == 0)
        ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 43:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 45:
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == '|')
        ADVANCE(44);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 46:
      if (lookahead == '|')
        ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == '+')
        ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 48:
      if (lookahead == '-')
        ADVANCE(6);
      if (lookahead == '=')
        ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 49:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == '>')
        ADVANCE(15);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 50:
      if (lookahead == '\"')
        ADVANCE(2);
      if (lookahead == '\'')
        ADVANCE(3);
      if (lookahead == '[')
        ADVANCE(16);
      if (lookahead == '{')
        ADVANCE(21);
      if (lookahead == 'F' ||
          lookahead == 'f')
        ADVANCE(51);
      if (lookahead == 'T' ||
          lookahead == 't')
        ADVANCE(56);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 51:
      if (lookahead == 'A' ||
          lookahead == 'a')
        ADVANCE(52);
      END_STATE();
    case 52:
      if (lookahead == 'L' ||
          lookahead == 'l')
        ADVANCE(53);
      END_STATE();
    case 53:
      if (lookahead == 'S' ||
          lookahead == 's')
        ADVANCE(54);
      END_STATE();
    case 54:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(55);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH);
      END_STATE();
    case 56:
      if (lookahead == 'R' ||
          lookahead == 'r')
        ADVANCE(57);
      END_STATE();
    case 57:
      if (lookahead == 'U' ||
          lookahead == 'u')
        ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 'E' ||
          lookahead == 'e')
        ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_number_value);
      if (lookahead == '.')
        ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9'))
        ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(63);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\"')
        ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(66);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '\'')
        ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(69);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_SLASH_BSLASHs_PLUS_SLASH);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH);
      if (lookahead != 0 &&
          lookahead != '<')
        ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == ',')
        ADVANCE(5);
      if (lookahead == ':')
        ADVANCE(8);
      if (lookahead == ']')
        ADVANCE(20);
      if (lookahead == '}')
        ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z'))
        ADVANCE(29);
      END_STATE();
    case 71:
      if (lookahead == '<')
        ADVANCE(72);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ')
        ADVANCE(32);
      END_STATE();
    case 72:
      if (lookahead == ']')
        ADVANCE(12);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 36},
  [2] = {.lex_state = 41},
  [3] = {.lex_state = 36},
  [4] = {.lex_state = 36},
  [5] = {.lex_state = 42},
  [6] = {.lex_state = 41},
  [7] = {.lex_state = 36},
  [8] = {.lex_state = 43},
  [9] = {.lex_state = 45},
  [10] = {.lex_state = 41},
  [11] = {.lex_state = 36},
  [12] = {.lex_state = 45},
  [13] = {.lex_state = 45},
  [14] = {.lex_state = 41},
  [15] = {.lex_state = 45},
  [16] = {.lex_state = 45},
  [17] = {.lex_state = 36},
  [18] = {.lex_state = 41},
  [19] = {.lex_state = 41},
  [20] = {.lex_state = 36},
  [21] = {.lex_state = 43},
  [22] = {.lex_state = 43},
  [23] = {.lex_state = 45},
  [24] = {.lex_state = 45},
  [25] = {.lex_state = 45},
  [26] = {.lex_state = 46},
  [27] = {.lex_state = 46},
  [28] = {.lex_state = 36},
  [29] = {.lex_state = 47},
  [30] = {.lex_state = 36},
  [31] = {.lex_state = 43},
  [32] = {.lex_state = 43},
  [33] = {.lex_state = 48},
  [34] = {.lex_state = 48},
  [35] = {.lex_state = 43},
  [36] = {.lex_state = 43},
  [37] = {.lex_state = 48},
  [38] = {.lex_state = 49},
  [39] = {.lex_state = 36},
  [40] = {.lex_state = 43},
  [41] = {.lex_state = 43},
  [42] = {.lex_state = 45},
  [43] = {.lex_state = 43},
  [44] = {.lex_state = 43},
  [45] = {.lex_state = 46},
  [46] = {.lex_state = 45},
  [47] = {.lex_state = 45},
  [48] = {.lex_state = 43},
  [49] = {.lex_state = 43},
  [50] = {.lex_state = 36},
  [51] = {.lex_state = 46},
  [52] = {.lex_state = 41},
  [53] = {.lex_state = 49},
  [54] = {.lex_state = 36},
  [55] = {.lex_state = 36},
  [56] = {.lex_state = 43},
  [57] = {.lex_state = 43},
  [58] = {.lex_state = 41},
  [59] = {.lex_state = 50},
  [60] = {.lex_state = 41},
  [61] = {.lex_state = 41},
  [62] = {.lex_state = 49},
  [63] = {.lex_state = 36},
  [64] = {.lex_state = 45},
  [65] = {.lex_state = 43},
  [66] = {.lex_state = 45},
  [67] = {.lex_state = 45},
  [68] = {.lex_state = 45},
  [69] = {.lex_state = 43},
  [70] = {.lex_state = 49},
  [71] = {.lex_state = 47},
  [72] = {.lex_state = 49},
  [73] = {.lex_state = 36},
  [74] = {.lex_state = 36},
  [75] = {.lex_state = 43},
  [76] = {.lex_state = 43},
  [77] = {.lex_state = 50},
  [78] = {.lex_state = 61},
  [79] = {.lex_state = 64},
  [80] = {.lex_state = 43},
  [81] = {.lex_state = 67},
  [82] = {.lex_state = 41},
  [83] = {.lex_state = 43},
  [84] = {.lex_state = 43},
  [85] = {.lex_state = 43},
  [86] = {.lex_state = 49},
  [87] = {.lex_state = 49},
  [88] = {.lex_state = 45},
  [89] = {.lex_state = 45},
  [90] = {.lex_state = 45},
  [91] = {.lex_state = 49},
  [92] = {.lex_state = 41},
  [93] = {.lex_state = 49},
  [94] = {.lex_state = 49},
  [95] = {.lex_state = 50},
  [96] = {.lex_state = 61},
  [97] = {.lex_state = 64},
  [98] = {.lex_state = 70},
  [99] = {.lex_state = 67},
  [100] = {.lex_state = 41},
  [101] = {.lex_state = 49},
  [102] = {.lex_state = 50},
  [103] = {.lex_state = 50},
  [104] = {.lex_state = 71},
  [105] = {.lex_state = 48},
  [106] = {.lex_state = 41},
  [107] = {.lex_state = 48},
  [108] = {.lex_state = 41},
  [109] = {.lex_state = 49},
  [110] = {.lex_state = 49},
  [111] = {.lex_state = 50},
  [112] = {.lex_state = 50},
  [113] = {.lex_state = 71},
  [114] = {.lex_state = 41},
  [115] = {.lex_state = 43},
  [116] = {.lex_state = 50},
  [117] = {.lex_state = 49},
  [118] = {.lex_state = 43},
  [119] = {.lex_state = 43},
  [120] = {.lex_state = 41},
  [121] = {.lex_state = 50},
  [122] = {.lex_state = 41},
  [123] = {.lex_state = 43},
  [124] = {.lex_state = 41},
  [125] = {.lex_state = 70},
  [126] = {.lex_state = 49},
  [127] = {.lex_state = 70},
  [128] = {.lex_state = 70},
  [129] = {.lex_state = 70},
  [130] = {.lex_state = 49},
  [131] = {.lex_state = 43},
  [132] = {.lex_state = 49},
  [133] = {.lex_state = 41},
  [134] = {.lex_state = 41},
  [135] = {.lex_state = 41},
  [136] = {.lex_state = 41},
  [137] = {.lex_state = 41},
  [138] = {.lex_state = 41},
  [139] = {.lex_state = 70},
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
    [sym_escaped_char] = ACTIONS(1),
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
    [sym__regular_text] = ACTIONS(15),
    [sym_escaped_char] = ACTIONS(17),
  },
  [2] = {
    [sym_name] = STATE(9),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
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
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym__open_end_markup] = ACTIONS(25),
    [sym_begin_text_variation] = ACTIONS(27),
    [sym__regular_text] = ACTIONS(29),
    [sym_escaped_char] = ACTIONS(31),
  },
  [4] = {
    [ts_builtin_sym_end] = ACTIONS(33),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(33),
    [sym__open_end_markup] = ACTIONS(35),
    [sym_begin_text_variation] = ACTIONS(33),
    [sym__regular_text] = ACTIONS(35),
    [sym_escaped_char] = ACTIONS(33),
  },
  [5] = {
    [ts_builtin_sym_end] = ACTIONS(37),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
  },
  [6] = {
    [sym_name] = STATE(16),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
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
    [ts_builtin_sym_end] = ACTIONS(39),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym__open_end_markup] = ACTIONS(11),
    [sym_begin_text_variation] = ACTIONS(13),
    [sym__regular_text] = ACTIONS(15),
    [sym_escaped_char] = ACTIONS(17),
  },
  [8] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(41),
    [sym__close_start_markup] = ACTIONS(41),
    [anon_sym_RBRACK] = ACTIONS(41),
    [anon_sym_PIPE] = ACTIONS(41),
    [anon_sym_COMMA] = ACTIONS(41),
  },
  [9] = {
    [sym__close_end_markup] = STATE(20),
    [sym_end_layer_suffix] = STATE(21),
    [aux_sym_start_tag_repeat1] = STATE(22),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(46),
    [anon_sym_PIPE] = ACTIONS(48),
  },
  [10] = {
    [sym_name] = STATE(23),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
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
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym__open_end_markup] = ACTIONS(25),
    [sym_begin_text_variation] = ACTIONS(27),
    [sym__regular_text] = ACTIONS(29),
    [sym_escaped_char] = ACTIONS(31),
  },
  [12] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(33),
  },
  [13] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(50),
  },
  [14] = {
    [sym_name] = STATE(25),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [15] = {
    [sym_text_variation_separator] = STATE(27),
    [aux_sym_text_variation_repeat1] = STATE(27),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(52),
  },
  [16] = {
    [sym__close_end_markup] = STATE(30),
    [sym_start_layer_suffix] = STATE(31),
    [aux_sym_start_tag_repeat1] = STATE(32),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [sym__close_start_markup] = ACTIONS(54),
    [anon_sym_RBRACK] = ACTIONS(56),
    [anon_sym_PIPE] = ACTIONS(58),
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
    [ts_builtin_sym_end] = ACTIONS(60),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(62),
    [sym__open_end_markup] = ACTIONS(65),
    [sym_begin_text_variation] = ACTIONS(68),
    [sym__regular_text] = ACTIONS(71),
    [sym_escaped_char] = ACTIONS(74),
  },
  [18] = {
    [sym_annotation] = STATE(35),
    [sym_basic_annotation] = STATE(36),
    [sym_ref_annotation] = STATE(36),
    [sym_identifying_annotation] = STATE(36),
    [sym_annotation_name] = STATE(37),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [sym_id_annotation] = ACTIONS(79),
  },
  [19] = {
    [sym_name] = STATE(38),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(81),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(81),
    [sym__open_end_markup] = ACTIONS(83),
    [sym_begin_text_variation] = ACTIONS(81),
    [sym__regular_text] = ACTIONS(83),
    [sym_escaped_char] = ACTIONS(81),
  },
  [21] = {
    [sym__close_end_markup] = STATE(39),
    [aux_sym_start_tag_repeat1] = STATE(40),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(85),
  },
  [22] = {
    [sym__close_end_markup] = STATE(39),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(85),
  },
  [23] = {
    [sym__close_end_markup] = STATE(42),
    [sym_end_layer_suffix] = STATE(43),
    [aux_sym_start_tag_repeat1] = STATE(44),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(87),
    [anon_sym_PIPE] = ACTIONS(48),
  },
  [24] = {
    [sym_text_variation_separator] = STATE(45),
    [aux_sym_text_variation_repeat1] = STATE(45),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(52),
  },
  [25] = {
    [sym__close_end_markup] = STATE(47),
    [sym_start_layer_suffix] = STATE(48),
    [aux_sym_start_tag_repeat1] = STATE(49),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [sym__close_start_markup] = ACTIONS(89),
    [anon_sym_RBRACK] = ACTIONS(91),
    [anon_sym_PIPE] = ACTIONS(58),
  },
  [26] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(93),
    [sym_end_text_variation] = ACTIONS(95),
  },
  [27] = {
    [sym_text_variation_separator] = STATE(51),
    [aux_sym_text_variation_repeat1] = STATE(51),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_end_text_variation] = ACTIONS(99),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(101),
    [sym__open_end_markup] = ACTIONS(103),
    [sym_begin_text_variation] = ACTIONS(101),
    [sym__regular_text] = ACTIONS(103),
    [sym_escaped_char] = ACTIONS(101),
  },
  [29] = {
    [sym_name] = STATE(53),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(105),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(107),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(107),
    [sym__open_end_markup] = ACTIONS(109),
    [sym_begin_text_variation] = ACTIONS(107),
    [sym__regular_text] = ACTIONS(109),
    [sym_escaped_char] = ACTIONS(107),
  },
  [31] = {
    [sym__close_end_markup] = STATE(55),
    [aux_sym_start_tag_repeat1] = STATE(56),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [sym__close_start_markup] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(113),
  },
  [32] = {
    [sym__close_end_markup] = STATE(55),
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [sym__close_start_markup] = ACTIONS(111),
    [anon_sym_RBRACK] = ACTIONS(113),
  },
  [33] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(115),
    [anon_sym_DASH_GT] = ACTIONS(115),
  },
  [34] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(117),
  },
  [35] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(119),
    [sym__close_start_markup] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
  },
  [36] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(121),
    [sym__close_start_markup] = ACTIONS(121),
    [anon_sym_RBRACK] = ACTIONS(121),
  },
  [37] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(123),
    [anon_sym_DASH_GT] = ACTIONS(125),
  },
  [38] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(62),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(127),
    [anon_sym_RBRACK] = ACTIONS(130),
    [anon_sym_COMMA] = ACTIONS(132),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(134),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(134),
    [sym__open_end_markup] = ACTIONS(136),
    [sym_begin_text_variation] = ACTIONS(134),
    [sym__regular_text] = ACTIONS(136),
    [sym_escaped_char] = ACTIONS(134),
  },
  [40] = {
    [sym__close_end_markup] = STATE(63),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(138),
  },
  [41] = {
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(140),
    [anon_sym_RBRACK] = ACTIONS(119),
  },
  [42] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(81),
  },
  [43] = {
    [sym__close_end_markup] = STATE(64),
    [aux_sym_start_tag_repeat1] = STATE(65),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(144),
  },
  [44] = {
    [sym__close_end_markup] = STATE(64),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(144),
  },
  [45] = {
    [sym_text_variation_separator] = STATE(51),
    [aux_sym_text_variation_repeat1] = STATE(51),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(97),
    [sym_end_text_variation] = ACTIONS(146),
  },
  [46] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(101),
  },
  [47] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(107),
  },
  [48] = {
    [sym__close_end_markup] = STATE(68),
    [aux_sym_start_tag_repeat1] = STATE(69),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [sym__close_start_markup] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(150),
  },
  [49] = {
    [sym__close_end_markup] = STATE(68),
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [sym__close_start_markup] = ACTIONS(148),
    [anon_sym_RBRACK] = ACTIONS(150),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(152),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(152),
    [sym__open_end_markup] = ACTIONS(154),
    [sym_begin_text_variation] = ACTIONS(152),
    [sym__regular_text] = ACTIONS(154),
    [sym_escaped_char] = ACTIONS(152),
  },
  [51] = {
    [sym_text_variation_separator] = STATE(51),
    [aux_sym_text_variation_repeat1] = STATE(51),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(156),
    [sym_end_text_variation] = ACTIONS(159),
  },
  [52] = {
    [sym_name] = STATE(70),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [53] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(72),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(161),
    [sym__close_start_markup] = ACTIONS(164),
    [anon_sym_RBRACK] = ACTIONS(164),
    [anon_sym_COMMA] = ACTIONS(166),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(168),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(168),
    [sym__open_end_markup] = ACTIONS(170),
    [sym_begin_text_variation] = ACTIONS(168),
    [sym__regular_text] = ACTIONS(170),
    [sym_escaped_char] = ACTIONS(168),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(172),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(172),
    [sym__open_end_markup] = ACTIONS(174),
    [sym_begin_text_variation] = ACTIONS(172),
    [sym__regular_text] = ACTIONS(174),
    [sym_escaped_char] = ACTIONS(172),
  },
  [56] = {
    [sym__close_end_markup] = STATE(74),
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [sym__close_start_markup] = ACTIONS(176),
    [anon_sym_RBRACK] = ACTIONS(178),
  },
  [57] = {
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(140),
    [sym__close_start_markup] = ACTIONS(119),
    [anon_sym_RBRACK] = ACTIONS(119),
  },
  [58] = {
    [sym_name] = STATE(75),
    [sym_id_value] = STATE(76),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [59] = {
    [sym__annotation_value] = STATE(83),
    [sym_string_value] = STATE(83),
    [sym_boolean_value] = STATE(83),
    [sym_richtext_value] = STATE(83),
    [sym_list_value] = STATE(83),
    [sym_object_value] = STATE(83),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(180),
    [anon_sym_DQUOTE] = ACTIONS(182),
    [anon_sym_SQUOTE] = ACTIONS(184),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(186),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(186),
    [sym_number_value] = ACTIONS(188),
    [anon_sym_LBRACK_GT] = ACTIONS(190),
    [anon_sym_LBRACE] = ACTIONS(192),
  },
  [60] = {
    [sym_name] = STATE(84),
    [sym_ref_value] = STATE(85),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [61] = {
    [sym_name] = STATE(86),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [62] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(194),
    [anon_sym_RBRACK] = ACTIONS(197),
    [anon_sym_COMMA] = ACTIONS(132),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(199),
    [sym__open_end_markup] = ACTIONS(201),
    [sym_begin_text_variation] = ACTIONS(199),
    [sym__regular_text] = ACTIONS(201),
    [sym_escaped_char] = ACTIONS(199),
  },
  [64] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(134),
  },
  [65] = {
    [sym__close_end_markup] = STATE(88),
    [aux_sym_start_tag_repeat1] = STATE(41),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [anon_sym_RBRACK] = ACTIONS(203),
  },
  [66] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(152),
  },
  [67] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(168),
  },
  [68] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(172),
  },
  [69] = {
    [sym__close_end_markup] = STATE(90),
    [aux_sym_start_tag_repeat1] = STATE(57),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(43),
    [sym__close_start_markup] = ACTIONS(205),
    [anon_sym_RBRACK] = ACTIONS(207),
  },
  [70] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(91),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(209),
    [sym__close_start_markup] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(166),
  },
  [71] = {
    [sym_name] = STATE(93),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PLUS] = ACTIONS(214),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [72] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(94),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(209),
    [sym__close_start_markup] = ACTIONS(212),
    [anon_sym_RBRACK] = ACTIONS(212),
    [anon_sym_COMMA] = ACTIONS(166),
  },
  [73] = {
    [ts_builtin_sym_end] = ACTIONS(216),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(216),
    [sym__open_end_markup] = ACTIONS(218),
    [sym_begin_text_variation] = ACTIONS(216),
    [sym__regular_text] = ACTIONS(218),
    [sym_escaped_char] = ACTIONS(216),
  },
  [74] = {
    [ts_builtin_sym_end] = ACTIONS(220),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(220),
    [sym__open_end_markup] = ACTIONS(222),
    [sym_begin_text_variation] = ACTIONS(220),
    [sym__regular_text] = ACTIONS(222),
    [sym_escaped_char] = ACTIONS(220),
  },
  [75] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(224),
    [sym__close_start_markup] = ACTIONS(224),
    [anon_sym_RBRACK] = ACTIONS(224),
  },
  [76] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(226),
    [sym__close_start_markup] = ACTIONS(226),
    [anon_sym_RBRACK] = ACTIONS(226),
  },
  [77] = {
    [sym__annotation_value] = STATE(101),
    [sym_string_value] = STATE(101),
    [sym_boolean_value] = STATE(101),
    [sym_richtext_value] = STATE(101),
    [sym_list_value] = STATE(101),
    [sym_object_value] = STATE(101),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(234),
    [sym_number_value] = ACTIONS(236),
    [anon_sym_LBRACK_GT] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(240),
  },
  [78] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(242),
  },
  [79] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH] = ACTIONS(244),
  },
  [80] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(246),
    [sym__close_start_markup] = ACTIONS(246),
    [anon_sym_RBRACK] = ACTIONS(246),
  },
  [81] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH] = ACTIONS(248),
  },
  [82] = {
    [sym_annotation] = STATE(108),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(108),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [sym_id_annotation] = ACTIONS(250),
  },
  [83] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(252),
    [sym__close_start_markup] = ACTIONS(252),
    [anon_sym_RBRACK] = ACTIONS(252),
  },
  [84] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(254),
    [sym__close_start_markup] = ACTIONS(254),
    [anon_sym_RBRACK] = ACTIONS(254),
  },
  [85] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(256),
    [sym__close_start_markup] = ACTIONS(256),
    [anon_sym_RBRACK] = ACTIONS(256),
  },
  [86] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(258),
    [anon_sym_RBRACK] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(258),
  },
  [87] = {
    [aux_sym_end_layer_suffix_repeat1] = STATE(87),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(260),
    [anon_sym_RBRACK] = ACTIONS(258),
    [anon_sym_COMMA] = ACTIONS(263),
  },
  [88] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(199),
  },
  [89] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(216),
  },
  [90] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_PIPE] = ACTIONS(220),
  },
  [91] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(94),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(266),
    [sym__close_start_markup] = ACTIONS(269),
    [anon_sym_RBRACK] = ACTIONS(269),
    [anon_sym_COMMA] = ACTIONS(166),
  },
  [92] = {
    [sym_name] = STATE(109),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(21),
  },
  [93] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(271),
    [sym__close_start_markup] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(271),
  },
  [94] = {
    [aux_sym_start_layer_suffix_repeat1] = STATE(94),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(273),
    [sym__close_start_markup] = ACTIONS(271),
    [anon_sym_RBRACK] = ACTIONS(271),
    [anon_sym_COMMA] = ACTIONS(276),
  },
  [95] = {
    [sym__annotation_value] = STATE(110),
    [sym_string_value] = STATE(110),
    [sym_boolean_value] = STATE(110),
    [sym_richtext_value] = STATE(110),
    [sym_list_value] = STATE(110),
    [sym_object_value] = STATE(110),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(234),
    [sym_number_value] = ACTIONS(279),
    [anon_sym_LBRACK_GT] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(240),
  },
  [96] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_DQUOTE_RBRACK_STAR_SLASH] = ACTIONS(281),
  },
  [97] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_SQUOTE_RBRACK_STAR_SLASH] = ACTIONS(283),
  },
  [98] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(246),
    [anon_sym_COMMA] = ACTIONS(246),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(246),
    [sym_id_annotation] = ACTIONS(246),
    [anon_sym_RBRACE] = ACTIONS(246),
  },
  [99] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(7),
    [aux_sym_SLASH_LBRACK_CARET_LT_RBRACK_STAR_SLASH] = ACTIONS(285),
  },
  [100] = {
    [sym_annotation] = STATE(114),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(114),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [sym_id_annotation] = ACTIONS(250),
  },
  [101] = {
    [aux_sym_list_value_repeat1] = STATE(117),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(287),
    [anon_sym_COMMA] = ACTIONS(289),
  },
  [102] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(291),
  },
  [103] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(291),
  },
  [104] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_LT_RBRACK] = ACTIONS(293),
  },
  [105] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(295),
  },
  [106] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(121),
    [sym_id_annotation] = ACTIONS(121),
    [anon_sym_RBRACE] = ACTIONS(121),
  },
  [107] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_EQ] = ACTIONS(297),
    [anon_sym_DASH_GT] = ACTIONS(299),
  },
  [108] = {
    [sym_annotation] = STATE(124),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [sym_id_annotation] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(301),
  },
  [109] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(303),
    [sym__close_start_markup] = ACTIONS(303),
    [anon_sym_RBRACK] = ACTIONS(303),
    [anon_sym_COMMA] = ACTIONS(303),
  },
  [110] = {
    [aux_sym_list_value_repeat1] = STATE(126),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(289),
  },
  [111] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(307),
  },
  [112] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_SQUOTE] = ACTIONS(307),
  },
  [113] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_LT_RBRACK] = ACTIONS(309),
  },
  [114] = {
    [sym_annotation] = STATE(124),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(77),
    [sym_id_annotation] = ACTIONS(250),
    [anon_sym_RBRACE] = ACTIONS(311),
  },
  [115] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(313),
    [sym__close_start_markup] = ACTIONS(313),
    [anon_sym_RBRACK] = ACTIONS(313),
  },
  [116] = {
    [sym__annotation_value] = STATE(130),
    [sym_string_value] = STATE(130),
    [sym_boolean_value] = STATE(130),
    [sym_richtext_value] = STATE(130),
    [sym_list_value] = STATE(130),
    [sym_object_value] = STATE(130),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(234),
    [sym_number_value] = ACTIONS(315),
    [anon_sym_LBRACK_GT] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(240),
  },
  [117] = {
    [aux_sym_list_value_repeat1] = STATE(132),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(317),
    [anon_sym_COMMA] = ACTIONS(289),
  },
  [118] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(319),
    [sym__close_start_markup] = ACTIONS(319),
    [anon_sym_RBRACK] = ACTIONS(319),
  },
  [119] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(321),
    [sym__close_start_markup] = ACTIONS(321),
    [anon_sym_RBRACK] = ACTIONS(321),
  },
  [120] = {
    [sym_name] = STATE(134),
    [sym_id_value] = STATE(135),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(323),
  },
  [121] = {
    [sym__annotation_value] = STATE(136),
    [sym_string_value] = STATE(136),
    [sym_boolean_value] = STATE(136),
    [sym_richtext_value] = STATE(136),
    [sym_list_value] = STATE(136),
    [sym_object_value] = STATE(136),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(228),
    [anon_sym_DQUOTE] = ACTIONS(230),
    [anon_sym_SQUOTE] = ACTIONS(232),
    [aux_sym_SLASH_LBRACKTt_RBRACK_LBRACKRr_RBRACK_LBRACKUu_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(234),
    [aux_sym_SLASH_LBRACKFf_RBRACK_LBRACKAa_RBRACK_LBRACKLl_RBRACK_LBRACKSs_RBRACK_LBRACKEe_RBRACK_SLASH] = ACTIONS(234),
    [sym_number_value] = ACTIONS(325),
    [anon_sym_LBRACK_GT] = ACTIONS(238),
    [anon_sym_LBRACE] = ACTIONS(240),
  },
  [122] = {
    [sym_name] = STATE(137),
    [sym_ref_value] = STATE(138),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(323),
  },
  [123] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(327),
    [sym__close_start_markup] = ACTIONS(327),
    [anon_sym_RBRACK] = ACTIONS(327),
  },
  [124] = {
    [sym_annotation] = STATE(124),
    [sym_basic_annotation] = STATE(106),
    [sym_ref_annotation] = STATE(106),
    [sym_identifying_annotation] = STATE(106),
    [sym_annotation_name] = STATE(107),
    [aux_sym_object_value_repeat1] = STATE(124),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(329),
    [sym_id_annotation] = ACTIONS(332),
    [anon_sym_RBRACE] = ACTIONS(335),
  },
  [125] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(313),
    [anon_sym_COMMA] = ACTIONS(313),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(313),
    [sym_id_annotation] = ACTIONS(313),
    [anon_sym_RBRACE] = ACTIONS(313),
  },
  [126] = {
    [aux_sym_list_value_repeat1] = STATE(132),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(337),
    [anon_sym_COMMA] = ACTIONS(289),
  },
  [127] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(319),
    [anon_sym_COMMA] = ACTIONS(319),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(319),
    [sym_id_annotation] = ACTIONS(319),
    [anon_sym_RBRACE] = ACTIONS(319),
  },
  [128] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(321),
    [anon_sym_COMMA] = ACTIONS(321),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(321),
    [sym_id_annotation] = ACTIONS(321),
    [anon_sym_RBRACE] = ACTIONS(321),
  },
  [129] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(327),
    [anon_sym_COMMA] = ACTIONS(327),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(327),
    [sym_id_annotation] = ACTIONS(327),
    [anon_sym_RBRACE] = ACTIONS(327),
  },
  [130] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(339),
  },
  [131] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(341),
    [sym__close_start_markup] = ACTIONS(341),
    [anon_sym_RBRACK] = ACTIONS(341),
  },
  [132] = {
    [aux_sym_list_value_repeat1] = STATE(132),
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(339),
    [anon_sym_COMMA] = ACTIONS(343),
  },
  [133] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(41),
    [sym_id_annotation] = ACTIONS(41),
    [anon_sym_RBRACE] = ACTIONS(41),
  },
  [134] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(224),
    [sym_id_annotation] = ACTIONS(224),
    [anon_sym_RBRACE] = ACTIONS(224),
  },
  [135] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(226),
    [sym_id_annotation] = ACTIONS(226),
    [anon_sym_RBRACE] = ACTIONS(226),
  },
  [136] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(252),
    [sym_id_annotation] = ACTIONS(252),
    [anon_sym_RBRACE] = ACTIONS(252),
  },
  [137] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(254),
    [sym_id_annotation] = ACTIONS(254),
    [anon_sym_RBRACE] = ACTIONS(254),
  },
  [138] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(256),
    [sym_id_annotation] = ACTIONS(256),
    [anon_sym_RBRACE] = ACTIONS(256),
  },
  [139] = {
    [aux_sym_SLASH_BSLASHs_PLUS_SLASH] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(341),
    [anon_sym_COMMA] = ACTIONS(341),
    [aux_sym_SLASH_LBRACKa_DASHzA_DASHZ0_DASH9_RBRACK_PLUS_SLASH] = ACTIONS(341),
    [sym_id_annotation] = ACTIONS(341),
    [anon_sym_RBRACE] = ACTIONS(341),
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
  [17] = {.count = 1, .reusable = true}, SHIFT(4),
  [19] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [21] = {.count = 1, .reusable = true}, SHIFT(8),
  [23] = {.count = 1, .reusable = true}, SHIFT(14),
  [25] = {.count = 1, .reusable = false}, SHIFT(10),
  [27] = {.count = 1, .reusable = true}, SHIFT(11),
  [29] = {.count = 1, .reusable = false}, SHIFT(12),
  [31] = {.count = 1, .reusable = true}, SHIFT(12),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_text, 1),
  [35] = {.count = 1, .reusable = false}, REDUCE(sym_text, 1),
  [37] = {.count = 1, .reusable = true}, ACCEPT_INPUT(),
  [39] = {.count = 1, .reusable = true}, REDUCE(sym_document, 1),
  [41] = {.count = 1, .reusable = true}, REDUCE(sym_name, 1),
  [43] = {.count = 2, .reusable = true}, SHIFT(18), SHIFT_EXTRA(),
  [46] = {.count = 1, .reusable = true}, SHIFT(20),
  [48] = {.count = 1, .reusable = true}, SHIFT(19),
  [50] = {.count = 1, .reusable = true}, REDUCE(sym_variant_text, 1),
  [52] = {.count = 1, .reusable = true}, SHIFT(26),
  [54] = {.count = 1, .reusable = true}, SHIFT(28),
  [56] = {.count = 1, .reusable = true}, SHIFT(30),
  [58] = {.count = 1, .reusable = true}, SHIFT(29),
  [60] = {.count = 1, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2),
  [62] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(6),
  [65] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(2),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(3),
  [71] = {.count = 2, .reusable = false}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [74] = {.count = 2, .reusable = true}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(4),
  [77] = {.count = 1, .reusable = true}, SHIFT(33),
  [79] = {.count = 1, .reusable = true}, SHIFT(34),
  [81] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 3),
  [83] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 3),
  [85] = {.count = 1, .reusable = true}, SHIFT(39),
  [87] = {.count = 1, .reusable = true}, SHIFT(42),
  [89] = {.count = 1, .reusable = true}, SHIFT(46),
  [91] = {.count = 1, .reusable = true}, SHIFT(47),
  [93] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation_separator, 1),
  [95] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation_separator, 1),
  [97] = {.count = 1, .reusable = false}, SHIFT(26),
  [99] = {.count = 1, .reusable = true}, SHIFT(50),
  [101] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 3),
  [103] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 3),
  [105] = {.count = 1, .reusable = true}, SHIFT(52),
  [107] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 3),
  [109] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 3),
  [111] = {.count = 1, .reusable = true}, SHIFT(54),
  [113] = {.count = 1, .reusable = true}, SHIFT(55),
  [115] = {.count = 1, .reusable = true}, REDUCE(sym_annotation_name, 1),
  [117] = {.count = 1, .reusable = true}, SHIFT(58),
  [119] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2),
  [121] = {.count = 1, .reusable = true}, REDUCE(sym_annotation, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(59),
  [125] = {.count = 1, .reusable = true}, SHIFT(60),
  [127] = {.count = 2, .reusable = true}, REDUCE(sym_end_layer_suffix, 2), SHIFT_EXTRA(),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 2),
  [132] = {.count = 1, .reusable = true}, SHIFT(61),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 4),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 4),
  [138] = {.count = 1, .reusable = true}, SHIFT(63),
  [140] = {.count = 3, .reusable = true}, REDUCE(aux_sym_start_tag_repeat1, 2), SHIFT_REPEAT(18), SHIFT_EXTRA(),
  [144] = {.count = 1, .reusable = true}, SHIFT(64),
  [146] = {.count = 1, .reusable = true}, SHIFT(66),
  [148] = {.count = 1, .reusable = true}, SHIFT(67),
  [150] = {.count = 1, .reusable = true}, SHIFT(68),
  [152] = {.count = 1, .reusable = true}, REDUCE(sym_text_variation, 4),
  [154] = {.count = 1, .reusable = false}, REDUCE(sym_text_variation, 4),
  [156] = {.count = 2, .reusable = false}, REDUCE(aux_sym_text_variation_repeat1, 2), SHIFT_REPEAT(26),
  [159] = {.count = 1, .reusable = true}, REDUCE(aux_sym_text_variation_repeat1, 2),
  [161] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 2), SHIFT_EXTRA(),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 2),
  [166] = {.count = 1, .reusable = true}, SHIFT(71),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 4),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 4),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 4),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 4),
  [176] = {.count = 1, .reusable = true}, SHIFT(73),
  [178] = {.count = 1, .reusable = true}, SHIFT(74),
  [180] = {.count = 1, .reusable = false}, SHIFT(77),
  [182] = {.count = 1, .reusable = true}, SHIFT(78),
  [184] = {.count = 1, .reusable = true}, SHIFT(79),
  [186] = {.count = 1, .reusable = true}, SHIFT(80),
  [188] = {.count = 1, .reusable = true}, SHIFT(83),
  [190] = {.count = 1, .reusable = true}, SHIFT(81),
  [192] = {.count = 1, .reusable = true}, SHIFT(82),
  [194] = {.count = 2, .reusable = true}, REDUCE(sym_end_layer_suffix, 3), SHIFT_EXTRA(),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_end_layer_suffix, 3),
  [199] = {.count = 1, .reusable = true}, REDUCE(sym_end_tag, 5),
  [201] = {.count = 1, .reusable = false}, REDUCE(sym_end_tag, 5),
  [203] = {.count = 1, .reusable = true}, SHIFT(88),
  [205] = {.count = 1, .reusable = true}, SHIFT(89),
  [207] = {.count = 1, .reusable = true}, SHIFT(90),
  [209] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 3), SHIFT_EXTRA(),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 3),
  [214] = {.count = 1, .reusable = true}, SHIFT(92),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_start_tag, 5),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_start_tag, 5),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_milestone_tag, 5),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_milestone_tag, 5),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_id_value, 1),
  [226] = {.count = 1, .reusable = true}, REDUCE(sym_identifying_annotation, 3),
  [228] = {.count = 1, .reusable = false}, SHIFT(95),
  [230] = {.count = 1, .reusable = true}, SHIFT(96),
  [232] = {.count = 1, .reusable = true}, SHIFT(97),
  [234] = {.count = 1, .reusable = true}, SHIFT(98),
  [236] = {.count = 1, .reusable = true}, SHIFT(101),
  [238] = {.count = 1, .reusable = true}, SHIFT(99),
  [240] = {.count = 1, .reusable = true}, SHIFT(100),
  [242] = {.count = 1, .reusable = false}, SHIFT(102),
  [244] = {.count = 1, .reusable = false}, SHIFT(103),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_boolean_value, 1),
  [248] = {.count = 1, .reusable = false}, SHIFT(104),
  [250] = {.count = 1, .reusable = true}, SHIFT(105),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_basic_annotation, 3),
  [254] = {.count = 1, .reusable = true}, REDUCE(sym_ref_value, 1),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_ref_annotation, 3),
  [258] = {.count = 1, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2), SHIFT_EXTRA(),
  [263] = {.count = 2, .reusable = true}, REDUCE(aux_sym_end_layer_suffix_repeat1, 2), SHIFT_REPEAT(61),
  [266] = {.count = 2, .reusable = true}, REDUCE(sym_start_layer_suffix, 4), SHIFT_EXTRA(),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_start_layer_suffix, 4),
  [271] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2),
  [273] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2), SHIFT_EXTRA(),
  [276] = {.count = 2, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 2), SHIFT_REPEAT(71),
  [279] = {.count = 1, .reusable = true}, SHIFT(110),
  [281] = {.count = 1, .reusable = false}, SHIFT(111),
  [283] = {.count = 1, .reusable = false}, SHIFT(112),
  [285] = {.count = 1, .reusable = false}, SHIFT(113),
  [287] = {.count = 1, .reusable = true}, SHIFT(115),
  [289] = {.count = 1, .reusable = true}, SHIFT(116),
  [291] = {.count = 1, .reusable = true}, SHIFT(118),
  [293] = {.count = 1, .reusable = true}, SHIFT(119),
  [295] = {.count = 1, .reusable = true}, SHIFT(120),
  [297] = {.count = 1, .reusable = true}, SHIFT(121),
  [299] = {.count = 1, .reusable = true}, SHIFT(122),
  [301] = {.count = 1, .reusable = true}, SHIFT(123),
  [303] = {.count = 1, .reusable = true}, REDUCE(aux_sym_start_layer_suffix_repeat1, 3),
  [305] = {.count = 1, .reusable = true}, SHIFT(125),
  [307] = {.count = 1, .reusable = true}, SHIFT(127),
  [309] = {.count = 1, .reusable = true}, SHIFT(128),
  [311] = {.count = 1, .reusable = true}, SHIFT(129),
  [313] = {.count = 1, .reusable = true}, REDUCE(sym_list_value, 3),
  [315] = {.count = 1, .reusable = true}, SHIFT(130),
  [317] = {.count = 1, .reusable = true}, SHIFT(131),
  [319] = {.count = 1, .reusable = true}, REDUCE(sym_string_value, 3),
  [321] = {.count = 1, .reusable = true}, REDUCE(sym_richtext_value, 3),
  [323] = {.count = 1, .reusable = true}, SHIFT(133),
  [325] = {.count = 1, .reusable = true}, SHIFT(136),
  [327] = {.count = 1, .reusable = true}, REDUCE(sym_object_value, 3),
  [329] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2), SHIFT_REPEAT(33),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2), SHIFT_REPEAT(105),
  [335] = {.count = 1, .reusable = true}, REDUCE(aux_sym_object_value_repeat1, 2),
  [337] = {.count = 1, .reusable = true}, SHIFT(139),
  [339] = {.count = 1, .reusable = true}, REDUCE(aux_sym_list_value_repeat1, 2),
  [341] = {.count = 1, .reusable = true}, REDUCE(sym_list_value, 4),
  [343] = {.count = 2, .reusable = true}, REDUCE(aux_sym_list_value_repeat1, 2), SHIFT_REPEAT(116),
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
