#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 10
#define STATE_COUNT 153
#define SYMBOL_COUNT 94
#define ALIAS_COUNT 5
#define TOKEN_COUNT 54
#define EXTERNAL_TOKEN_COUNT 3
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  aux_sym_DOLLARrepeatable_symbol_token1 = 1,
  aux_sym_optional_token1 = 2,
  aux_sym_zero_or_more_token1 = 3,
  aux_sym_one_or_more_token1 = 4,
  aux_sym_count_quantifier_token1 = 5,
  aux_sym_count_quantifier_token2 = 6,
  aux_sym_count_quantifier_token3 = 7,
  aux_sym_DOLLARinvalid_extra_quantifier_token1 = 8,
  aux_sym_DOLLARinvalid_extra_quantifier_token2 = 9,
  aux_sym_numeric_backreference_token1 = 10,
  aux_sym_named_backreference_token1 = 11,
  aux_sym_named_backreference_token2 = 12,
  aux_sym_DOLLARnamed_backreference_prefix_token1 = 13,
  aux_sym_lookahead_assertion_token1 = 14,
  aux_sym_negative_lookahead_assertion_token1 = 15,
  aux_sym_lookbehind_assertion_token1 = 16,
  aux_sym_negative_lookbehind_assertion_token1 = 17,
  aux_sym_non_capturing_group_token1 = 18,
  aux_sym_named_capturing_group_identifier_token1 = 19,
  aux_sym_DOLLARinvalid_named_capturing_group_identifier_token1 = 20,
  aux_sym_group_name_token1 = 21,
  sym_group_begin = 22,
  sym_group_end = 23,
  sym__invalid_group_delimiter = 24,
  aux_sym_boundary_assertion_token1 = 25,
  aux_sym_non_boundary_assertion_token1 = 26,
  aux_sym_start_assertion_token1 = 27,
  sym_end_assertion = 28,
  aux_sym_character_set_token1 = 29,
  aux_sym_character_set_token2 = 30,
  sym__invalid_character_set_delimiter = 31,
  aux_sym_character_class_escape_token1 = 32,
  aux_sym_DOLLARp_special_escape_token1 = 33,
  aux_sym_DOLLARs_special_escape_token1 = 34,
  aux_sym_control_letter_escape_token1 = 35,
  aux_sym_control_letter_escape_token2 = 36,
  aux_sym_octal_escape_token1 = 37,
  aux_sym_octal_escape_token2 = 38,
  aux_sym_hexadecimal_escape_token1 = 39,
  aux_sym_hexadecimal_escape_token2 = 40,
  aux_sym_unicode_escape_token1 = 41,
  aux_sym_unicode_escape_token2 = 42,
  aux_sym_DOLLARp_identity_escape_token1 = 43,
  aux_sym_DOLLARs_identity_escape_token1 = 44,
  sym__backslash = 45,
  sym__dash = 46,
  sym_disjunction_delimiter = 47,
  sym_any_character = 48,
  sym__p_non_syntax_character = 49,
  sym__s_non_syntax_character = 50,
  sym_null_character = 51,
  sym__has_backreference_name = 52,
  sym__begin_count_quantifier = 53,
  sym_regex = 54,
  sym_optional = 55,
  sym_zero_or_more = 56,
  sym_one_or_more = 57,
  sym_count_quantifier = 58,
  sym_numeric_backreference = 59,
  sym_named_backreference = 60,
  sym_DOLLARnonconforming_named_backreference = 61,
  sym_lookahead_assertion = 62,
  sym_negative_lookahead_assertion = 63,
  sym_lookbehind_assertion = 64,
  sym_negative_lookbehind_assertion = 65,
  sym_non_capturing_group = 66,
  sym_named_capturing_group = 67,
  sym_named_capturing_group_identifier = 68,
  sym_DOLLARinvalid_named_capturing_group_identifier = 69,
  sym_group_name = 70,
  sym_anonymous_capturing_group = 71,
  sym_boundary_assertion = 72,
  sym_non_boundary_assertion = 73,
  sym_start_assertion = 74,
  sym_character_set = 75,
  sym_character_range = 76,
  sym_character_class_escape = 77,
  sym_DOLLARp_special_escape = 78,
  sym_DOLLARs_special_escape = 79,
  sym_control_letter_escape = 80,
  sym_DOLLARnonconforming_control_letter_escape = 81,
  sym_octal_escape = 82,
  sym_hexadecimal_escape = 83,
  sym_DOLLARnonconforming_hexadecimal_escape = 84,
  sym_unicode_escape = 85,
  sym_DOLLARnonconforming_unicode_escape = 86,
  sym_DOLLARp_identity_escape = 87,
  sym_DOLLARs_identity_escape = 88,
  aux_sym_DOLLARdisjunction_repeat1 = 89,
  aux_sym_DOLLARpattern_repeat1 = 90,
  aux_sym_DOLLARquantifier_repeat1 = 91,
  aux_sym_group_name_repeat1 = 92,
  aux_sym_character_set_repeat1 = 93,
  alias_sym_escape_operator = 94,
  alias_sym_lazy = 95,
  alias_sym_non_syntax = 96,
  alias_sym_range_delimiter = 97,
  alias_sym_set_negation = 98,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_DOLLARrepeatable_symbol_token1] = "non_syntax",
  [aux_sym_optional_token1] = "optional_token1",
  [aux_sym_zero_or_more_token1] = "zero_or_more_token1",
  [aux_sym_one_or_more_token1] = "one_or_more_token1",
  [aux_sym_count_quantifier_token1] = "count_quantifier_value",
  [aux_sym_count_quantifier_token2] = "count_quantifier_delimiter",
  [aux_sym_count_quantifier_token3] = "count_quantifier_token3",
  [aux_sym_DOLLARinvalid_extra_quantifier_token1] = "$invalid_extra_quantifier_token1",
  [aux_sym_DOLLARinvalid_extra_quantifier_token2] = "$invalid_extra_quantifier_token2",
  [aux_sym_numeric_backreference_token1] = "numeric_backreference_token1",
  [aux_sym_named_backreference_token1] = "named_backreference_token1",
  [aux_sym_named_backreference_token2] = "named_backreference_token2",
  [aux_sym_DOLLARnamed_backreference_prefix_token1] = "$named_backreference_prefix_token1",
  [aux_sym_lookahead_assertion_token1] = "lookahead_identifier",
  [aux_sym_negative_lookahead_assertion_token1] = "negative_lookahead_identifier",
  [aux_sym_lookbehind_assertion_token1] = "lookbehind_identifier",
  [aux_sym_negative_lookbehind_assertion_token1] = "negative_lookbehind_identifier",
  [aux_sym_non_capturing_group_token1] = "non_capturing_group_identifier",
  [aux_sym_named_capturing_group_identifier_token1] = "named_capturing_group_identifier_token1",
  [aux_sym_DOLLARinvalid_named_capturing_group_identifier_token1] = "$invalid_named_capturing_group_identifier_token1",
  [aux_sym_group_name_token1] = "group_name_token1",
  [sym_group_begin] = "group_begin",
  [sym_group_end] = "group_end",
  [sym__invalid_group_delimiter] = "_invalid_group_delimiter",
  [aux_sym_boundary_assertion_token1] = "boundary_assertion_token1",
  [aux_sym_non_boundary_assertion_token1] = "non_boundary_assertion_token1",
  [aux_sym_start_assertion_token1] = "start_assertion_token1",
  [sym_end_assertion] = "end_assertion",
  [aux_sym_character_set_token1] = "set_begin",
  [aux_sym_character_set_token2] = "set_end",
  [sym__invalid_character_set_delimiter] = "invalid",
  [aux_sym_character_class_escape_token1] = "character_class_escape_token1",
  [aux_sym_DOLLARp_special_escape_token1] = "$p_special_escape_token1",
  [aux_sym_DOLLARs_special_escape_token1] = "$s_special_escape_token1",
  [aux_sym_control_letter_escape_token1] = "control_letter_escape_token1",
  [aux_sym_control_letter_escape_token2] = "control_letter_code",
  [aux_sym_octal_escape_token1] = "octal_escape_token1",
  [aux_sym_octal_escape_token2] = "octal_code",
  [aux_sym_hexadecimal_escape_token1] = "hexadecimal_escape_token1",
  [aux_sym_hexadecimal_escape_token2] = "hexadecimal_code",
  [aux_sym_unicode_escape_token1] = "unicode_escape_token1",
  [aux_sym_unicode_escape_token2] = "unicode_code",
  [aux_sym_DOLLARp_identity_escape_token1] = "$p_identity_escape_token1",
  [aux_sym_DOLLARs_identity_escape_token1] = "$s_identity_escape_token1",
  [sym__backslash] = "_backslash",
  [sym__dash] = "_dash",
  [sym_disjunction_delimiter] = "disjunction_delimiter",
  [sym_any_character] = "any_character",
  [sym__p_non_syntax_character] = "non_syntax",
  [sym__s_non_syntax_character] = "non_syntax",
  [sym_null_character] = "null_character",
  [sym__has_backreference_name] = "_has_backreference_name",
  [sym__begin_count_quantifier] = "_begin_count_quantifier",
  [sym_regex] = "regex",
  [sym_optional] = "optional",
  [sym_zero_or_more] = "zero_or_more",
  [sym_one_or_more] = "one_or_more",
  [sym_count_quantifier] = "count_quantifier",
  [sym_numeric_backreference] = "numeric_backreference",
  [sym_named_backreference] = "named_backreference",
  [sym_DOLLARnonconforming_named_backreference] = "identity_escape",
  [sym_lookahead_assertion] = "lookahead_assertion",
  [sym_negative_lookahead_assertion] = "negative_lookahead_assertion",
  [sym_lookbehind_assertion] = "lookbehind_assertion",
  [sym_negative_lookbehind_assertion] = "negative_lookbehind_assertion",
  [sym_non_capturing_group] = "non_capturing_group",
  [sym_named_capturing_group] = "named_capturing_group",
  [sym_named_capturing_group_identifier] = "named_capturing_group_identifier",
  [sym_DOLLARinvalid_named_capturing_group_identifier] = "invalid",
  [sym_group_name] = "group_name",
  [sym_anonymous_capturing_group] = "anonymous_capturing_group",
  [sym_boundary_assertion] = "boundary_assertion",
  [sym_non_boundary_assertion] = "non_boundary_assertion",
  [sym_start_assertion] = "start_assertion",
  [sym_character_set] = "character_class",
  [sym_character_range] = "character_range",
  [sym_character_class_escape] = "character_class_escape",
  [sym_DOLLARp_special_escape] = "special_escape",
  [sym_DOLLARs_special_escape] = "special_escape",
  [sym_control_letter_escape] = "control_letter_escape",
  [sym_DOLLARnonconforming_control_letter_escape] = "identity_escape",
  [sym_octal_escape] = "octal_escape",
  [sym_hexadecimal_escape] = "hexadecimal_escape",
  [sym_DOLLARnonconforming_hexadecimal_escape] = "identity_escape",
  [sym_unicode_escape] = "unicode_escape",
  [sym_DOLLARnonconforming_unicode_escape] = "identity_escape",
  [sym_DOLLARp_identity_escape] = "identity_escape",
  [sym_DOLLARs_identity_escape] = "identity_escape",
  [aux_sym_DOLLARdisjunction_repeat1] = "$disjunction_repeat1",
  [aux_sym_DOLLARpattern_repeat1] = "$pattern_repeat1",
  [aux_sym_DOLLARquantifier_repeat1] = "$quantifier_repeat1",
  [aux_sym_group_name_repeat1] = "group_name_repeat1",
  [aux_sym_character_set_repeat1] = "character_set_repeat1",
  [alias_sym_escape_operator] = "escape_operator",
  [alias_sym_lazy] = "lazy",
  [alias_sym_non_syntax] = "non_syntax",
  [alias_sym_range_delimiter] = "range_delimiter",
  [alias_sym_set_negation] = "set_negation",
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_DOLLARrepeatable_symbol_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_optional_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_zero_or_more_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_one_or_more_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_count_quantifier_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_count_quantifier_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_count_quantifier_token3] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARinvalid_extra_quantifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARinvalid_extra_quantifier_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_numeric_backreference_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_backreference_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_named_backreference_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARnamed_backreference_prefix_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lookahead_assertion_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_negative_lookahead_assertion_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_lookbehind_assertion_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_negative_lookbehind_assertion_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_non_capturing_group_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_named_capturing_group_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARinvalid_named_capturing_group_identifier_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_group_begin] = {
    .visible = true,
    .named = true,
  },
  [sym_group_end] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_group_delimiter] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_boundary_assertion_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_non_boundary_assertion_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_start_assertion_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_end_assertion] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_character_set_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_character_set_token2] = {
    .visible = true,
    .named = true,
  },
  [sym__invalid_character_set_delimiter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_character_class_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARp_special_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARs_special_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_letter_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_control_letter_escape_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_octal_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_octal_escape_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_hexadecimal_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_hexadecimal_escape_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_unicode_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unicode_escape_token2] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_DOLLARp_identity_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARs_identity_escape_token1] = {
    .visible = false,
    .named = false,
  },
  [sym__backslash] = {
    .visible = false,
    .named = true,
  },
  [sym__dash] = {
    .visible = false,
    .named = true,
  },
  [sym_disjunction_delimiter] = {
    .visible = true,
    .named = true,
  },
  [sym_any_character] = {
    .visible = true,
    .named = true,
  },
  [sym__p_non_syntax_character] = {
    .visible = true,
    .named = true,
  },
  [sym__s_non_syntax_character] = {
    .visible = true,
    .named = true,
  },
  [sym_null_character] = {
    .visible = true,
    .named = true,
  },
  [sym__has_backreference_name] = {
    .visible = false,
    .named = true,
  },
  [sym__begin_count_quantifier] = {
    .visible = false,
    .named = true,
  },
  [sym_regex] = {
    .visible = true,
    .named = true,
  },
  [sym_optional] = {
    .visible = true,
    .named = true,
  },
  [sym_zero_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_one_or_more] = {
    .visible = true,
    .named = true,
  },
  [sym_count_quantifier] = {
    .visible = true,
    .named = true,
  },
  [sym_numeric_backreference] = {
    .visible = true,
    .named = true,
  },
  [sym_named_backreference] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARnonconforming_named_backreference] = {
    .visible = true,
    .named = true,
  },
  [sym_lookahead_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_lookahead_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_lookbehind_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_negative_lookbehind_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_non_capturing_group] = {
    .visible = true,
    .named = true,
  },
  [sym_named_capturing_group] = {
    .visible = true,
    .named = true,
  },
  [sym_named_capturing_group_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARinvalid_named_capturing_group_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_group_name] = {
    .visible = true,
    .named = true,
  },
  [sym_anonymous_capturing_group] = {
    .visible = true,
    .named = true,
  },
  [sym_boundary_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_non_boundary_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_start_assertion] = {
    .visible = true,
    .named = true,
  },
  [sym_character_set] = {
    .visible = true,
    .named = true,
  },
  [sym_character_range] = {
    .visible = true,
    .named = true,
  },
  [sym_character_class_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARp_special_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARs_special_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_control_letter_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARnonconforming_control_letter_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_octal_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_hexadecimal_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARnonconforming_hexadecimal_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_unicode_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARnonconforming_unicode_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARp_identity_escape] = {
    .visible = true,
    .named = true,
  },
  [sym_DOLLARs_identity_escape] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_DOLLARdisjunction_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARpattern_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_DOLLARquantifier_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_group_name_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_character_set_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_escape_operator] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_lazy] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_non_syntax] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_range_delimiter] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_set_negation] = {
    .visible = true,
    .named = true,
  },
};

static TSSymbol ts_alias_sequences[12][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_non_syntax,
  },
  [2] = {
    [0] = alias_sym_escape_operator,
  },
  [3] = {
    [1] = alias_sym_lazy,
  },
  [4] = {
    [1] = alias_sym_set_negation,
  },
  [5] = {
    [1] = alias_sym_range_delimiter,
  },
  [6] = {
    [1] = alias_sym_range_delimiter,
    [2] = alias_sym_non_syntax,
  },
  [7] = {
    [0] = alias_sym_non_syntax,
    [1] = alias_sym_range_delimiter,
  },
  [8] = {
    [0] = alias_sym_non_syntax,
    [1] = alias_sym_range_delimiter,
    [2] = alias_sym_non_syntax,
  },
  [9] = {
    [3] = alias_sym_lazy,
  },
  [10] = {
    [4] = alias_sym_lazy,
  },
  [11] = {
    [5] = alias_sym_lazy,
  },
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lookahead == 0;
  switch (state) {
    case 0:
      if (eof) ADVANCE(27);
      if (lookahead == '\n') ADVANCE(70);
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '-') ADVANCE(70);
      if (lookahead == '.') ADVANCE(70);
      if (lookahead == '/') ADVANCE(70);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == 'B') ADVANCE(48);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(70);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '_') ADVANCE(48);
      if (lookahead == 'b') ADVANCE(48);
      if (lookahead == 'c') ADVANCE(48);
      if (lookahead == 'k') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(48);
      if (lookahead == 'x') ADVANCE(48);
      if (lookahead == '{') ADVANCE(28);
      if (lookahead == '|') ADVANCE(70);
      if (lookahead == '}') ADVANCE(28);
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(48);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          ('s' <= lookahead && lookahead <= 'w')) ADVANCE(48);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(42);
      if (lookahead == ':') ADVANCE(45);
      if (lookahead == '<') ADVANCE(46);
      if (lookahead == '=') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '$') ADVANCE(48);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= '_') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(76);
      END_STATE();
    case 4:
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '>') ADVANCE(39);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/' &&
          lookahead != '?') ADVANCE(76);
      END_STATE();
    case 5:
      if (lookahead == ',') ADVANCE(33);
      if (lookahead == '<') ADVANCE(38);
      if (lookahead == '}') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == ',') ADVANCE(15);
      if (lookahead == '}') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 8:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(56);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(73);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(79);
      END_STATE();
    case 12:
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'B') ADVANCE(52);
      if (lookahead == 'b') ADVANCE(51);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'k') ADVANCE(40);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(66);
      if (lookahead == 'f' ||
          lookahead == 'n' ||
          lookahead == 'r' ||
          ('t' <= lookahead && lookahead <= 'v')) ADVANCE(59);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          ('s' <= lookahead && lookahead <= 'w')) ADVANCE(58);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(37);
      if (lookahead != 0) ADVANCE(70);
      END_STATE();
    case 13:
      if (lookahead == '0') ADVANCE(63);
      if (lookahead == 'c') ADVANCE(61);
      if (lookahead == 'u') ADVANCE(68);
      if (lookahead == 'x') ADVANCE(66);
      if (lookahead == 'D' ||
          lookahead == 'S' ||
          lookahead == 'W' ||
          lookahead == 'd' ||
          lookahead == 's' ||
          lookahead == 'w') ADVANCE(58);
      if (lookahead == 'b' ||
          lookahead == 'f' ||
          lookahead == 'n' ||
          ('r' <= lookahead && lookahead <= 'v')) ADVANCE(60);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 14:
      if (lookahead == '0') ADVANCE(16);
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(65);
      END_STATE();
    case 15:
      if (lookahead == '}') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 16:
      if (('1' <= lookahead && lookahead <= '7')) ADVANCE(64);
      END_STATE();
    case 17:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 18:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 20:
      if (eof) ADVANCE(27);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 21:
      if (eof) ADVANCE(27);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 22:
      if (eof) ADVANCE(27);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 23:
      if (eof) ADVANCE(27);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '*') ADVANCE(30);
      if (lookahead == '+') ADVANCE(31);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 24:
      if (eof) ADVANCE(27);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '?') ADVANCE(29);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (lookahead == '*' ||
          lookahead == '+') ADVANCE(35);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 25:
      if (eof) ADVANCE(27);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '?') ADVANCE(1);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '*' &&
          lookahead != '+' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 26:
      if (eof) ADVANCE(27);
      if (lookahead == '$') ADVANCE(54);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '[') ADVANCE(55);
      if (lookahead == '\\') ADVANCE(72);
      if (lookahead == ']') ADVANCE(57);
      if (lookahead == '^') ADVANCE(53);
      if (lookahead == '|') ADVANCE(74);
      if (('{' <= lookahead && lookahead <= '}')) ADVANCE(28);
      if (lookahead == '*' ||
          lookahead == '+' ||
          lookahead == '?') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '/') ADVANCE(76);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_DOLLARrepeatable_symbol_token1);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_optional_token1);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_zero_or_more_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_one_or_more_token1);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_count_quantifier_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_count_quantifier_token2);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_count_quantifier_token3);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_DOLLARinvalid_extra_quantifier_token1);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_DOLLARinvalid_extra_quantifier_token2);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_numeric_backreference_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_named_backreference_token1);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_named_backreference_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_DOLLARnamed_backreference_prefix_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_lookahead_assertion_token1);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_negative_lookahead_assertion_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_lookbehind_assertion_token1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_negative_lookbehind_assertion_token1);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_non_capturing_group_token1);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_named_capturing_group_identifier_token1);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_DOLLARinvalid_named_capturing_group_identifier_token1);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_group_name_token1);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_group_begin);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_group_end);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_boundary_assertion_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_non_boundary_assertion_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_start_assertion_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_end_assertion);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_character_set_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_character_set_token2);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__invalid_character_set_delimiter);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_character_class_escape_token1);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_DOLLARp_special_escape_token1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_DOLLARs_special_escape_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_control_letter_escape_token1);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_control_letter_escape_token2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_octal_escape_token1);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_octal_escape_token2);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_octal_escape_token2);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_hexadecimal_escape_token1);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_hexadecimal_escape_token2);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_unicode_escape_token1);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_unicode_escape_token2);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_DOLLARp_identity_escape_token1);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_DOLLARs_identity_escape_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym__backslash);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym__dash);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_disjunction_delimiter);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_any_character);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym__p_non_syntax_character);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym__p_non_syntax_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym__p_non_syntax_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym__s_non_syntax_character);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym__s_non_syntax_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym__s_non_syntax_character);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 25, .external_lex_state = 2},
  [2] = {.lex_state = 25, .external_lex_state = 2},
  [3] = {.lex_state = 25, .external_lex_state = 2},
  [4] = {.lex_state = 25, .external_lex_state = 2},
  [5] = {.lex_state = 25, .external_lex_state = 2},
  [6] = {.lex_state = 25, .external_lex_state = 2},
  [7] = {.lex_state = 25, .external_lex_state = 2},
  [8] = {.lex_state = 25, .external_lex_state = 2},
  [9] = {.lex_state = 25, .external_lex_state = 2},
  [10] = {.lex_state = 25, .external_lex_state = 2},
  [11] = {.lex_state = 25, .external_lex_state = 2},
  [12] = {.lex_state = 25, .external_lex_state = 2},
  [13] = {.lex_state = 25, .external_lex_state = 2},
  [14] = {.lex_state = 25, .external_lex_state = 2},
  [15] = {.lex_state = 25, .external_lex_state = 2},
  [16] = {.lex_state = 25, .external_lex_state = 2},
  [17] = {.lex_state = 25, .external_lex_state = 2},
  [18] = {.lex_state = 25, .external_lex_state = 2},
  [19] = {.lex_state = 25, .external_lex_state = 2},
  [20] = {.lex_state = 23, .external_lex_state = 3},
  [21] = {.lex_state = 23, .external_lex_state = 3},
  [22] = {.lex_state = 7, .external_lex_state = 2},
  [23] = {.lex_state = 20, .external_lex_state = 3},
  [24] = {.lex_state = 21, .external_lex_state = 3},
  [25] = {.lex_state = 22, .external_lex_state = 3},
  [26] = {.lex_state = 23, .external_lex_state = 1},
  [27] = {.lex_state = 23, .external_lex_state = 3},
  [28] = {.lex_state = 23, .external_lex_state = 3},
  [29] = {.lex_state = 23, .external_lex_state = 3},
  [30] = {.lex_state = 23, .external_lex_state = 3},
  [31] = {.lex_state = 11, .external_lex_state = 2},
  [32] = {.lex_state = 23, .external_lex_state = 3},
  [33] = {.lex_state = 23, .external_lex_state = 3},
  [34] = {.lex_state = 23, .external_lex_state = 3},
  [35] = {.lex_state = 11, .external_lex_state = 2},
  [36] = {.lex_state = 23, .external_lex_state = 3},
  [37] = {.lex_state = 23, .external_lex_state = 3},
  [38] = {.lex_state = 23, .external_lex_state = 3},
  [39] = {.lex_state = 23, .external_lex_state = 3},
  [40] = {.lex_state = 23, .external_lex_state = 3},
  [41] = {.lex_state = 23, .external_lex_state = 3},
  [42] = {.lex_state = 23, .external_lex_state = 3},
  [43] = {.lex_state = 23, .external_lex_state = 3},
  [44] = {.lex_state = 23, .external_lex_state = 3},
  [45] = {.lex_state = 3, .external_lex_state = 2},
  [46] = {.lex_state = 23, .external_lex_state = 3},
  [47] = {.lex_state = 23, .external_lex_state = 3},
  [48] = {.lex_state = 23, .external_lex_state = 3},
  [49] = {.lex_state = 23, .external_lex_state = 3},
  [50] = {.lex_state = 23, .external_lex_state = 3},
  [51] = {.lex_state = 23, .external_lex_state = 3},
  [52] = {.lex_state = 23, .external_lex_state = 3},
  [53] = {.lex_state = 23, .external_lex_state = 3},
  [54] = {.lex_state = 23, .external_lex_state = 3},
  [55] = {.lex_state = 23, .external_lex_state = 3},
  [56] = {.lex_state = 23, .external_lex_state = 3},
  [57] = {.lex_state = 11, .external_lex_state = 2},
  [58] = {.lex_state = 23, .external_lex_state = 3},
  [59] = {.lex_state = 23, .external_lex_state = 3},
  [60] = {.lex_state = 23, .external_lex_state = 3},
  [61] = {.lex_state = 23, .external_lex_state = 3},
  [62] = {.lex_state = 23, .external_lex_state = 3},
  [63] = {.lex_state = 23, .external_lex_state = 3},
  [64] = {.lex_state = 23, .external_lex_state = 3},
  [65] = {.lex_state = 11, .external_lex_state = 2},
  [66] = {.lex_state = 24, .external_lex_state = 3},
  [67] = {.lex_state = 24, .external_lex_state = 3},
  [68] = {.lex_state = 24, .external_lex_state = 3},
  [69] = {.lex_state = 26, .external_lex_state = 3},
  [70] = {.lex_state = 24, .external_lex_state = 3},
  [71] = {.lex_state = 2, .external_lex_state = 2},
  [72] = {.lex_state = 24, .external_lex_state = 3},
  [73] = {.lex_state = 26, .external_lex_state = 3},
  [74] = {.lex_state = 26, .external_lex_state = 3},
  [75] = {.lex_state = 24, .external_lex_state = 3},
  [76] = {.lex_state = 2, .external_lex_state = 2},
  [77] = {.lex_state = 26, .external_lex_state = 3},
  [78] = {.lex_state = 26, .external_lex_state = 3},
  [79] = {.lex_state = 26, .external_lex_state = 3},
  [80] = {.lex_state = 26, .external_lex_state = 3},
  [81] = {.lex_state = 26, .external_lex_state = 3},
  [82] = {.lex_state = 26, .external_lex_state = 3},
  [83] = {.lex_state = 26, .external_lex_state = 3},
  [84] = {.lex_state = 4, .external_lex_state = 2},
  [85] = {.lex_state = 2, .external_lex_state = 2},
  [86] = {.lex_state = 11, .external_lex_state = 2},
  [87] = {.lex_state = 25, .external_lex_state = 2},
  [88] = {.lex_state = 11, .external_lex_state = 2},
  [89] = {.lex_state = 25, .external_lex_state = 2},
  [90] = {.lex_state = 25, .external_lex_state = 2},
  [91] = {.lex_state = 20, .external_lex_state = 2},
  [92] = {.lex_state = 25, .external_lex_state = 2},
  [93] = {.lex_state = 25, .external_lex_state = 2},
  [94] = {.lex_state = 25, .external_lex_state = 2},
  [95] = {.lex_state = 25, .external_lex_state = 2},
  [96] = {.lex_state = 25, .external_lex_state = 2},
  [97] = {.lex_state = 12},
  [98] = {.lex_state = 13},
  [99] = {.lex_state = 13},
  [100] = {.lex_state = 8, .external_lex_state = 2},
  [101] = {.lex_state = 9, .external_lex_state = 2},
  [102] = {.lex_state = 10, .external_lex_state = 2},
  [103] = {.lex_state = 11, .external_lex_state = 2},
  [104] = {.lex_state = 11, .external_lex_state = 2},
  [105] = {.lex_state = 2},
  [106] = {.lex_state = 11, .external_lex_state = 2},
  [107] = {.lex_state = 11, .external_lex_state = 2},
  [108] = {.lex_state = 11, .external_lex_state = 2},
  [109] = {.lex_state = 11, .external_lex_state = 2},
  [110] = {.lex_state = 2},
  [111] = {.lex_state = 11, .external_lex_state = 2},
  [112] = {.lex_state = 11, .external_lex_state = 2},
  [113] = {.lex_state = 11, .external_lex_state = 2},
  [114] = {.lex_state = 3},
  [115] = {.lex_state = 11, .external_lex_state = 2},
  [116] = {.lex_state = 11, .external_lex_state = 2},
  [117] = {.lex_state = 11, .external_lex_state = 2},
  [118] = {.lex_state = 11, .external_lex_state = 2},
  [119] = {.lex_state = 25},
  [120] = {.lex_state = 25},
  [121] = {.lex_state = 2},
  [122] = {.lex_state = 25},
  [123] = {.lex_state = 25},
  [124] = {.lex_state = 25},
  [125] = {.lex_state = 25},
  [126] = {.lex_state = 25},
  [127] = {.lex_state = 25},
  [128] = {.lex_state = 25},
  [129] = {.lex_state = 25},
  [130] = {.lex_state = 25},
  [131] = {.lex_state = 25},
  [132] = {.lex_state = 25},
  [133] = {.lex_state = 25},
  [134] = {.lex_state = 25},
  [135] = {.lex_state = 25},
  [136] = {.lex_state = 25},
  [137] = {.lex_state = 5},
  [138] = {.lex_state = 5},
  [139] = {.lex_state = 14},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 12},
  [142] = {.lex_state = 12},
  [143] = {.lex_state = 5},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 12},
  [146] = {.lex_state = 17},
  [147] = {.lex_state = 20},
  [148] = {.lex_state = 5},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 14},
  [151] = {.lex_state = 20},
  [152] = {.lex_state = 12},
};

enum {
  ts_external_token_null_character = 0,
  ts_external_token__has_backreference_name = 1,
  ts_external_token__begin_count_quantifier = 2,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_null_character] = sym_null_character,
  [ts_external_token__has_backreference_name] = sym__has_backreference_name,
  [ts_external_token__begin_count_quantifier] = sym__begin_count_quantifier,
};

static bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_null_character] = true,
    [ts_external_token__has_backreference_name] = true,
    [ts_external_token__begin_count_quantifier] = true,
  },
  [2] = {
    [ts_external_token_null_character] = true,
  },
  [3] = {
    [ts_external_token_null_character] = true,
    [ts_external_token__begin_count_quantifier] = true,
  },
};

static uint16_t ts_parse_table[STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(1),
    [aux_sym_optional_token1] = ACTIONS(1),
    [aux_sym_zero_or_more_token1] = ACTIONS(1),
    [aux_sym_one_or_more_token1] = ACTIONS(1),
    [aux_sym_count_quantifier_token1] = ACTIONS(1),
    [aux_sym_count_quantifier_token2] = ACTIONS(1),
    [aux_sym_count_quantifier_token3] = ACTIONS(1),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(1),
    [aux_sym_numeric_backreference_token1] = ACTIONS(1),
    [aux_sym_named_backreference_token1] = ACTIONS(1),
    [aux_sym_named_backreference_token2] = ACTIONS(1),
    [aux_sym_DOLLARnamed_backreference_prefix_token1] = ACTIONS(1),
    [aux_sym_group_name_token1] = ACTIONS(1),
    [sym_group_begin] = ACTIONS(1),
    [sym_group_end] = ACTIONS(1),
    [sym__invalid_group_delimiter] = ACTIONS(1),
    [aux_sym_boundary_assertion_token1] = ACTIONS(1),
    [aux_sym_non_boundary_assertion_token1] = ACTIONS(1),
    [aux_sym_start_assertion_token1] = ACTIONS(1),
    [sym_end_assertion] = ACTIONS(1),
    [aux_sym_character_set_token1] = ACTIONS(1),
    [aux_sym_character_set_token2] = ACTIONS(1),
    [sym__invalid_character_set_delimiter] = ACTIONS(1),
    [aux_sym_character_class_escape_token1] = ACTIONS(1),
    [aux_sym_DOLLARp_special_escape_token1] = ACTIONS(1),
    [aux_sym_DOLLARs_special_escape_token1] = ACTIONS(1),
    [aux_sym_control_letter_escape_token1] = ACTIONS(1),
    [aux_sym_control_letter_escape_token2] = ACTIONS(1),
    [aux_sym_octal_escape_token1] = ACTIONS(1),
    [aux_sym_hexadecimal_escape_token1] = ACTIONS(1),
    [aux_sym_unicode_escape_token1] = ACTIONS(1),
    [aux_sym_DOLLARp_identity_escape_token1] = ACTIONS(1),
    [aux_sym_DOLLARs_identity_escape_token1] = ACTIONS(1),
    [sym__backslash] = ACTIONS(1),
    [sym__dash] = ACTIONS(1),
    [sym_disjunction_delimiter] = ACTIONS(1),
    [sym_any_character] = ACTIONS(1),
    [sym__p_non_syntax_character] = ACTIONS(1),
    [sym__s_non_syntax_character] = ACTIONS(1),
    [sym_null_character] = ACTIONS(1),
    [sym__has_backreference_name] = ACTIONS(1),
    [sym__begin_count_quantifier] = ACTIONS(1),
  },
  [1] = {
    [sym_regex] = STATE(140),
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(11),
    [sym_non_boundary_assertion] = STATE(11),
    [sym_start_assertion] = STATE(11),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(132),
    [aux_sym_DOLLARpattern_repeat1] = STATE(11),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(9),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [2] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_named_capturing_group_identifier] = STATE(5),
    [sym_DOLLARinvalid_named_capturing_group_identifier] = STATE(5),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(18),
    [sym_non_boundary_assertion] = STATE(18),
    [sym_start_assertion] = STATE(18),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(123),
    [aux_sym_DOLLARpattern_repeat1] = STATE(18),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [aux_sym_lookahead_assertion_token1] = ACTIONS(21),
    [aux_sym_negative_lookahead_assertion_token1] = ACTIONS(23),
    [aux_sym_lookbehind_assertion_token1] = ACTIONS(25),
    [aux_sym_negative_lookbehind_assertion_token1] = ACTIONS(27),
    [aux_sym_non_capturing_group_token1] = ACTIONS(29),
    [aux_sym_named_capturing_group_identifier_token1] = ACTIONS(31),
    [aux_sym_DOLLARinvalid_named_capturing_group_identifier_token1] = ACTIONS(33),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(35),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(37),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [3] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(13),
    [sym_non_boundary_assertion] = STATE(13),
    [sym_start_assertion] = STATE(13),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(122),
    [aux_sym_DOLLARpattern_repeat1] = STATE(13),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(39),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(41),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [4] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(134),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(43),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [5] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(7),
    [sym_non_boundary_assertion] = STATE(7),
    [sym_start_assertion] = STATE(7),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(133),
    [aux_sym_DOLLARpattern_repeat1] = STATE(7),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(47),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(49),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [6] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(9),
    [sym_non_boundary_assertion] = STATE(9),
    [sym_start_assertion] = STATE(9),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(129),
    [aux_sym_DOLLARpattern_repeat1] = STATE(9),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(51),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(53),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [7] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(124),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(55),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [8] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(16),
    [sym_non_boundary_assertion] = STATE(16),
    [sym_start_assertion] = STATE(16),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARpattern_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(57),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(57),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(59),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(57),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [9] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(120),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(61),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [10] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(136),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(63),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [11] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(127),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(65),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [12] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(135),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(67),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [13] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(128),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(69),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [14] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(10),
    [sym_non_boundary_assertion] = STATE(10),
    [sym_start_assertion] = STATE(10),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(125),
    [aux_sym_DOLLARpattern_repeat1] = STATE(10),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(71),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(73),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [15] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(77),
    [sym_group_begin] = ACTIONS(80),
    [sym_group_end] = ACTIONS(75),
    [aux_sym_start_assertion_token1] = ACTIONS(83),
    [sym_end_assertion] = ACTIONS(86),
    [aux_sym_character_set_token1] = ACTIONS(89),
    [sym__invalid_character_set_delimiter] = ACTIONS(92),
    [sym__backslash] = ACTIONS(95),
    [sym_disjunction_delimiter] = ACTIONS(75),
    [sym_any_character] = ACTIONS(77),
    [sym__p_non_syntax_character] = ACTIONS(77),
    [sym_null_character] = ACTIONS(98),
  },
  [16] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(101),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(101),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(101),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [17] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(4),
    [sym_non_boundary_assertion] = STATE(4),
    [sym_start_assertion] = STATE(4),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(126),
    [aux_sym_DOLLARpattern_repeat1] = STATE(4),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(103),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(105),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [18] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(15),
    [sym_non_boundary_assertion] = STATE(15),
    [sym_start_assertion] = STATE(15),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(130),
    [aux_sym_DOLLARpattern_repeat1] = STATE(15),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(107),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(45),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [19] = {
    [sym_numeric_backreference] = STATE(21),
    [sym_named_backreference] = STATE(21),
    [sym_DOLLARnonconforming_named_backreference] = STATE(21),
    [sym_lookahead_assertion] = STATE(21),
    [sym_negative_lookahead_assertion] = STATE(21),
    [sym_lookbehind_assertion] = STATE(21),
    [sym_negative_lookbehind_assertion] = STATE(21),
    [sym_non_capturing_group] = STATE(21),
    [sym_named_capturing_group] = STATE(21),
    [sym_anonymous_capturing_group] = STATE(21),
    [sym_boundary_assertion] = STATE(12),
    [sym_non_boundary_assertion] = STATE(12),
    [sym_start_assertion] = STATE(12),
    [sym_character_set] = STATE(21),
    [sym_character_class_escape] = STATE(21),
    [sym_DOLLARp_special_escape] = STATE(20),
    [sym_control_letter_escape] = STATE(20),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(20),
    [sym_octal_escape] = STATE(20),
    [sym_hexadecimal_escape] = STATE(20),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(20),
    [sym_unicode_escape] = STATE(20),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(20),
    [sym_DOLLARp_identity_escape] = STATE(20),
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(131),
    [aux_sym_DOLLARpattern_repeat1] = STATE(12),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(3),
    [sym_group_begin] = ACTIONS(5),
    [sym_group_end] = ACTIONS(109),
    [aux_sym_start_assertion_token1] = ACTIONS(7),
    [sym_end_assertion] = ACTIONS(111),
    [aux_sym_character_set_token1] = ACTIONS(11),
    [sym__invalid_character_set_delimiter] = ACTIONS(13),
    [sym__backslash] = ACTIONS(15),
    [sym_disjunction_delimiter] = ACTIONS(17),
    [sym_any_character] = ACTIONS(3),
    [sym__p_non_syntax_character] = ACTIONS(3),
    [sym_null_character] = ACTIONS(19),
  },
  [20] = {
    [sym_optional] = STATE(73),
    [sym_zero_or_more] = STATE(73),
    [sym_one_or_more] = STATE(73),
    [sym_count_quantifier] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(113),
    [aux_sym_optional_token1] = ACTIONS(115),
    [aux_sym_zero_or_more_token1] = ACTIONS(117),
    [aux_sym_one_or_more_token1] = ACTIONS(119),
    [sym_group_begin] = ACTIONS(113),
    [sym_group_end] = ACTIONS(113),
    [aux_sym_start_assertion_token1] = ACTIONS(113),
    [sym_end_assertion] = ACTIONS(113),
    [aux_sym_character_set_token1] = ACTIONS(113),
    [sym__invalid_character_set_delimiter] = ACTIONS(121),
    [sym__backslash] = ACTIONS(113),
    [sym_disjunction_delimiter] = ACTIONS(113),
    [sym_any_character] = ACTIONS(113),
    [sym__p_non_syntax_character] = ACTIONS(113),
    [sym_null_character] = ACTIONS(113),
    [sym__begin_count_quantifier] = ACTIONS(123),
  },
  [21] = {
    [sym_optional] = STATE(73),
    [sym_zero_or_more] = STATE(73),
    [sym_one_or_more] = STATE(73),
    [sym_count_quantifier] = STATE(73),
    [ts_builtin_sym_end] = ACTIONS(113),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(113),
    [aux_sym_optional_token1] = ACTIONS(115),
    [aux_sym_zero_or_more_token1] = ACTIONS(117),
    [aux_sym_one_or_more_token1] = ACTIONS(119),
    [sym_group_begin] = ACTIONS(113),
    [sym_group_end] = ACTIONS(113),
    [aux_sym_start_assertion_token1] = ACTIONS(113),
    [sym_end_assertion] = ACTIONS(113),
    [aux_sym_character_set_token1] = ACTIONS(113),
    [sym__invalid_character_set_delimiter] = ACTIONS(121),
    [sym__backslash] = ACTIONS(113),
    [sym_disjunction_delimiter] = ACTIONS(113),
    [sym_any_character] = ACTIONS(113),
    [sym__p_non_syntax_character] = ACTIONS(113),
    [sym_null_character] = ACTIONS(113),
    [sym__begin_count_quantifier] = ACTIONS(123),
  },
  [22] = {
    [sym_character_range] = STATE(35),
    [sym_character_class_escape] = STATE(35),
    [sym_DOLLARs_special_escape] = STATE(112),
    [sym_control_letter_escape] = STATE(112),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(112),
    [sym_octal_escape] = STATE(112),
    [sym_hexadecimal_escape] = STATE(112),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(112),
    [sym_unicode_escape] = STATE(112),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(112),
    [sym_DOLLARs_identity_escape] = STATE(112),
    [aux_sym_character_set_repeat1] = STATE(35),
    [aux_sym_start_assertion_token1] = ACTIONS(125),
    [aux_sym_character_set_token2] = ACTIONS(127),
    [sym__backslash] = ACTIONS(129),
    [sym__dash] = ACTIONS(131),
    [sym__s_non_syntax_character] = ACTIONS(133),
    [sym_null_character] = ACTIONS(135),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(137),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(137),
    [aux_sym_optional_token1] = ACTIONS(137),
    [aux_sym_zero_or_more_token1] = ACTIONS(137),
    [aux_sym_one_or_more_token1] = ACTIONS(137),
    [sym_group_begin] = ACTIONS(137),
    [sym_group_end] = ACTIONS(137),
    [aux_sym_start_assertion_token1] = ACTIONS(137),
    [sym_end_assertion] = ACTIONS(137),
    [aux_sym_character_set_token1] = ACTIONS(137),
    [sym__invalid_character_set_delimiter] = ACTIONS(139),
    [aux_sym_unicode_escape_token2] = ACTIONS(141),
    [sym__backslash] = ACTIONS(137),
    [sym_disjunction_delimiter] = ACTIONS(137),
    [sym_any_character] = ACTIONS(137),
    [sym__p_non_syntax_character] = ACTIONS(139),
    [sym_null_character] = ACTIONS(137),
    [sym__begin_count_quantifier] = ACTIONS(137),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(143),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(143),
    [aux_sym_optional_token1] = ACTIONS(143),
    [aux_sym_zero_or_more_token1] = ACTIONS(143),
    [aux_sym_one_or_more_token1] = ACTIONS(143),
    [sym_group_begin] = ACTIONS(143),
    [sym_group_end] = ACTIONS(143),
    [aux_sym_start_assertion_token1] = ACTIONS(143),
    [sym_end_assertion] = ACTIONS(143),
    [aux_sym_character_set_token1] = ACTIONS(143),
    [sym__invalid_character_set_delimiter] = ACTIONS(145),
    [aux_sym_hexadecimal_escape_token2] = ACTIONS(147),
    [sym__backslash] = ACTIONS(143),
    [sym_disjunction_delimiter] = ACTIONS(143),
    [sym_any_character] = ACTIONS(143),
    [sym__p_non_syntax_character] = ACTIONS(145),
    [sym_null_character] = ACTIONS(143),
    [sym__begin_count_quantifier] = ACTIONS(143),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(149),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(149),
    [aux_sym_optional_token1] = ACTIONS(149),
    [aux_sym_zero_or_more_token1] = ACTIONS(149),
    [aux_sym_one_or_more_token1] = ACTIONS(149),
    [sym_group_begin] = ACTIONS(149),
    [sym_group_end] = ACTIONS(149),
    [aux_sym_start_assertion_token1] = ACTIONS(149),
    [sym_end_assertion] = ACTIONS(149),
    [aux_sym_character_set_token1] = ACTIONS(149),
    [sym__invalid_character_set_delimiter] = ACTIONS(151),
    [aux_sym_control_letter_escape_token2] = ACTIONS(153),
    [sym__backslash] = ACTIONS(149),
    [sym_disjunction_delimiter] = ACTIONS(149),
    [sym_any_character] = ACTIONS(149),
    [sym__p_non_syntax_character] = ACTIONS(151),
    [sym_null_character] = ACTIONS(149),
    [sym__begin_count_quantifier] = ACTIONS(149),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(155),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(155),
    [aux_sym_optional_token1] = ACTIONS(155),
    [aux_sym_zero_or_more_token1] = ACTIONS(155),
    [aux_sym_one_or_more_token1] = ACTIONS(155),
    [sym_group_begin] = ACTIONS(155),
    [sym_group_end] = ACTIONS(155),
    [aux_sym_start_assertion_token1] = ACTIONS(155),
    [sym_end_assertion] = ACTIONS(155),
    [aux_sym_character_set_token1] = ACTIONS(155),
    [sym__invalid_character_set_delimiter] = ACTIONS(157),
    [sym__backslash] = ACTIONS(155),
    [sym_disjunction_delimiter] = ACTIONS(155),
    [sym_any_character] = ACTIONS(155),
    [sym__p_non_syntax_character] = ACTIONS(155),
    [sym_null_character] = ACTIONS(155),
    [sym__has_backreference_name] = ACTIONS(159),
    [sym__begin_count_quantifier] = ACTIONS(155),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(161),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(161),
    [aux_sym_optional_token1] = ACTIONS(161),
    [aux_sym_zero_or_more_token1] = ACTIONS(161),
    [aux_sym_one_or_more_token1] = ACTIONS(161),
    [sym_group_begin] = ACTIONS(161),
    [sym_group_end] = ACTIONS(161),
    [aux_sym_start_assertion_token1] = ACTIONS(161),
    [sym_end_assertion] = ACTIONS(161),
    [aux_sym_character_set_token1] = ACTIONS(161),
    [sym__invalid_character_set_delimiter] = ACTIONS(163),
    [sym__backslash] = ACTIONS(161),
    [sym_disjunction_delimiter] = ACTIONS(161),
    [sym_any_character] = ACTIONS(161),
    [sym__p_non_syntax_character] = ACTIONS(161),
    [sym_null_character] = ACTIONS(161),
    [sym__begin_count_quantifier] = ACTIONS(161),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(165),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(165),
    [aux_sym_optional_token1] = ACTIONS(165),
    [aux_sym_zero_or_more_token1] = ACTIONS(165),
    [aux_sym_one_or_more_token1] = ACTIONS(165),
    [sym_group_begin] = ACTIONS(165),
    [sym_group_end] = ACTIONS(165),
    [aux_sym_start_assertion_token1] = ACTIONS(165),
    [sym_end_assertion] = ACTIONS(165),
    [aux_sym_character_set_token1] = ACTIONS(165),
    [sym__invalid_character_set_delimiter] = ACTIONS(167),
    [sym__backslash] = ACTIONS(165),
    [sym_disjunction_delimiter] = ACTIONS(165),
    [sym_any_character] = ACTIONS(165),
    [sym__p_non_syntax_character] = ACTIONS(165),
    [sym_null_character] = ACTIONS(165),
    [sym__begin_count_quantifier] = ACTIONS(165),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(169),
    [aux_sym_optional_token1] = ACTIONS(169),
    [aux_sym_zero_or_more_token1] = ACTIONS(169),
    [aux_sym_one_or_more_token1] = ACTIONS(169),
    [sym_group_begin] = ACTIONS(169),
    [sym_group_end] = ACTIONS(169),
    [aux_sym_start_assertion_token1] = ACTIONS(169),
    [sym_end_assertion] = ACTIONS(169),
    [aux_sym_character_set_token1] = ACTIONS(169),
    [sym__invalid_character_set_delimiter] = ACTIONS(171),
    [sym__backslash] = ACTIONS(169),
    [sym_disjunction_delimiter] = ACTIONS(169),
    [sym_any_character] = ACTIONS(169),
    [sym__p_non_syntax_character] = ACTIONS(169),
    [sym_null_character] = ACTIONS(169),
    [sym__begin_count_quantifier] = ACTIONS(169),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(173),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(173),
    [aux_sym_optional_token1] = ACTIONS(173),
    [aux_sym_zero_or_more_token1] = ACTIONS(173),
    [aux_sym_one_or_more_token1] = ACTIONS(173),
    [sym_group_begin] = ACTIONS(173),
    [sym_group_end] = ACTIONS(173),
    [aux_sym_start_assertion_token1] = ACTIONS(173),
    [sym_end_assertion] = ACTIONS(173),
    [aux_sym_character_set_token1] = ACTIONS(173),
    [sym__invalid_character_set_delimiter] = ACTIONS(175),
    [sym__backslash] = ACTIONS(173),
    [sym_disjunction_delimiter] = ACTIONS(173),
    [sym_any_character] = ACTIONS(173),
    [sym__p_non_syntax_character] = ACTIONS(173),
    [sym_null_character] = ACTIONS(173),
    [sym__begin_count_quantifier] = ACTIONS(173),
  },
  [31] = {
    [sym_character_range] = STATE(65),
    [sym_character_class_escape] = STATE(65),
    [sym_DOLLARs_special_escape] = STATE(112),
    [sym_control_letter_escape] = STATE(112),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(112),
    [sym_octal_escape] = STATE(112),
    [sym_hexadecimal_escape] = STATE(112),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(112),
    [sym_unicode_escape] = STATE(112),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(112),
    [sym_DOLLARs_identity_escape] = STATE(112),
    [aux_sym_character_set_repeat1] = STATE(65),
    [aux_sym_character_set_token2] = ACTIONS(177),
    [sym__backslash] = ACTIONS(129),
    [sym__dash] = ACTIONS(131),
    [sym__s_non_syntax_character] = ACTIONS(135),
    [sym_null_character] = ACTIONS(135),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(179),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(179),
    [aux_sym_optional_token1] = ACTIONS(179),
    [aux_sym_zero_or_more_token1] = ACTIONS(179),
    [aux_sym_one_or_more_token1] = ACTIONS(179),
    [sym_group_begin] = ACTIONS(179),
    [sym_group_end] = ACTIONS(179),
    [aux_sym_start_assertion_token1] = ACTIONS(179),
    [sym_end_assertion] = ACTIONS(179),
    [aux_sym_character_set_token1] = ACTIONS(179),
    [sym__invalid_character_set_delimiter] = ACTIONS(181),
    [sym__backslash] = ACTIONS(179),
    [sym_disjunction_delimiter] = ACTIONS(179),
    [sym_any_character] = ACTIONS(179),
    [sym__p_non_syntax_character] = ACTIONS(179),
    [sym_null_character] = ACTIONS(179),
    [sym__begin_count_quantifier] = ACTIONS(179),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(183),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(183),
    [aux_sym_optional_token1] = ACTIONS(183),
    [aux_sym_zero_or_more_token1] = ACTIONS(183),
    [aux_sym_one_or_more_token1] = ACTIONS(183),
    [sym_group_begin] = ACTIONS(183),
    [sym_group_end] = ACTIONS(183),
    [aux_sym_start_assertion_token1] = ACTIONS(183),
    [sym_end_assertion] = ACTIONS(183),
    [aux_sym_character_set_token1] = ACTIONS(183),
    [sym__invalid_character_set_delimiter] = ACTIONS(185),
    [sym__backslash] = ACTIONS(183),
    [sym_disjunction_delimiter] = ACTIONS(183),
    [sym_any_character] = ACTIONS(183),
    [sym__p_non_syntax_character] = ACTIONS(183),
    [sym_null_character] = ACTIONS(183),
    [sym__begin_count_quantifier] = ACTIONS(183),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(187),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(187),
    [aux_sym_optional_token1] = ACTIONS(187),
    [aux_sym_zero_or_more_token1] = ACTIONS(187),
    [aux_sym_one_or_more_token1] = ACTIONS(187),
    [sym_group_begin] = ACTIONS(187),
    [sym_group_end] = ACTIONS(187),
    [aux_sym_start_assertion_token1] = ACTIONS(187),
    [sym_end_assertion] = ACTIONS(187),
    [aux_sym_character_set_token1] = ACTIONS(187),
    [sym__invalid_character_set_delimiter] = ACTIONS(189),
    [sym__backslash] = ACTIONS(187),
    [sym_disjunction_delimiter] = ACTIONS(187),
    [sym_any_character] = ACTIONS(187),
    [sym__p_non_syntax_character] = ACTIONS(187),
    [sym_null_character] = ACTIONS(187),
    [sym__begin_count_quantifier] = ACTIONS(187),
  },
  [35] = {
    [sym_character_range] = STATE(57),
    [sym_character_class_escape] = STATE(57),
    [sym_DOLLARs_special_escape] = STATE(112),
    [sym_control_letter_escape] = STATE(112),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(112),
    [sym_octal_escape] = STATE(112),
    [sym_hexadecimal_escape] = STATE(112),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(112),
    [sym_unicode_escape] = STATE(112),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(112),
    [sym_DOLLARs_identity_escape] = STATE(112),
    [aux_sym_character_set_repeat1] = STATE(57),
    [aux_sym_character_set_token2] = ACTIONS(191),
    [sym__backslash] = ACTIONS(129),
    [sym__dash] = ACTIONS(131),
    [sym__s_non_syntax_character] = ACTIONS(135),
    [sym_null_character] = ACTIONS(135),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(193),
    [aux_sym_optional_token1] = ACTIONS(193),
    [aux_sym_zero_or_more_token1] = ACTIONS(193),
    [aux_sym_one_or_more_token1] = ACTIONS(193),
    [sym_group_begin] = ACTIONS(193),
    [sym_group_end] = ACTIONS(193),
    [aux_sym_start_assertion_token1] = ACTIONS(193),
    [sym_end_assertion] = ACTIONS(193),
    [aux_sym_character_set_token1] = ACTIONS(193),
    [sym__invalid_character_set_delimiter] = ACTIONS(195),
    [sym__backslash] = ACTIONS(193),
    [sym_disjunction_delimiter] = ACTIONS(193),
    [sym_any_character] = ACTIONS(193),
    [sym__p_non_syntax_character] = ACTIONS(193),
    [sym_null_character] = ACTIONS(193),
    [sym__begin_count_quantifier] = ACTIONS(193),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(197),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(197),
    [aux_sym_optional_token1] = ACTIONS(197),
    [aux_sym_zero_or_more_token1] = ACTIONS(197),
    [aux_sym_one_or_more_token1] = ACTIONS(197),
    [sym_group_begin] = ACTIONS(197),
    [sym_group_end] = ACTIONS(197),
    [aux_sym_start_assertion_token1] = ACTIONS(197),
    [sym_end_assertion] = ACTIONS(197),
    [aux_sym_character_set_token1] = ACTIONS(197),
    [sym__invalid_character_set_delimiter] = ACTIONS(199),
    [sym__backslash] = ACTIONS(197),
    [sym_disjunction_delimiter] = ACTIONS(197),
    [sym_any_character] = ACTIONS(197),
    [sym__p_non_syntax_character] = ACTIONS(197),
    [sym_null_character] = ACTIONS(197),
    [sym__begin_count_quantifier] = ACTIONS(197),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(201),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(201),
    [aux_sym_optional_token1] = ACTIONS(201),
    [aux_sym_zero_or_more_token1] = ACTIONS(201),
    [aux_sym_one_or_more_token1] = ACTIONS(201),
    [sym_group_begin] = ACTIONS(201),
    [sym_group_end] = ACTIONS(201),
    [aux_sym_start_assertion_token1] = ACTIONS(201),
    [sym_end_assertion] = ACTIONS(201),
    [aux_sym_character_set_token1] = ACTIONS(201),
    [sym__invalid_character_set_delimiter] = ACTIONS(203),
    [sym__backslash] = ACTIONS(201),
    [sym_disjunction_delimiter] = ACTIONS(201),
    [sym_any_character] = ACTIONS(201),
    [sym__p_non_syntax_character] = ACTIONS(201),
    [sym_null_character] = ACTIONS(201),
    [sym__begin_count_quantifier] = ACTIONS(201),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(205),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(205),
    [aux_sym_optional_token1] = ACTIONS(205),
    [aux_sym_zero_or_more_token1] = ACTIONS(205),
    [aux_sym_one_or_more_token1] = ACTIONS(205),
    [sym_group_begin] = ACTIONS(205),
    [sym_group_end] = ACTIONS(205),
    [aux_sym_start_assertion_token1] = ACTIONS(205),
    [sym_end_assertion] = ACTIONS(205),
    [aux_sym_character_set_token1] = ACTIONS(205),
    [sym__invalid_character_set_delimiter] = ACTIONS(207),
    [sym__backslash] = ACTIONS(205),
    [sym_disjunction_delimiter] = ACTIONS(205),
    [sym_any_character] = ACTIONS(205),
    [sym__p_non_syntax_character] = ACTIONS(205),
    [sym_null_character] = ACTIONS(205),
    [sym__begin_count_quantifier] = ACTIONS(205),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(209),
    [aux_sym_optional_token1] = ACTIONS(209),
    [aux_sym_zero_or_more_token1] = ACTIONS(209),
    [aux_sym_one_or_more_token1] = ACTIONS(209),
    [sym_group_begin] = ACTIONS(209),
    [sym_group_end] = ACTIONS(209),
    [aux_sym_start_assertion_token1] = ACTIONS(209),
    [sym_end_assertion] = ACTIONS(209),
    [aux_sym_character_set_token1] = ACTIONS(209),
    [sym__invalid_character_set_delimiter] = ACTIONS(211),
    [sym__backslash] = ACTIONS(209),
    [sym_disjunction_delimiter] = ACTIONS(209),
    [sym_any_character] = ACTIONS(209),
    [sym__p_non_syntax_character] = ACTIONS(209),
    [sym_null_character] = ACTIONS(209),
    [sym__begin_count_quantifier] = ACTIONS(209),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(213),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(213),
    [aux_sym_optional_token1] = ACTIONS(213),
    [aux_sym_zero_or_more_token1] = ACTIONS(213),
    [aux_sym_one_or_more_token1] = ACTIONS(213),
    [sym_group_begin] = ACTIONS(213),
    [sym_group_end] = ACTIONS(213),
    [aux_sym_start_assertion_token1] = ACTIONS(213),
    [sym_end_assertion] = ACTIONS(213),
    [aux_sym_character_set_token1] = ACTIONS(213),
    [sym__invalid_character_set_delimiter] = ACTIONS(215),
    [sym__backslash] = ACTIONS(213),
    [sym_disjunction_delimiter] = ACTIONS(213),
    [sym_any_character] = ACTIONS(213),
    [sym__p_non_syntax_character] = ACTIONS(213),
    [sym_null_character] = ACTIONS(213),
    [sym__begin_count_quantifier] = ACTIONS(213),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(217),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(217),
    [aux_sym_optional_token1] = ACTIONS(217),
    [aux_sym_zero_or_more_token1] = ACTIONS(217),
    [aux_sym_one_or_more_token1] = ACTIONS(217),
    [sym_group_begin] = ACTIONS(217),
    [sym_group_end] = ACTIONS(217),
    [aux_sym_start_assertion_token1] = ACTIONS(217),
    [sym_end_assertion] = ACTIONS(217),
    [aux_sym_character_set_token1] = ACTIONS(217),
    [sym__invalid_character_set_delimiter] = ACTIONS(219),
    [sym__backslash] = ACTIONS(217),
    [sym_disjunction_delimiter] = ACTIONS(217),
    [sym_any_character] = ACTIONS(217),
    [sym__p_non_syntax_character] = ACTIONS(217),
    [sym_null_character] = ACTIONS(217),
    [sym__begin_count_quantifier] = ACTIONS(217),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(221),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(221),
    [aux_sym_optional_token1] = ACTIONS(221),
    [aux_sym_zero_or_more_token1] = ACTIONS(221),
    [aux_sym_one_or_more_token1] = ACTIONS(221),
    [sym_group_begin] = ACTIONS(221),
    [sym_group_end] = ACTIONS(221),
    [aux_sym_start_assertion_token1] = ACTIONS(221),
    [sym_end_assertion] = ACTIONS(221),
    [aux_sym_character_set_token1] = ACTIONS(221),
    [sym__invalid_character_set_delimiter] = ACTIONS(223),
    [sym__backslash] = ACTIONS(221),
    [sym_disjunction_delimiter] = ACTIONS(221),
    [sym_any_character] = ACTIONS(221),
    [sym__p_non_syntax_character] = ACTIONS(221),
    [sym_null_character] = ACTIONS(221),
    [sym__begin_count_quantifier] = ACTIONS(221),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(225),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(225),
    [aux_sym_optional_token1] = ACTIONS(225),
    [aux_sym_zero_or_more_token1] = ACTIONS(225),
    [aux_sym_one_or_more_token1] = ACTIONS(225),
    [sym_group_begin] = ACTIONS(225),
    [sym_group_end] = ACTIONS(225),
    [aux_sym_start_assertion_token1] = ACTIONS(225),
    [sym_end_assertion] = ACTIONS(225),
    [aux_sym_character_set_token1] = ACTIONS(225),
    [sym__invalid_character_set_delimiter] = ACTIONS(227),
    [sym__backslash] = ACTIONS(225),
    [sym_disjunction_delimiter] = ACTIONS(225),
    [sym_any_character] = ACTIONS(225),
    [sym__p_non_syntax_character] = ACTIONS(225),
    [sym_null_character] = ACTIONS(225),
    [sym__begin_count_quantifier] = ACTIONS(225),
  },
  [45] = {
    [sym_group_name] = STATE(84),
    [sym_unicode_escape] = STATE(71),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(95),
    [aux_sym_group_name_repeat1] = STATE(71),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(229),
    [aux_sym_group_name_token1] = ACTIONS(231),
    [sym_group_begin] = ACTIONS(229),
    [sym_group_end] = ACTIONS(229),
    [aux_sym_start_assertion_token1] = ACTIONS(229),
    [sym_end_assertion] = ACTIONS(233),
    [aux_sym_character_set_token1] = ACTIONS(229),
    [sym__invalid_character_set_delimiter] = ACTIONS(233),
    [sym__backslash] = ACTIONS(235),
    [sym_disjunction_delimiter] = ACTIONS(229),
    [sym_any_character] = ACTIONS(229),
    [sym__p_non_syntax_character] = ACTIONS(233),
    [sym_null_character] = ACTIONS(229),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(237),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(237),
    [aux_sym_optional_token1] = ACTIONS(237),
    [aux_sym_zero_or_more_token1] = ACTIONS(237),
    [aux_sym_one_or_more_token1] = ACTIONS(237),
    [sym_group_begin] = ACTIONS(237),
    [sym_group_end] = ACTIONS(237),
    [aux_sym_start_assertion_token1] = ACTIONS(237),
    [sym_end_assertion] = ACTIONS(237),
    [aux_sym_character_set_token1] = ACTIONS(237),
    [sym__invalid_character_set_delimiter] = ACTIONS(239),
    [sym__backslash] = ACTIONS(237),
    [sym_disjunction_delimiter] = ACTIONS(237),
    [sym_any_character] = ACTIONS(237),
    [sym__p_non_syntax_character] = ACTIONS(237),
    [sym_null_character] = ACTIONS(237),
    [sym__begin_count_quantifier] = ACTIONS(237),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(241),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(241),
    [aux_sym_optional_token1] = ACTIONS(241),
    [aux_sym_zero_or_more_token1] = ACTIONS(241),
    [aux_sym_one_or_more_token1] = ACTIONS(241),
    [sym_group_begin] = ACTIONS(241),
    [sym_group_end] = ACTIONS(241),
    [aux_sym_start_assertion_token1] = ACTIONS(241),
    [sym_end_assertion] = ACTIONS(241),
    [aux_sym_character_set_token1] = ACTIONS(241),
    [sym__invalid_character_set_delimiter] = ACTIONS(243),
    [sym__backslash] = ACTIONS(241),
    [sym_disjunction_delimiter] = ACTIONS(241),
    [sym_any_character] = ACTIONS(241),
    [sym__p_non_syntax_character] = ACTIONS(241),
    [sym_null_character] = ACTIONS(241),
    [sym__begin_count_quantifier] = ACTIONS(241),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(245),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(245),
    [aux_sym_optional_token1] = ACTIONS(245),
    [aux_sym_zero_or_more_token1] = ACTIONS(245),
    [aux_sym_one_or_more_token1] = ACTIONS(245),
    [sym_group_begin] = ACTIONS(245),
    [sym_group_end] = ACTIONS(245),
    [aux_sym_start_assertion_token1] = ACTIONS(245),
    [sym_end_assertion] = ACTIONS(245),
    [aux_sym_character_set_token1] = ACTIONS(245),
    [sym__invalid_character_set_delimiter] = ACTIONS(247),
    [sym__backslash] = ACTIONS(245),
    [sym_disjunction_delimiter] = ACTIONS(245),
    [sym_any_character] = ACTIONS(245),
    [sym__p_non_syntax_character] = ACTIONS(245),
    [sym_null_character] = ACTIONS(245),
    [sym__begin_count_quantifier] = ACTIONS(245),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(249),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(249),
    [aux_sym_optional_token1] = ACTIONS(249),
    [aux_sym_zero_or_more_token1] = ACTIONS(249),
    [aux_sym_one_or_more_token1] = ACTIONS(249),
    [sym_group_begin] = ACTIONS(249),
    [sym_group_end] = ACTIONS(249),
    [aux_sym_start_assertion_token1] = ACTIONS(249),
    [sym_end_assertion] = ACTIONS(249),
    [aux_sym_character_set_token1] = ACTIONS(249),
    [sym__invalid_character_set_delimiter] = ACTIONS(251),
    [sym__backslash] = ACTIONS(249),
    [sym_disjunction_delimiter] = ACTIONS(249),
    [sym_any_character] = ACTIONS(249),
    [sym__p_non_syntax_character] = ACTIONS(249),
    [sym_null_character] = ACTIONS(249),
    [sym__begin_count_quantifier] = ACTIONS(249),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(253),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(253),
    [aux_sym_optional_token1] = ACTIONS(253),
    [aux_sym_zero_or_more_token1] = ACTIONS(253),
    [aux_sym_one_or_more_token1] = ACTIONS(253),
    [sym_group_begin] = ACTIONS(253),
    [sym_group_end] = ACTIONS(253),
    [aux_sym_start_assertion_token1] = ACTIONS(253),
    [sym_end_assertion] = ACTIONS(253),
    [aux_sym_character_set_token1] = ACTIONS(253),
    [sym__invalid_character_set_delimiter] = ACTIONS(255),
    [sym__backslash] = ACTIONS(253),
    [sym_disjunction_delimiter] = ACTIONS(253),
    [sym_any_character] = ACTIONS(253),
    [sym__p_non_syntax_character] = ACTIONS(253),
    [sym_null_character] = ACTIONS(253),
    [sym__begin_count_quantifier] = ACTIONS(253),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(257),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(257),
    [aux_sym_optional_token1] = ACTIONS(257),
    [aux_sym_zero_or_more_token1] = ACTIONS(257),
    [aux_sym_one_or_more_token1] = ACTIONS(257),
    [sym_group_begin] = ACTIONS(257),
    [sym_group_end] = ACTIONS(257),
    [aux_sym_start_assertion_token1] = ACTIONS(257),
    [sym_end_assertion] = ACTIONS(257),
    [aux_sym_character_set_token1] = ACTIONS(257),
    [sym__invalid_character_set_delimiter] = ACTIONS(259),
    [sym__backslash] = ACTIONS(257),
    [sym_disjunction_delimiter] = ACTIONS(257),
    [sym_any_character] = ACTIONS(257),
    [sym__p_non_syntax_character] = ACTIONS(257),
    [sym_null_character] = ACTIONS(257),
    [sym__begin_count_quantifier] = ACTIONS(257),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(261),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(261),
    [aux_sym_optional_token1] = ACTIONS(261),
    [aux_sym_zero_or_more_token1] = ACTIONS(261),
    [aux_sym_one_or_more_token1] = ACTIONS(261),
    [sym_group_begin] = ACTIONS(261),
    [sym_group_end] = ACTIONS(261),
    [aux_sym_start_assertion_token1] = ACTIONS(261),
    [sym_end_assertion] = ACTIONS(261),
    [aux_sym_character_set_token1] = ACTIONS(261),
    [sym__invalid_character_set_delimiter] = ACTIONS(263),
    [sym__backslash] = ACTIONS(261),
    [sym_disjunction_delimiter] = ACTIONS(261),
    [sym_any_character] = ACTIONS(261),
    [sym__p_non_syntax_character] = ACTIONS(261),
    [sym_null_character] = ACTIONS(261),
    [sym__begin_count_quantifier] = ACTIONS(261),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(265),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(265),
    [aux_sym_optional_token1] = ACTIONS(265),
    [aux_sym_zero_or_more_token1] = ACTIONS(265),
    [aux_sym_one_or_more_token1] = ACTIONS(265),
    [sym_group_begin] = ACTIONS(265),
    [sym_group_end] = ACTIONS(265),
    [aux_sym_start_assertion_token1] = ACTIONS(265),
    [sym_end_assertion] = ACTIONS(265),
    [aux_sym_character_set_token1] = ACTIONS(265),
    [sym__invalid_character_set_delimiter] = ACTIONS(267),
    [sym__backslash] = ACTIONS(265),
    [sym_disjunction_delimiter] = ACTIONS(265),
    [sym_any_character] = ACTIONS(265),
    [sym__p_non_syntax_character] = ACTIONS(265),
    [sym_null_character] = ACTIONS(265),
    [sym__begin_count_quantifier] = ACTIONS(265),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(269),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(269),
    [aux_sym_optional_token1] = ACTIONS(269),
    [aux_sym_zero_or_more_token1] = ACTIONS(269),
    [aux_sym_one_or_more_token1] = ACTIONS(269),
    [sym_group_begin] = ACTIONS(269),
    [sym_group_end] = ACTIONS(269),
    [aux_sym_start_assertion_token1] = ACTIONS(269),
    [sym_end_assertion] = ACTIONS(269),
    [aux_sym_character_set_token1] = ACTIONS(269),
    [sym__invalid_character_set_delimiter] = ACTIONS(271),
    [sym__backslash] = ACTIONS(269),
    [sym_disjunction_delimiter] = ACTIONS(269),
    [sym_any_character] = ACTIONS(269),
    [sym__p_non_syntax_character] = ACTIONS(269),
    [sym_null_character] = ACTIONS(269),
    [sym__begin_count_quantifier] = ACTIONS(269),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(273),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(273),
    [aux_sym_optional_token1] = ACTIONS(273),
    [aux_sym_zero_or_more_token1] = ACTIONS(273),
    [aux_sym_one_or_more_token1] = ACTIONS(273),
    [sym_group_begin] = ACTIONS(273),
    [sym_group_end] = ACTIONS(273),
    [aux_sym_start_assertion_token1] = ACTIONS(273),
    [sym_end_assertion] = ACTIONS(273),
    [aux_sym_character_set_token1] = ACTIONS(273),
    [sym__invalid_character_set_delimiter] = ACTIONS(275),
    [sym__backslash] = ACTIONS(273),
    [sym_disjunction_delimiter] = ACTIONS(273),
    [sym_any_character] = ACTIONS(273),
    [sym__p_non_syntax_character] = ACTIONS(273),
    [sym_null_character] = ACTIONS(273),
    [sym__begin_count_quantifier] = ACTIONS(273),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(277),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(277),
    [aux_sym_optional_token1] = ACTIONS(277),
    [aux_sym_zero_or_more_token1] = ACTIONS(277),
    [aux_sym_one_or_more_token1] = ACTIONS(277),
    [sym_group_begin] = ACTIONS(277),
    [sym_group_end] = ACTIONS(277),
    [aux_sym_start_assertion_token1] = ACTIONS(277),
    [sym_end_assertion] = ACTIONS(277),
    [aux_sym_character_set_token1] = ACTIONS(277),
    [sym__invalid_character_set_delimiter] = ACTIONS(279),
    [sym__backslash] = ACTIONS(277),
    [sym_disjunction_delimiter] = ACTIONS(277),
    [sym_any_character] = ACTIONS(277),
    [sym__p_non_syntax_character] = ACTIONS(277),
    [sym_null_character] = ACTIONS(277),
    [sym__begin_count_quantifier] = ACTIONS(277),
  },
  [57] = {
    [sym_character_range] = STATE(57),
    [sym_character_class_escape] = STATE(57),
    [sym_DOLLARs_special_escape] = STATE(112),
    [sym_control_letter_escape] = STATE(112),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(112),
    [sym_octal_escape] = STATE(112),
    [sym_hexadecimal_escape] = STATE(112),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(112),
    [sym_unicode_escape] = STATE(112),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(112),
    [sym_DOLLARs_identity_escape] = STATE(112),
    [aux_sym_character_set_repeat1] = STATE(57),
    [aux_sym_character_set_token2] = ACTIONS(281),
    [sym__backslash] = ACTIONS(283),
    [sym__dash] = ACTIONS(286),
    [sym__s_non_syntax_character] = ACTIONS(289),
    [sym_null_character] = ACTIONS(289),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(292),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(292),
    [aux_sym_optional_token1] = ACTIONS(292),
    [aux_sym_zero_or_more_token1] = ACTIONS(292),
    [aux_sym_one_or_more_token1] = ACTIONS(292),
    [sym_group_begin] = ACTIONS(292),
    [sym_group_end] = ACTIONS(292),
    [aux_sym_start_assertion_token1] = ACTIONS(292),
    [sym_end_assertion] = ACTIONS(292),
    [aux_sym_character_set_token1] = ACTIONS(292),
    [sym__invalid_character_set_delimiter] = ACTIONS(294),
    [sym__backslash] = ACTIONS(292),
    [sym_disjunction_delimiter] = ACTIONS(292),
    [sym_any_character] = ACTIONS(292),
    [sym__p_non_syntax_character] = ACTIONS(292),
    [sym_null_character] = ACTIONS(292),
    [sym__begin_count_quantifier] = ACTIONS(292),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(296),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(296),
    [aux_sym_optional_token1] = ACTIONS(296),
    [aux_sym_zero_or_more_token1] = ACTIONS(296),
    [aux_sym_one_or_more_token1] = ACTIONS(296),
    [sym_group_begin] = ACTIONS(296),
    [sym_group_end] = ACTIONS(296),
    [aux_sym_start_assertion_token1] = ACTIONS(296),
    [sym_end_assertion] = ACTIONS(296),
    [aux_sym_character_set_token1] = ACTIONS(296),
    [sym__invalid_character_set_delimiter] = ACTIONS(298),
    [sym__backslash] = ACTIONS(296),
    [sym_disjunction_delimiter] = ACTIONS(296),
    [sym_any_character] = ACTIONS(296),
    [sym__p_non_syntax_character] = ACTIONS(296),
    [sym_null_character] = ACTIONS(296),
    [sym__begin_count_quantifier] = ACTIONS(296),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(300),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(300),
    [aux_sym_optional_token1] = ACTIONS(300),
    [aux_sym_zero_or_more_token1] = ACTIONS(300),
    [aux_sym_one_or_more_token1] = ACTIONS(300),
    [sym_group_begin] = ACTIONS(300),
    [sym_group_end] = ACTIONS(300),
    [aux_sym_start_assertion_token1] = ACTIONS(300),
    [sym_end_assertion] = ACTIONS(300),
    [aux_sym_character_set_token1] = ACTIONS(300),
    [sym__invalid_character_set_delimiter] = ACTIONS(302),
    [sym__backslash] = ACTIONS(300),
    [sym_disjunction_delimiter] = ACTIONS(300),
    [sym_any_character] = ACTIONS(300),
    [sym__p_non_syntax_character] = ACTIONS(300),
    [sym_null_character] = ACTIONS(300),
    [sym__begin_count_quantifier] = ACTIONS(300),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(304),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(304),
    [aux_sym_optional_token1] = ACTIONS(304),
    [aux_sym_zero_or_more_token1] = ACTIONS(304),
    [aux_sym_one_or_more_token1] = ACTIONS(304),
    [sym_group_begin] = ACTIONS(304),
    [sym_group_end] = ACTIONS(304),
    [aux_sym_start_assertion_token1] = ACTIONS(304),
    [sym_end_assertion] = ACTIONS(304),
    [aux_sym_character_set_token1] = ACTIONS(304),
    [sym__invalid_character_set_delimiter] = ACTIONS(306),
    [sym__backslash] = ACTIONS(304),
    [sym_disjunction_delimiter] = ACTIONS(304),
    [sym_any_character] = ACTIONS(304),
    [sym__p_non_syntax_character] = ACTIONS(304),
    [sym_null_character] = ACTIONS(304),
    [sym__begin_count_quantifier] = ACTIONS(304),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(308),
    [aux_sym_optional_token1] = ACTIONS(308),
    [aux_sym_zero_or_more_token1] = ACTIONS(308),
    [aux_sym_one_or_more_token1] = ACTIONS(308),
    [sym_group_begin] = ACTIONS(308),
    [sym_group_end] = ACTIONS(308),
    [aux_sym_start_assertion_token1] = ACTIONS(308),
    [sym_end_assertion] = ACTIONS(308),
    [aux_sym_character_set_token1] = ACTIONS(308),
    [sym__invalid_character_set_delimiter] = ACTIONS(310),
    [sym__backslash] = ACTIONS(308),
    [sym_disjunction_delimiter] = ACTIONS(308),
    [sym_any_character] = ACTIONS(308),
    [sym__p_non_syntax_character] = ACTIONS(308),
    [sym_null_character] = ACTIONS(308),
    [sym__begin_count_quantifier] = ACTIONS(308),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(312),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(312),
    [aux_sym_optional_token1] = ACTIONS(312),
    [aux_sym_zero_or_more_token1] = ACTIONS(312),
    [aux_sym_one_or_more_token1] = ACTIONS(312),
    [sym_group_begin] = ACTIONS(312),
    [sym_group_end] = ACTIONS(312),
    [aux_sym_start_assertion_token1] = ACTIONS(312),
    [sym_end_assertion] = ACTIONS(312),
    [aux_sym_character_set_token1] = ACTIONS(312),
    [sym__invalid_character_set_delimiter] = ACTIONS(314),
    [sym__backslash] = ACTIONS(312),
    [sym_disjunction_delimiter] = ACTIONS(312),
    [sym_any_character] = ACTIONS(312),
    [sym__p_non_syntax_character] = ACTIONS(312),
    [sym_null_character] = ACTIONS(312),
    [sym__begin_count_quantifier] = ACTIONS(312),
  },
  [64] = {
    [ts_builtin_sym_end] = ACTIONS(316),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(316),
    [aux_sym_optional_token1] = ACTIONS(316),
    [aux_sym_zero_or_more_token1] = ACTIONS(316),
    [aux_sym_one_or_more_token1] = ACTIONS(316),
    [sym_group_begin] = ACTIONS(316),
    [sym_group_end] = ACTIONS(316),
    [aux_sym_start_assertion_token1] = ACTIONS(316),
    [sym_end_assertion] = ACTIONS(316),
    [aux_sym_character_set_token1] = ACTIONS(316),
    [sym__invalid_character_set_delimiter] = ACTIONS(318),
    [sym__backslash] = ACTIONS(316),
    [sym_disjunction_delimiter] = ACTIONS(316),
    [sym_any_character] = ACTIONS(316),
    [sym__p_non_syntax_character] = ACTIONS(316),
    [sym_null_character] = ACTIONS(316),
    [sym__begin_count_quantifier] = ACTIONS(316),
  },
  [65] = {
    [sym_character_range] = STATE(57),
    [sym_character_class_escape] = STATE(57),
    [sym_DOLLARs_special_escape] = STATE(112),
    [sym_control_letter_escape] = STATE(112),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(112),
    [sym_octal_escape] = STATE(112),
    [sym_hexadecimal_escape] = STATE(112),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(112),
    [sym_unicode_escape] = STATE(112),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(112),
    [sym_DOLLARs_identity_escape] = STATE(112),
    [aux_sym_character_set_repeat1] = STATE(57),
    [aux_sym_character_set_token2] = ACTIONS(320),
    [sym__backslash] = ACTIONS(129),
    [sym__dash] = ACTIONS(131),
    [sym__s_non_syntax_character] = ACTIONS(135),
    [sym_null_character] = ACTIONS(135),
  },
  [66] = {
    [ts_builtin_sym_end] = ACTIONS(322),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(322),
    [aux_sym_optional_token1] = ACTIONS(324),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(326),
    [sym_group_begin] = ACTIONS(322),
    [sym_group_end] = ACTIONS(322),
    [aux_sym_start_assertion_token1] = ACTIONS(322),
    [sym_end_assertion] = ACTIONS(322),
    [aux_sym_character_set_token1] = ACTIONS(322),
    [sym__invalid_character_set_delimiter] = ACTIONS(326),
    [sym__backslash] = ACTIONS(322),
    [sym_disjunction_delimiter] = ACTIONS(322),
    [sym_any_character] = ACTIONS(322),
    [sym__p_non_syntax_character] = ACTIONS(322),
    [sym_null_character] = ACTIONS(322),
    [sym__begin_count_quantifier] = ACTIONS(322),
  },
  [67] = {
    [ts_builtin_sym_end] = ACTIONS(328),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(328),
    [aux_sym_optional_token1] = ACTIONS(330),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(332),
    [sym_group_begin] = ACTIONS(328),
    [sym_group_end] = ACTIONS(328),
    [aux_sym_start_assertion_token1] = ACTIONS(328),
    [sym_end_assertion] = ACTIONS(328),
    [aux_sym_character_set_token1] = ACTIONS(328),
    [sym__invalid_character_set_delimiter] = ACTIONS(332),
    [sym__backslash] = ACTIONS(328),
    [sym_disjunction_delimiter] = ACTIONS(328),
    [sym_any_character] = ACTIONS(328),
    [sym__p_non_syntax_character] = ACTIONS(328),
    [sym_null_character] = ACTIONS(328),
    [sym__begin_count_quantifier] = ACTIONS(328),
  },
  [68] = {
    [ts_builtin_sym_end] = ACTIONS(334),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(334),
    [aux_sym_optional_token1] = ACTIONS(336),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(338),
    [sym_group_begin] = ACTIONS(334),
    [sym_group_end] = ACTIONS(334),
    [aux_sym_start_assertion_token1] = ACTIONS(334),
    [sym_end_assertion] = ACTIONS(334),
    [aux_sym_character_set_token1] = ACTIONS(334),
    [sym__invalid_character_set_delimiter] = ACTIONS(338),
    [sym__backslash] = ACTIONS(334),
    [sym_disjunction_delimiter] = ACTIONS(334),
    [sym_any_character] = ACTIONS(334),
    [sym__p_non_syntax_character] = ACTIONS(334),
    [sym_null_character] = ACTIONS(334),
    [sym__begin_count_quantifier] = ACTIONS(334),
  },
  [69] = {
    [aux_sym_DOLLARquantifier_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(340),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(340),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(342),
    [sym_group_begin] = ACTIONS(340),
    [sym_group_end] = ACTIONS(340),
    [aux_sym_start_assertion_token1] = ACTIONS(340),
    [sym_end_assertion] = ACTIONS(340),
    [aux_sym_character_set_token1] = ACTIONS(340),
    [sym__invalid_character_set_delimiter] = ACTIONS(345),
    [sym__backslash] = ACTIONS(340),
    [sym_disjunction_delimiter] = ACTIONS(340),
    [sym_any_character] = ACTIONS(340),
    [sym__p_non_syntax_character] = ACTIONS(340),
    [sym_null_character] = ACTIONS(340),
    [sym__begin_count_quantifier] = ACTIONS(347),
  },
  [70] = {
    [ts_builtin_sym_end] = ACTIONS(350),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(350),
    [aux_sym_optional_token1] = ACTIONS(352),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(354),
    [sym_group_begin] = ACTIONS(350),
    [sym_group_end] = ACTIONS(350),
    [aux_sym_start_assertion_token1] = ACTIONS(350),
    [sym_end_assertion] = ACTIONS(350),
    [aux_sym_character_set_token1] = ACTIONS(350),
    [sym__invalid_character_set_delimiter] = ACTIONS(354),
    [sym__backslash] = ACTIONS(350),
    [sym_disjunction_delimiter] = ACTIONS(350),
    [sym_any_character] = ACTIONS(350),
    [sym__p_non_syntax_character] = ACTIONS(350),
    [sym_null_character] = ACTIONS(350),
    [sym__begin_count_quantifier] = ACTIONS(350),
  },
  [71] = {
    [sym_unicode_escape] = STATE(76),
    [aux_sym_group_name_repeat1] = STATE(76),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(356),
    [aux_sym_named_backreference_token2] = ACTIONS(356),
    [aux_sym_group_name_token1] = ACTIONS(358),
    [sym_group_begin] = ACTIONS(356),
    [sym_group_end] = ACTIONS(356),
    [aux_sym_start_assertion_token1] = ACTIONS(356),
    [sym_end_assertion] = ACTIONS(360),
    [aux_sym_character_set_token1] = ACTIONS(356),
    [sym__invalid_character_set_delimiter] = ACTIONS(360),
    [sym__backslash] = ACTIONS(362),
    [sym_disjunction_delimiter] = ACTIONS(356),
    [sym_any_character] = ACTIONS(356),
    [sym__p_non_syntax_character] = ACTIONS(360),
    [sym_null_character] = ACTIONS(356),
  },
  [72] = {
    [ts_builtin_sym_end] = ACTIONS(364),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(364),
    [aux_sym_optional_token1] = ACTIONS(366),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(368),
    [sym_group_begin] = ACTIONS(364),
    [sym_group_end] = ACTIONS(364),
    [aux_sym_start_assertion_token1] = ACTIONS(364),
    [sym_end_assertion] = ACTIONS(364),
    [aux_sym_character_set_token1] = ACTIONS(364),
    [sym__invalid_character_set_delimiter] = ACTIONS(368),
    [sym__backslash] = ACTIONS(364),
    [sym_disjunction_delimiter] = ACTIONS(364),
    [sym_any_character] = ACTIONS(364),
    [sym__p_non_syntax_character] = ACTIONS(364),
    [sym_null_character] = ACTIONS(364),
    [sym__begin_count_quantifier] = ACTIONS(364),
  },
  [73] = {
    [aux_sym_DOLLARquantifier_repeat1] = STATE(74),
    [ts_builtin_sym_end] = ACTIONS(75),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(75),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(370),
    [sym_group_begin] = ACTIONS(75),
    [sym_group_end] = ACTIONS(75),
    [aux_sym_start_assertion_token1] = ACTIONS(75),
    [sym_end_assertion] = ACTIONS(75),
    [aux_sym_character_set_token1] = ACTIONS(75),
    [sym__invalid_character_set_delimiter] = ACTIONS(372),
    [sym__backslash] = ACTIONS(75),
    [sym_disjunction_delimiter] = ACTIONS(75),
    [sym_any_character] = ACTIONS(75),
    [sym__p_non_syntax_character] = ACTIONS(75),
    [sym_null_character] = ACTIONS(75),
    [sym__begin_count_quantifier] = ACTIONS(374),
  },
  [74] = {
    [aux_sym_DOLLARquantifier_repeat1] = STATE(69),
    [ts_builtin_sym_end] = ACTIONS(376),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(376),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(378),
    [sym_group_begin] = ACTIONS(376),
    [sym_group_end] = ACTIONS(376),
    [aux_sym_start_assertion_token1] = ACTIONS(376),
    [sym_end_assertion] = ACTIONS(376),
    [aux_sym_character_set_token1] = ACTIONS(376),
    [sym__invalid_character_set_delimiter] = ACTIONS(380),
    [sym__backslash] = ACTIONS(376),
    [sym_disjunction_delimiter] = ACTIONS(376),
    [sym_any_character] = ACTIONS(376),
    [sym__p_non_syntax_character] = ACTIONS(376),
    [sym_null_character] = ACTIONS(376),
    [sym__begin_count_quantifier] = ACTIONS(374),
  },
  [75] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(382),
    [aux_sym_optional_token1] = ACTIONS(384),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(386),
    [sym_group_begin] = ACTIONS(382),
    [sym_group_end] = ACTIONS(382),
    [aux_sym_start_assertion_token1] = ACTIONS(382),
    [sym_end_assertion] = ACTIONS(382),
    [aux_sym_character_set_token1] = ACTIONS(382),
    [sym__invalid_character_set_delimiter] = ACTIONS(386),
    [sym__backslash] = ACTIONS(382),
    [sym_disjunction_delimiter] = ACTIONS(382),
    [sym_any_character] = ACTIONS(382),
    [sym__p_non_syntax_character] = ACTIONS(382),
    [sym_null_character] = ACTIONS(382),
    [sym__begin_count_quantifier] = ACTIONS(382),
  },
  [76] = {
    [sym_unicode_escape] = STATE(76),
    [aux_sym_group_name_repeat1] = STATE(76),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(388),
    [aux_sym_named_backreference_token2] = ACTIONS(388),
    [aux_sym_group_name_token1] = ACTIONS(390),
    [sym_group_begin] = ACTIONS(388),
    [sym_group_end] = ACTIONS(388),
    [aux_sym_start_assertion_token1] = ACTIONS(388),
    [sym_end_assertion] = ACTIONS(393),
    [aux_sym_character_set_token1] = ACTIONS(388),
    [sym__invalid_character_set_delimiter] = ACTIONS(393),
    [sym__backslash] = ACTIONS(395),
    [sym_disjunction_delimiter] = ACTIONS(388),
    [sym_any_character] = ACTIONS(388),
    [sym__p_non_syntax_character] = ACTIONS(393),
    [sym_null_character] = ACTIONS(388),
  },
  [77] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(398),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(398),
    [sym_group_begin] = ACTIONS(398),
    [sym_group_end] = ACTIONS(398),
    [aux_sym_start_assertion_token1] = ACTIONS(398),
    [sym_end_assertion] = ACTIONS(398),
    [aux_sym_character_set_token1] = ACTIONS(398),
    [sym__invalid_character_set_delimiter] = ACTIONS(400),
    [sym__backslash] = ACTIONS(398),
    [sym_disjunction_delimiter] = ACTIONS(398),
    [sym_any_character] = ACTIONS(398),
    [sym__p_non_syntax_character] = ACTIONS(398),
    [sym_null_character] = ACTIONS(398),
    [sym__begin_count_quantifier] = ACTIONS(398),
  },
  [78] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(402),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(402),
    [sym_group_begin] = ACTIONS(402),
    [sym_group_end] = ACTIONS(402),
    [aux_sym_start_assertion_token1] = ACTIONS(402),
    [sym_end_assertion] = ACTIONS(402),
    [aux_sym_character_set_token1] = ACTIONS(402),
    [sym__invalid_character_set_delimiter] = ACTIONS(404),
    [sym__backslash] = ACTIONS(402),
    [sym_disjunction_delimiter] = ACTIONS(402),
    [sym_any_character] = ACTIONS(402),
    [sym__p_non_syntax_character] = ACTIONS(402),
    [sym_null_character] = ACTIONS(402),
    [sym__begin_count_quantifier] = ACTIONS(402),
  },
  [79] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(406),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(406),
    [sym_group_begin] = ACTIONS(406),
    [sym_group_end] = ACTIONS(406),
    [aux_sym_start_assertion_token1] = ACTIONS(406),
    [sym_end_assertion] = ACTIONS(406),
    [aux_sym_character_set_token1] = ACTIONS(406),
    [sym__invalid_character_set_delimiter] = ACTIONS(408),
    [sym__backslash] = ACTIONS(406),
    [sym_disjunction_delimiter] = ACTIONS(406),
    [sym_any_character] = ACTIONS(406),
    [sym__p_non_syntax_character] = ACTIONS(406),
    [sym_null_character] = ACTIONS(406),
    [sym__begin_count_quantifier] = ACTIONS(406),
  },
  [80] = {
    [ts_builtin_sym_end] = ACTIONS(410),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(410),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(410),
    [sym_group_begin] = ACTIONS(410),
    [sym_group_end] = ACTIONS(410),
    [aux_sym_start_assertion_token1] = ACTIONS(410),
    [sym_end_assertion] = ACTIONS(410),
    [aux_sym_character_set_token1] = ACTIONS(410),
    [sym__invalid_character_set_delimiter] = ACTIONS(412),
    [sym__backslash] = ACTIONS(410),
    [sym_disjunction_delimiter] = ACTIONS(410),
    [sym_any_character] = ACTIONS(410),
    [sym__p_non_syntax_character] = ACTIONS(410),
    [sym_null_character] = ACTIONS(410),
    [sym__begin_count_quantifier] = ACTIONS(410),
  },
  [81] = {
    [ts_builtin_sym_end] = ACTIONS(340),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(340),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(340),
    [sym_group_begin] = ACTIONS(340),
    [sym_group_end] = ACTIONS(340),
    [aux_sym_start_assertion_token1] = ACTIONS(340),
    [sym_end_assertion] = ACTIONS(340),
    [aux_sym_character_set_token1] = ACTIONS(340),
    [sym__invalid_character_set_delimiter] = ACTIONS(345),
    [sym__backslash] = ACTIONS(340),
    [sym_disjunction_delimiter] = ACTIONS(340),
    [sym_any_character] = ACTIONS(340),
    [sym__p_non_syntax_character] = ACTIONS(340),
    [sym_null_character] = ACTIONS(340),
    [sym__begin_count_quantifier] = ACTIONS(340),
  },
  [82] = {
    [ts_builtin_sym_end] = ACTIONS(414),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(414),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(414),
    [sym_group_begin] = ACTIONS(414),
    [sym_group_end] = ACTIONS(414),
    [aux_sym_start_assertion_token1] = ACTIONS(414),
    [sym_end_assertion] = ACTIONS(414),
    [aux_sym_character_set_token1] = ACTIONS(414),
    [sym__invalid_character_set_delimiter] = ACTIONS(416),
    [sym__backslash] = ACTIONS(414),
    [sym_disjunction_delimiter] = ACTIONS(414),
    [sym_any_character] = ACTIONS(414),
    [sym__p_non_syntax_character] = ACTIONS(414),
    [sym_null_character] = ACTIONS(414),
    [sym__begin_count_quantifier] = ACTIONS(414),
  },
  [83] = {
    [ts_builtin_sym_end] = ACTIONS(418),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(418),
    [aux_sym_DOLLARinvalid_extra_quantifier_token1] = ACTIONS(418),
    [sym_group_begin] = ACTIONS(418),
    [sym_group_end] = ACTIONS(418),
    [aux_sym_start_assertion_token1] = ACTIONS(418),
    [sym_end_assertion] = ACTIONS(418),
    [aux_sym_character_set_token1] = ACTIONS(418),
    [sym__invalid_character_set_delimiter] = ACTIONS(420),
    [sym__backslash] = ACTIONS(418),
    [sym_disjunction_delimiter] = ACTIONS(418),
    [sym_any_character] = ACTIONS(418),
    [sym__p_non_syntax_character] = ACTIONS(418),
    [sym_null_character] = ACTIONS(418),
    [sym__begin_count_quantifier] = ACTIONS(418),
  },
  [84] = {
    [sym_DOLLARnonconforming_unicode_escape] = STATE(96),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(422),
    [aux_sym_named_backreference_token2] = ACTIONS(424),
    [sym_group_begin] = ACTIONS(422),
    [sym_group_end] = ACTIONS(422),
    [aux_sym_start_assertion_token1] = ACTIONS(422),
    [sym_end_assertion] = ACTIONS(422),
    [aux_sym_character_set_token1] = ACTIONS(422),
    [sym__invalid_character_set_delimiter] = ACTIONS(426),
    [sym__backslash] = ACTIONS(428),
    [sym_disjunction_delimiter] = ACTIONS(422),
    [sym_any_character] = ACTIONS(422),
    [sym__p_non_syntax_character] = ACTIONS(426),
    [sym_null_character] = ACTIONS(422),
  },
  [85] = {
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(261),
    [aux_sym_named_backreference_token2] = ACTIONS(261),
    [aux_sym_group_name_token1] = ACTIONS(261),
    [sym_group_begin] = ACTIONS(261),
    [sym_group_end] = ACTIONS(261),
    [aux_sym_start_assertion_token1] = ACTIONS(261),
    [sym_end_assertion] = ACTIONS(263),
    [aux_sym_character_set_token1] = ACTIONS(261),
    [sym__invalid_character_set_delimiter] = ACTIONS(263),
    [sym__backslash] = ACTIONS(261),
    [sym_disjunction_delimiter] = ACTIONS(261),
    [sym_any_character] = ACTIONS(261),
    [sym__p_non_syntax_character] = ACTIONS(263),
    [sym_null_character] = ACTIONS(261),
  },
  [86] = {
    [sym_DOLLARs_special_escape] = STATE(118),
    [sym_control_letter_escape] = STATE(118),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(118),
    [sym_octal_escape] = STATE(118),
    [sym_hexadecimal_escape] = STATE(118),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(118),
    [sym_unicode_escape] = STATE(118),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(118),
    [sym_DOLLARs_identity_escape] = STATE(118),
    [sym__backslash] = ACTIONS(430),
    [sym__dash] = ACTIONS(432),
    [sym__s_non_syntax_character] = ACTIONS(434),
    [sym_null_character] = ACTIONS(434),
  },
  [87] = {
    [ts_builtin_sym_end] = ACTIONS(436),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(436),
    [sym_group_begin] = ACTIONS(436),
    [sym_group_end] = ACTIONS(436),
    [aux_sym_start_assertion_token1] = ACTIONS(436),
    [sym_end_assertion] = ACTIONS(436),
    [aux_sym_character_set_token1] = ACTIONS(436),
    [sym__invalid_character_set_delimiter] = ACTIONS(438),
    [sym__backslash] = ACTIONS(436),
    [sym_disjunction_delimiter] = ACTIONS(436),
    [sym_any_character] = ACTIONS(436),
    [sym__p_non_syntax_character] = ACTIONS(436),
    [sym_null_character] = ACTIONS(436),
  },
  [88] = {
    [sym_DOLLARs_special_escape] = STATE(115),
    [sym_control_letter_escape] = STATE(115),
    [sym_DOLLARnonconforming_control_letter_escape] = STATE(115),
    [sym_octal_escape] = STATE(115),
    [sym_hexadecimal_escape] = STATE(115),
    [sym_DOLLARnonconforming_hexadecimal_escape] = STATE(115),
    [sym_unicode_escape] = STATE(115),
    [sym_DOLLARnonconforming_unicode_escape] = STATE(115),
    [sym_DOLLARs_identity_escape] = STATE(115),
    [sym__backslash] = ACTIONS(430),
    [sym__dash] = ACTIONS(440),
    [sym__s_non_syntax_character] = ACTIONS(442),
    [sym_null_character] = ACTIONS(442),
  },
  [89] = {
    [ts_builtin_sym_end] = ACTIONS(444),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(444),
    [sym_group_begin] = ACTIONS(444),
    [sym_group_end] = ACTIONS(444),
    [aux_sym_start_assertion_token1] = ACTIONS(444),
    [sym_end_assertion] = ACTIONS(444),
    [aux_sym_character_set_token1] = ACTIONS(444),
    [sym__invalid_character_set_delimiter] = ACTIONS(446),
    [sym__backslash] = ACTIONS(444),
    [sym_disjunction_delimiter] = ACTIONS(444),
    [sym_any_character] = ACTIONS(444),
    [sym__p_non_syntax_character] = ACTIONS(444),
    [sym_null_character] = ACTIONS(444),
  },
  [90] = {
    [ts_builtin_sym_end] = ACTIONS(448),
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(448),
    [sym_group_begin] = ACTIONS(448),
    [sym_group_end] = ACTIONS(448),
    [aux_sym_start_assertion_token1] = ACTIONS(448),
    [sym_end_assertion] = ACTIONS(448),
    [aux_sym_character_set_token1] = ACTIONS(448),
    [sym__invalid_character_set_delimiter] = ACTIONS(450),
    [sym__backslash] = ACTIONS(448),
    [sym_disjunction_delimiter] = ACTIONS(448),
    [sym_any_character] = ACTIONS(448),
    [sym__p_non_syntax_character] = ACTIONS(448),
    [sym_null_character] = ACTIONS(448),
  },
  [91] = {
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(137),
    [sym_group_begin] = ACTIONS(137),
    [sym_group_end] = ACTIONS(137),
    [aux_sym_start_assertion_token1] = ACTIONS(137),
    [sym_end_assertion] = ACTIONS(137),
    [aux_sym_character_set_token1] = ACTIONS(137),
    [sym__invalid_character_set_delimiter] = ACTIONS(139),
    [aux_sym_unicode_escape_token2] = ACTIONS(452),
    [sym__backslash] = ACTIONS(137),
    [sym_disjunction_delimiter] = ACTIONS(137),
    [sym_any_character] = ACTIONS(137),
    [sym__p_non_syntax_character] = ACTIONS(139),
    [sym_null_character] = ACTIONS(137),
  },
  [92] = {
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(229),
    [sym_group_begin] = ACTIONS(229),
    [sym_group_end] = ACTIONS(229),
    [aux_sym_start_assertion_token1] = ACTIONS(229),
    [sym_end_assertion] = ACTIONS(229),
    [aux_sym_character_set_token1] = ACTIONS(229),
    [sym__invalid_character_set_delimiter] = ACTIONS(233),
    [sym__backslash] = ACTIONS(229),
    [sym_disjunction_delimiter] = ACTIONS(229),
    [sym_any_character] = ACTIONS(229),
    [sym__p_non_syntax_character] = ACTIONS(229),
    [sym_null_character] = ACTIONS(229),
  },
  [93] = {
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(454),
    [sym_group_begin] = ACTIONS(454),
    [sym_group_end] = ACTIONS(454),
    [aux_sym_start_assertion_token1] = ACTIONS(454),
    [sym_end_assertion] = ACTIONS(454),
    [aux_sym_character_set_token1] = ACTIONS(454),
    [sym__invalid_character_set_delimiter] = ACTIONS(456),
    [sym__backslash] = ACTIONS(454),
    [sym_disjunction_delimiter] = ACTIONS(454),
    [sym_any_character] = ACTIONS(454),
    [sym__p_non_syntax_character] = ACTIONS(454),
    [sym_null_character] = ACTIONS(454),
  },
  [94] = {
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(137),
    [sym_group_begin] = ACTIONS(137),
    [sym_group_end] = ACTIONS(137),
    [aux_sym_start_assertion_token1] = ACTIONS(137),
    [sym_end_assertion] = ACTIONS(137),
    [aux_sym_character_set_token1] = ACTIONS(137),
    [sym__invalid_character_set_delimiter] = ACTIONS(139),
    [sym__backslash] = ACTIONS(137),
    [sym_disjunction_delimiter] = ACTIONS(137),
    [sym_any_character] = ACTIONS(137),
    [sym__p_non_syntax_character] = ACTIONS(137),
    [sym_null_character] = ACTIONS(137),
  },
  [95] = {
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(422),
    [sym_group_begin] = ACTIONS(422),
    [sym_group_end] = ACTIONS(422),
    [aux_sym_start_assertion_token1] = ACTIONS(422),
    [sym_end_assertion] = ACTIONS(422),
    [aux_sym_character_set_token1] = ACTIONS(422),
    [sym__invalid_character_set_delimiter] = ACTIONS(426),
    [sym__backslash] = ACTIONS(422),
    [sym_disjunction_delimiter] = ACTIONS(422),
    [sym_any_character] = ACTIONS(422),
    [sym__p_non_syntax_character] = ACTIONS(422),
    [sym_null_character] = ACTIONS(422),
  },
  [96] = {
    [aux_sym_DOLLARrepeatable_symbol_token1] = ACTIONS(458),
    [sym_group_begin] = ACTIONS(458),
    [sym_group_end] = ACTIONS(458),
    [aux_sym_start_assertion_token1] = ACTIONS(458),
    [sym_end_assertion] = ACTIONS(458),
    [aux_sym_character_set_token1] = ACTIONS(458),
    [sym__invalid_character_set_delimiter] = ACTIONS(460),
    [sym__backslash] = ACTIONS(458),
    [sym_disjunction_delimiter] = ACTIONS(458),
    [sym_any_character] = ACTIONS(458),
    [sym__p_non_syntax_character] = ACTIONS(458),
    [sym_null_character] = ACTIONS(458),
  },
  [97] = {
    [aux_sym_numeric_backreference_token1] = ACTIONS(462),
    [aux_sym_DOLLARnamed_backreference_prefix_token1] = ACTIONS(464),
    [aux_sym_boundary_assertion_token1] = ACTIONS(466),
    [aux_sym_non_boundary_assertion_token1] = ACTIONS(468),
    [aux_sym_character_class_escape_token1] = ACTIONS(470),
    [aux_sym_DOLLARp_special_escape_token1] = ACTIONS(472),
    [aux_sym_control_letter_escape_token1] = ACTIONS(474),
    [aux_sym_octal_escape_token1] = ACTIONS(476),
    [aux_sym_hexadecimal_escape_token1] = ACTIONS(478),
    [aux_sym_unicode_escape_token1] = ACTIONS(480),
    [aux_sym_DOLLARp_identity_escape_token1] = ACTIONS(482),
  },
  [98] = {
    [aux_sym_character_class_escape_token1] = ACTIONS(484),
    [aux_sym_DOLLARs_special_escape_token1] = ACTIONS(486),
    [aux_sym_control_letter_escape_token1] = ACTIONS(488),
    [aux_sym_octal_escape_token1] = ACTIONS(490),
    [aux_sym_hexadecimal_escape_token1] = ACTIONS(492),
    [aux_sym_unicode_escape_token1] = ACTIONS(494),
    [aux_sym_DOLLARs_identity_escape_token1] = ACTIONS(496),
  },
  [99] = {
    [aux_sym_DOLLARs_special_escape_token1] = ACTIONS(486),
    [aux_sym_control_letter_escape_token1] = ACTIONS(488),
    [aux_sym_octal_escape_token1] = ACTIONS(490),
    [aux_sym_hexadecimal_escape_token1] = ACTIONS(492),
    [aux_sym_unicode_escape_token1] = ACTIONS(494),
    [aux_sym_DOLLARs_identity_escape_token1] = ACTIONS(496),
  },
  [100] = {
    [aux_sym_character_set_token2] = ACTIONS(137),
    [aux_sym_unicode_escape_token2] = ACTIONS(498),
    [sym__backslash] = ACTIONS(137),
    [sym__dash] = ACTIONS(137),
    [sym__s_non_syntax_character] = ACTIONS(139),
    [sym_null_character] = ACTIONS(137),
  },
  [101] = {
    [aux_sym_character_set_token2] = ACTIONS(143),
    [aux_sym_hexadecimal_escape_token2] = ACTIONS(500),
    [sym__backslash] = ACTIONS(143),
    [sym__dash] = ACTIONS(143),
    [sym__s_non_syntax_character] = ACTIONS(145),
    [sym_null_character] = ACTIONS(143),
  },
  [102] = {
    [aux_sym_character_set_token2] = ACTIONS(149),
    [aux_sym_control_letter_escape_token2] = ACTIONS(502),
    [sym__backslash] = ACTIONS(149),
    [sym__dash] = ACTIONS(149),
    [sym__s_non_syntax_character] = ACTIONS(151),
    [sym_null_character] = ACTIONS(149),
  },
  [103] = {
    [aux_sym_character_set_token2] = ACTIONS(504),
    [sym__backslash] = ACTIONS(504),
    [sym__dash] = ACTIONS(504),
    [sym__s_non_syntax_character] = ACTIONS(504),
    [sym_null_character] = ACTIONS(504),
  },
  [104] = {
    [aux_sym_character_set_token2] = ACTIONS(261),
    [sym__backslash] = ACTIONS(261),
    [sym__dash] = ACTIONS(261),
    [sym__s_non_syntax_character] = ACTIONS(261),
    [sym_null_character] = ACTIONS(261),
  },
  [105] = {
    [sym_unicode_escape] = STATE(105),
    [aux_sym_group_name_repeat1] = STATE(105),
    [aux_sym_named_backreference_token2] = ACTIONS(388),
    [aux_sym_group_name_token1] = ACTIONS(506),
    [sym__backslash] = ACTIONS(509),
  },
  [106] = {
    [aux_sym_character_set_token2] = ACTIONS(512),
    [sym__backslash] = ACTIONS(512),
    [sym__dash] = ACTIONS(514),
    [sym__s_non_syntax_character] = ACTIONS(512),
    [sym_null_character] = ACTIONS(512),
  },
  [107] = {
    [aux_sym_character_set_token2] = ACTIONS(265),
    [sym__backslash] = ACTIONS(265),
    [sym__dash] = ACTIONS(265),
    [sym__s_non_syntax_character] = ACTIONS(265),
    [sym_null_character] = ACTIONS(265),
  },
  [108] = {
    [aux_sym_character_set_token2] = ACTIONS(269),
    [sym__backslash] = ACTIONS(269),
    [sym__dash] = ACTIONS(269),
    [sym__s_non_syntax_character] = ACTIONS(269),
    [sym_null_character] = ACTIONS(269),
  },
  [109] = {
    [aux_sym_character_set_token2] = ACTIONS(277),
    [sym__backslash] = ACTIONS(277),
    [sym__dash] = ACTIONS(277),
    [sym__s_non_syntax_character] = ACTIONS(277),
    [sym_null_character] = ACTIONS(277),
  },
  [110] = {
    [sym_unicode_escape] = STATE(105),
    [aux_sym_group_name_repeat1] = STATE(105),
    [aux_sym_named_backreference_token2] = ACTIONS(356),
    [aux_sym_group_name_token1] = ACTIONS(517),
    [sym__backslash] = ACTIONS(519),
  },
  [111] = {
    [aux_sym_character_set_token2] = ACTIONS(205),
    [sym__backslash] = ACTIONS(205),
    [sym__dash] = ACTIONS(205),
    [sym__s_non_syntax_character] = ACTIONS(205),
    [sym_null_character] = ACTIONS(205),
  },
  [112] = {
    [aux_sym_character_set_token2] = ACTIONS(521),
    [sym__backslash] = ACTIONS(521),
    [sym__dash] = ACTIONS(523),
    [sym__s_non_syntax_character] = ACTIONS(521),
    [sym_null_character] = ACTIONS(521),
  },
  [113] = {
    [aux_sym_character_set_token2] = ACTIONS(526),
    [sym__backslash] = ACTIONS(526),
    [sym__dash] = ACTIONS(526),
    [sym__s_non_syntax_character] = ACTIONS(526),
    [sym_null_character] = ACTIONS(526),
  },
  [114] = {
    [sym_group_name] = STATE(144),
    [sym_unicode_escape] = STATE(110),
    [aux_sym_group_name_repeat1] = STATE(110),
    [aux_sym_group_name_token1] = ACTIONS(528),
    [sym__backslash] = ACTIONS(519),
  },
  [115] = {
    [aux_sym_character_set_token2] = ACTIONS(530),
    [sym__backslash] = ACTIONS(530),
    [sym__dash] = ACTIONS(530),
    [sym__s_non_syntax_character] = ACTIONS(530),
    [sym_null_character] = ACTIONS(530),
  },
  [116] = {
    [aux_sym_character_set_token2] = ACTIONS(532),
    [sym__backslash] = ACTIONS(532),
    [sym__dash] = ACTIONS(532),
    [sym__s_non_syntax_character] = ACTIONS(532),
    [sym_null_character] = ACTIONS(532),
  },
  [117] = {
    [aux_sym_character_set_token2] = ACTIONS(534),
    [sym__backslash] = ACTIONS(534),
    [sym__dash] = ACTIONS(534),
    [sym__s_non_syntax_character] = ACTIONS(534),
    [sym_null_character] = ACTIONS(534),
  },
  [118] = {
    [aux_sym_character_set_token2] = ACTIONS(536),
    [sym__backslash] = ACTIONS(536),
    [sym__dash] = ACTIONS(536),
    [sym__s_non_syntax_character] = ACTIONS(536),
    [sym_null_character] = ACTIONS(536),
  },
  [119] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(101),
    [sym_group_end] = ACTIONS(101),
    [sym_disjunction_delimiter] = ACTIONS(538),
  },
  [120] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(541),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [121] = {
    [aux_sym_named_backreference_token2] = ACTIONS(261),
    [aux_sym_group_name_token1] = ACTIONS(261),
    [sym__backslash] = ACTIONS(261),
  },
  [122] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(69),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [123] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(107),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [124] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(543),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [125] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(63),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [126] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(43),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [127] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(545),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [128] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(547),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [129] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(61),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [130] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(549),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [131] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(67),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [132] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [133] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(55),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [134] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(551),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [135] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(553),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [136] = {
    [aux_sym_DOLLARdisjunction_repeat1] = STATE(119),
    [sym_group_end] = ACTIONS(555),
    [sym_disjunction_delimiter] = ACTIONS(17),
  },
  [137] = {
    [aux_sym_count_quantifier_token2] = ACTIONS(557),
    [aux_sym_count_quantifier_token3] = ACTIONS(559),
  },
  [138] = {
    [aux_sym_count_quantifier_token1] = ACTIONS(561),
    [aux_sym_count_quantifier_token3] = ACTIONS(563),
  },
  [139] = {
    [aux_sym_octal_escape_token2] = ACTIONS(565),
  },
  [140] = {
    [ts_builtin_sym_end] = ACTIONS(567),
  },
  [141] = {
    [aux_sym_unicode_escape_token1] = ACTIONS(569),
  },
  [142] = {
    [aux_sym_unicode_escape_token1] = ACTIONS(571),
  },
  [143] = {
    [aux_sym_count_quantifier_token3] = ACTIONS(573),
  },
  [144] = {
    [aux_sym_named_backreference_token2] = ACTIONS(575),
  },
  [145] = {
    [aux_sym_unicode_escape_token1] = ACTIONS(577),
  },
  [146] = {
    [aux_sym_DOLLARinvalid_extra_quantifier_token2] = ACTIONS(579),
  },
  [147] = {
    [aux_sym_unicode_escape_token2] = ACTIONS(452),
  },
  [148] = {
    [aux_sym_count_quantifier_token1] = ACTIONS(581),
  },
  [149] = {
    [aux_sym_named_backreference_token1] = ACTIONS(583),
  },
  [150] = {
    [aux_sym_octal_escape_token2] = ACTIONS(585),
  },
  [151] = {
    [aux_sym_unicode_escape_token2] = ACTIONS(587),
  },
  [152] = {
    [aux_sym_unicode_escape_token1] = ACTIONS(589),
  },
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT(21),
  [5] = {.count = 1, .reusable = true}, SHIFT(2),
  [7] = {.count = 1, .reusable = true}, SHIFT(87),
  [9] = {.count = 1, .reusable = true}, SHIFT(11),
  [11] = {.count = 1, .reusable = true}, SHIFT(22),
  [13] = {.count = 1, .reusable = false}, SHIFT(21),
  [15] = {.count = 1, .reusable = true}, SHIFT(97),
  [17] = {.count = 1, .reusable = true}, SHIFT(8),
  [19] = {.count = 1, .reusable = true}, SHIFT(20),
  [21] = {.count = 1, .reusable = true}, SHIFT(17),
  [23] = {.count = 1, .reusable = true}, SHIFT(3),
  [25] = {.count = 1, .reusable = true}, SHIFT(19),
  [27] = {.count = 1, .reusable = true}, SHIFT(14),
  [29] = {.count = 1, .reusable = true}, SHIFT(6),
  [31] = {.count = 1, .reusable = false}, SHIFT(45),
  [33] = {.count = 1, .reusable = true}, SHIFT(92),
  [35] = {.count = 1, .reusable = true}, SHIFT(60),
  [37] = {.count = 1, .reusable = true}, SHIFT(18),
  [39] = {.count = 1, .reusable = true}, SHIFT(58),
  [41] = {.count = 1, .reusable = true}, SHIFT(13),
  [43] = {.count = 1, .reusable = true}, SHIFT(51),
  [45] = {.count = 1, .reusable = true}, SHIFT(15),
  [47] = {.count = 1, .reusable = true}, SHIFT(63),
  [49] = {.count = 1, .reusable = true}, SHIFT(7),
  [51] = {.count = 1, .reusable = true}, SHIFT(62),
  [53] = {.count = 1, .reusable = true}, SHIFT(9),
  [55] = {.count = 1, .reusable = true}, SHIFT(46),
  [57] = {.count = 1, .reusable = true}, REDUCE(aux_sym_DOLLARdisjunction_repeat1, 1),
  [59] = {.count = 1, .reusable = true}, SHIFT(16),
  [61] = {.count = 1, .reusable = true}, SHIFT(47),
  [63] = {.count = 1, .reusable = true}, SHIFT(48),
  [65] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 1),
  [67] = {.count = 1, .reusable = true}, SHIFT(49),
  [69] = {.count = 1, .reusable = true}, SHIFT(50),
  [71] = {.count = 1, .reusable = true}, SHIFT(64),
  [73] = {.count = 1, .reusable = true}, SHIFT(10),
  [75] = {.count = 1, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2),
  [77] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2), SHIFT_REPEAT(21),
  [80] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2), SHIFT_REPEAT(2),
  [83] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2), SHIFT_REPEAT(87),
  [86] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2), SHIFT_REPEAT(15),
  [89] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2), SHIFT_REPEAT(22),
  [92] = {.count = 2, .reusable = false}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2), SHIFT_REPEAT(21),
  [95] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2), SHIFT_REPEAT(97),
  [98] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2), SHIFT_REPEAT(20),
  [101] = {.count = 1, .reusable = true}, REDUCE(aux_sym_DOLLARdisjunction_repeat1, 2),
  [103] = {.count = 1, .reusable = true}, SHIFT(55),
  [105] = {.count = 1, .reusable = true}, SHIFT(4),
  [107] = {.count = 1, .reusable = true}, SHIFT(27),
  [109] = {.count = 1, .reusable = true}, SHIFT(61),
  [111] = {.count = 1, .reusable = true}, SHIFT(12),
  [113] = {.count = 1, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 1),
  [115] = {.count = 1, .reusable = true}, SHIFT(68),
  [117] = {.count = 1, .reusable = true}, SHIFT(66),
  [119] = {.count = 1, .reusable = true}, SHIFT(75),
  [121] = {.count = 1, .reusable = false}, REDUCE(aux_sym_DOLLARpattern_repeat1, 1),
  [123] = {.count = 1, .reusable = true}, SHIFT(148),
  [125] = {.count = 1, .reusable = true}, SHIFT(31),
  [127] = {.count = 1, .reusable = true}, SHIFT(32),
  [129] = {.count = 1, .reusable = true}, SHIFT(98),
  [131] = {.count = 1, .reusable = true}, SHIFT(106),
  [133] = {.count = 1, .reusable = false}, SHIFT(112),
  [135] = {.count = 1, .reusable = true}, SHIFT(112),
  [137] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARnonconforming_unicode_escape, 2, .production_id = 2),
  [139] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARnonconforming_unicode_escape, 2, .production_id = 2),
  [141] = {.count = 1, .reusable = true}, SHIFT(52),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARnonconforming_hexadecimal_escape, 2, .production_id = 2),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARnonconforming_hexadecimal_escape, 2, .production_id = 2),
  [147] = {.count = 1, .reusable = true}, SHIFT(53),
  [149] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARnonconforming_control_letter_escape, 2, .production_id = 2),
  [151] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARnonconforming_control_letter_escape, 2, .production_id = 2),
  [153] = {.count = 1, .reusable = true}, SHIFT(56),
  [155] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARnonconforming_named_backreference, 2, .production_id = 2),
  [157] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARnonconforming_named_backreference, 2, .production_id = 2),
  [159] = {.count = 1, .reusable = true}, SHIFT(149),
  [161] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 3),
  [163] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 3),
  [165] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 3, .production_id = 4),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 3, .production_id = 4),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_named_backreference, 6),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_named_backreference, 6),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 5),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 5),
  [177] = {.count = 1, .reusable = true}, SHIFT(28),
  [179] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 2),
  [181] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 2),
  [183] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 5),
  [185] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 5),
  [187] = {.count = 1, .reusable = true}, REDUCE(sym_negative_lookbehind_assertion, 5),
  [189] = {.count = 1, .reusable = false}, REDUCE(sym_negative_lookbehind_assertion, 5),
  [191] = {.count = 1, .reusable = true}, SHIFT(59),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_numeric_backreference, 2),
  [195] = {.count = 1, .reusable = false}, REDUCE(sym_numeric_backreference, 2),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_lookbehind_assertion, 5),
  [199] = {.count = 1, .reusable = false}, REDUCE(sym_lookbehind_assertion, 5),
  [201] = {.count = 1, .reusable = true}, REDUCE(sym_negative_lookahead_assertion, 5),
  [203] = {.count = 1, .reusable = false}, REDUCE(sym_negative_lookahead_assertion, 5),
  [205] = {.count = 1, .reusable = true}, REDUCE(sym_character_class_escape, 2),
  [207] = {.count = 1, .reusable = false}, REDUCE(sym_character_class_escape, 2),
  [209] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARp_special_escape, 2),
  [211] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARp_special_escape, 2),
  [213] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 5),
  [215] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 5),
  [217] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 4, .production_id = 4),
  [219] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 4, .production_id = 4),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 4),
  [223] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 4),
  [225] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARp_identity_escape, 2, .production_id = 2),
  [227] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARp_identity_escape, 2, .production_id = 2),
  [229] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARinvalid_named_capturing_group_identifier, 1),
  [231] = {.count = 1, .reusable = true}, SHIFT(71),
  [233] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARinvalid_named_capturing_group_identifier, 1),
  [235] = {.count = 1, .reusable = true}, SHIFT(145),
  [237] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 4),
  [239] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 4),
  [241] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 4),
  [243] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 4),
  [245] = {.count = 1, .reusable = true}, REDUCE(sym_negative_lookbehind_assertion, 4),
  [247] = {.count = 1, .reusable = false}, REDUCE(sym_negative_lookbehind_assertion, 4),
  [249] = {.count = 1, .reusable = true}, REDUCE(sym_lookbehind_assertion, 4),
  [251] = {.count = 1, .reusable = false}, REDUCE(sym_lookbehind_assertion, 4),
  [253] = {.count = 1, .reusable = true}, REDUCE(sym_negative_lookahead_assertion, 4),
  [255] = {.count = 1, .reusable = false}, REDUCE(sym_negative_lookahead_assertion, 4),
  [257] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 4),
  [259] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 4),
  [261] = {.count = 1, .reusable = true}, REDUCE(sym_unicode_escape, 3),
  [263] = {.count = 1, .reusable = false}, REDUCE(sym_unicode_escape, 3),
  [265] = {.count = 1, .reusable = true}, REDUCE(sym_hexadecimal_escape, 3),
  [267] = {.count = 1, .reusable = false}, REDUCE(sym_hexadecimal_escape, 3),
  [269] = {.count = 1, .reusable = true}, REDUCE(sym_octal_escape, 3),
  [271] = {.count = 1, .reusable = false}, REDUCE(sym_octal_escape, 3),
  [273] = {.count = 1, .reusable = true}, REDUCE(sym_lookahead_assertion, 3),
  [275] = {.count = 1, .reusable = false}, REDUCE(sym_lookahead_assertion, 3),
  [277] = {.count = 1, .reusable = true}, REDUCE(sym_control_letter_escape, 3),
  [279] = {.count = 1, .reusable = false}, REDUCE(sym_control_letter_escape, 3),
  [281] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2), SHIFT_REPEAT(98),
  [286] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2), SHIFT_REPEAT(106),
  [289] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 2), SHIFT_REPEAT(112),
  [292] = {.count = 1, .reusable = true}, REDUCE(sym_negative_lookahead_assertion, 3),
  [294] = {.count = 1, .reusable = false}, REDUCE(sym_negative_lookahead_assertion, 3),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_character_set, 3),
  [298] = {.count = 1, .reusable = false}, REDUCE(sym_character_set, 3),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_anonymous_capturing_group, 2),
  [302] = {.count = 1, .reusable = false}, REDUCE(sym_anonymous_capturing_group, 2),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_lookbehind_assertion, 3),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_lookbehind_assertion, 3),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_non_capturing_group, 3),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_non_capturing_group, 3),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group, 3),
  [314] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group, 3),
  [316] = {.count = 1, .reusable = true}, REDUCE(sym_negative_lookbehind_assertion, 3),
  [318] = {.count = 1, .reusable = false}, REDUCE(sym_negative_lookbehind_assertion, 3),
  [320] = {.count = 1, .reusable = true}, SHIFT(42),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 1),
  [324] = {.count = 1, .reusable = true}, SHIFT(80),
  [326] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 1),
  [328] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 4),
  [330] = {.count = 1, .reusable = true}, SHIFT(79),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 4),
  [334] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 1),
  [336] = {.count = 1, .reusable = true}, SHIFT(82),
  [338] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 1),
  [340] = {.count = 1, .reusable = true}, REDUCE(aux_sym_DOLLARquantifier_repeat1, 2),
  [342] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARquantifier_repeat1, 2), SHIFT_REPEAT(69),
  [345] = {.count = 1, .reusable = false}, REDUCE(aux_sym_DOLLARquantifier_repeat1, 2),
  [347] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARquantifier_repeat1, 2), SHIFT_REPEAT(146),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5),
  [352] = {.count = 1, .reusable = true}, SHIFT(78),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_group_name, 1),
  [358] = {.count = 1, .reusable = true}, SHIFT(76),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_group_name, 1),
  [362] = {.count = 1, .reusable = true}, SHIFT(141),
  [364] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 3),
  [366] = {.count = 1, .reusable = true}, SHIFT(83),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 3),
  [370] = {.count = 1, .reusable = true}, SHIFT(74),
  [372] = {.count = 1, .reusable = false}, REDUCE(aux_sym_DOLLARpattern_repeat1, 2),
  [374] = {.count = 1, .reusable = true}, SHIFT(146),
  [376] = {.count = 1, .reusable = true}, REDUCE(aux_sym_DOLLARpattern_repeat1, 3),
  [378] = {.count = 1, .reusable = true}, SHIFT(69),
  [380] = {.count = 1, .reusable = false}, REDUCE(aux_sym_DOLLARpattern_repeat1, 3),
  [382] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 1),
  [384] = {.count = 1, .reusable = true}, SHIFT(77),
  [386] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 1),
  [388] = {.count = 1, .reusable = true}, REDUCE(aux_sym_group_name_repeat1, 2),
  [390] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_name_repeat1, 2), SHIFT_REPEAT(76),
  [393] = {.count = 1, .reusable = false}, REDUCE(aux_sym_group_name_repeat1, 2),
  [395] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_name_repeat1, 2), SHIFT_REPEAT(141),
  [398] = {.count = 1, .reusable = true}, REDUCE(sym_one_or_more, 2, .production_id = 3),
  [400] = {.count = 1, .reusable = false}, REDUCE(sym_one_or_more, 2, .production_id = 3),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 6, .production_id = 11),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 6, .production_id = 11),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 5, .production_id = 10),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 5, .production_id = 10),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_zero_or_more, 2, .production_id = 3),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_zero_or_more, 2, .production_id = 3),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_optional, 2, .production_id = 3),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_optional, 2, .production_id = 3),
  [418] = {.count = 1, .reusable = true}, REDUCE(sym_count_quantifier, 4, .production_id = 9),
  [420] = {.count = 1, .reusable = false}, REDUCE(sym_count_quantifier, 4, .production_id = 9),
  [422] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARinvalid_named_capturing_group_identifier, 2),
  [424] = {.count = 1, .reusable = true}, SHIFT(93),
  [426] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARinvalid_named_capturing_group_identifier, 2),
  [428] = {.count = 1, .reusable = true}, SHIFT(142),
  [430] = {.count = 1, .reusable = true}, SHIFT(99),
  [432] = {.count = 1, .reusable = true}, SHIFT(117),
  [434] = {.count = 1, .reusable = true}, SHIFT(118),
  [436] = {.count = 1, .reusable = true}, REDUCE(sym_start_assertion, 1),
  [438] = {.count = 1, .reusable = false}, REDUCE(sym_start_assertion, 1),
  [440] = {.count = 1, .reusable = true}, SHIFT(116),
  [442] = {.count = 1, .reusable = true}, SHIFT(115),
  [444] = {.count = 1, .reusable = true}, REDUCE(sym_non_boundary_assertion, 2),
  [446] = {.count = 1, .reusable = false}, REDUCE(sym_non_boundary_assertion, 2),
  [448] = {.count = 1, .reusable = true}, REDUCE(sym_boundary_assertion, 2),
  [450] = {.count = 1, .reusable = false}, REDUCE(sym_boundary_assertion, 2),
  [452] = {.count = 1, .reusable = true}, SHIFT(85),
  [454] = {.count = 1, .reusable = true}, REDUCE(sym_named_capturing_group_identifier, 3),
  [456] = {.count = 1, .reusable = false}, REDUCE(sym_named_capturing_group_identifier, 3),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARinvalid_named_capturing_group_identifier, 3),
  [460] = {.count = 1, .reusable = false}, REDUCE(sym_DOLLARinvalid_named_capturing_group_identifier, 3),
  [462] = {.count = 1, .reusable = true}, SHIFT(36),
  [464] = {.count = 1, .reusable = true}, SHIFT(26),
  [466] = {.count = 1, .reusable = true}, SHIFT(90),
  [468] = {.count = 1, .reusable = true}, SHIFT(89),
  [470] = {.count = 1, .reusable = true}, SHIFT(39),
  [472] = {.count = 1, .reusable = true}, SHIFT(40),
  [474] = {.count = 1, .reusable = true}, SHIFT(25),
  [476] = {.count = 1, .reusable = true}, SHIFT(139),
  [478] = {.count = 1, .reusable = true}, SHIFT(24),
  [480] = {.count = 1, .reusable = true}, SHIFT(23),
  [482] = {.count = 1, .reusable = true}, SHIFT(44),
  [484] = {.count = 1, .reusable = true}, SHIFT(111),
  [486] = {.count = 1, .reusable = true}, SHIFT(103),
  [488] = {.count = 1, .reusable = true}, SHIFT(102),
  [490] = {.count = 1, .reusable = true}, SHIFT(150),
  [492] = {.count = 1, .reusable = true}, SHIFT(101),
  [494] = {.count = 1, .reusable = true}, SHIFT(100),
  [496] = {.count = 1, .reusable = true}, SHIFT(113),
  [498] = {.count = 1, .reusable = true}, SHIFT(104),
  [500] = {.count = 1, .reusable = true}, SHIFT(107),
  [502] = {.count = 1, .reusable = true}, SHIFT(109),
  [504] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARs_special_escape, 2),
  [506] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_name_repeat1, 2), SHIFT_REPEAT(105),
  [509] = {.count = 2, .reusable = true}, REDUCE(aux_sym_group_name_repeat1, 2), SHIFT_REPEAT(152),
  [512] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 1, .production_id = 1),
  [514] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 1, .production_id = 1), SHIFT(86),
  [517] = {.count = 1, .reusable = true}, SHIFT(105),
  [519] = {.count = 1, .reusable = true}, SHIFT(152),
  [521] = {.count = 1, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 1),
  [523] = {.count = 2, .reusable = true}, REDUCE(aux_sym_character_set_repeat1, 1), SHIFT(88),
  [526] = {.count = 1, .reusable = true}, REDUCE(sym_DOLLARs_identity_escape, 2, .production_id = 2),
  [528] = {.count = 1, .reusable = true}, SHIFT(110),
  [530] = {.count = 1, .reusable = true}, REDUCE(sym_character_range, 3, .dynamic_precedence = 1, .production_id = 5),
  [532] = {.count = 1, .reusable = true}, REDUCE(sym_character_range, 3, .dynamic_precedence = 1, .production_id = 6),
  [534] = {.count = 1, .reusable = true}, REDUCE(sym_character_range, 3, .dynamic_precedence = 1, .production_id = 8),
  [536] = {.count = 1, .reusable = true}, REDUCE(sym_character_range, 3, .dynamic_precedence = 1, .production_id = 7),
  [538] = {.count = 2, .reusable = true}, REDUCE(aux_sym_DOLLARdisjunction_repeat1, 2), SHIFT_REPEAT(8),
  [541] = {.count = 1, .reusable = true}, SHIFT(33),
  [543] = {.count = 1, .reusable = true}, SHIFT(30),
  [545] = {.count = 1, .reusable = true}, REDUCE(sym_regex, 2),
  [547] = {.count = 1, .reusable = true}, SHIFT(38),
  [549] = {.count = 1, .reusable = true}, SHIFT(43),
  [551] = {.count = 1, .reusable = true}, SHIFT(41),
  [553] = {.count = 1, .reusable = true}, SHIFT(37),
  [555] = {.count = 1, .reusable = true}, SHIFT(34),
  [557] = {.count = 1, .reusable = true}, SHIFT(138),
  [559] = {.count = 1, .reusable = true}, SHIFT(72),
  [561] = {.count = 1, .reusable = true}, SHIFT(143),
  [563] = {.count = 1, .reusable = true}, SHIFT(67),
  [565] = {.count = 1, .reusable = true}, SHIFT(54),
  [567] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [569] = {.count = 1, .reusable = true}, SHIFT(147),
  [571] = {.count = 1, .reusable = true}, SHIFT(94),
  [573] = {.count = 1, .reusable = true}, SHIFT(70),
  [575] = {.count = 1, .reusable = true}, SHIFT(29),
  [577] = {.count = 1, .reusable = true}, SHIFT(91),
  [579] = {.count = 1, .reusable = true}, SHIFT(81),
  [581] = {.count = 1, .reusable = true}, SHIFT(137),
  [583] = {.count = 1, .reusable = true}, SHIFT(114),
  [585] = {.count = 1, .reusable = true}, SHIFT(108),
  [587] = {.count = 1, .reusable = true}, SHIFT(121),
  [589] = {.count = 1, .reusable = true}, SHIFT(151),
};

void *tree_sitter_regex_external_scanner_create(void);
void tree_sitter_regex_external_scanner_destroy(void *);
bool tree_sitter_regex_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_regex_external_scanner_serialize(void *, char *);
void tree_sitter_regex_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_regex(void) {
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
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_regex_external_scanner_create,
      tree_sitter_regex_external_scanner_destroy,
      tree_sitter_regex_external_scanner_scan,
      tree_sitter_regex_external_scanner_serialize,
      tree_sitter_regex_external_scanner_deserialize,
    },
  };
  return &language;
}
