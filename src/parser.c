#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 237
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 101
#define ALIAS_COUNT 0
#define TOKEN_COUNT 61
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 26
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 34

enum {
  sym_jinja_value_open = 1,
  sym_jinja_value_close = 2,
  anon_sym_DASH = 3,
  sym_jinja_statement_open = 4,
  sym_jinja_statement_close = 5,
  anon_sym_for = 6,
  anon_sym_in = 7,
  anon_sym_if = 8,
  anon_sym_elif = 9,
  sym_jinja_else = 10,
  anon_sym_include = 11,
  anon_sym_with = 12,
  anon_sym_ignoremissing = 13,
  anon_sym_extends = 14,
  anon_sym_block = 15,
  anon_sym_set = 16,
  anon_sym_EQ = 17,
  anon_sym_macro = 18,
  anon_sym_call = 19,
  anon_sym_filter = 20,
  sym_jinja_raw = 21,
  anon_sym_import = 22,
  anon_sym_as = 23,
  anon_sym_from = 24,
  anon_sym_COMMA = 25,
  anon_sym_endmacro = 26,
  anon_sym_endfor = 27,
  anon_sym_endif = 28,
  anon_sym_endblock = 29,
  anon_sym_endraw = 30,
  anon_sym_endcall = 31,
  sym_jinja_comment_open = 32,
  sym_jinja_comment_content = 33,
  sym_jinja_comment_close = 34,
  anon_sym_LT = 35,
  anon_sym_SLASH_GT = 36,
  anon_sym_GT = 37,
  anon_sym_LT_SLASH = 38,
  aux_sym_html_tag_name_token1 = 39,
  anon_sym_LPAREN = 40,
  anon_sym_RPAREN = 41,
  anon_sym_SQUOTE = 42,
  aux_sym_lit_string_token1 = 43,
  anon_sym_DQUOTE = 44,
  aux_sym_lit_string_token2 = 45,
  anon_sym_True = 46,
  anon_sym_False = 47,
  anon_sym_LBRACK = 48,
  anon_sym_RBRACK = 49,
  anon_sym_LBRACE = 50,
  anon_sym_RBRACE = 51,
  anon_sym_COLON = 52,
  sym__identifier = 53,
  sym__text = 54,
  sym_integer = 55,
  sym_float = 56,
  anon_sym_EQ_EQ = 57,
  anon_sym_BANG_EQ = 58,
  anon_sym_LT_EQ = 59,
  anon_sym_GT_EQ = 60,
  sym_source_file = 61,
  sym__jinja_value = 62,
  sym_jinja_statement = 63,
  sym_jinja_for = 64,
  sym_jinja_if = 65,
  sym_jinja_elif = 66,
  sym_jinja_include = 67,
  sym_jinja_extends = 68,
  sym_jinja_block = 69,
  sym_jinja_set = 70,
  sym_jinja_macro = 71,
  sym_jinja_call = 72,
  sym_jinja_filter = 73,
  sym_jinja_import = 74,
  sym_jinja_from = 75,
  sym_jinja_end_statement = 76,
  sym_jinja_comment = 77,
  sym_html_content = 78,
  sym_html_tag_name = 79,
  sym_html_attribute = 80,
  sym_html_attribute_name = 81,
  sym__expr = 82,
  sym_fn_call = 83,
  sym_argument_list = 84,
  sym_lit_string = 85,
  sym_bool = 86,
  sym_list = 87,
  sym_dict = 88,
  sym_pair = 89,
  sym_identifier = 90,
  sym_kwarg = 91,
  sym__condition = 92,
  sym_comparison = 93,
  aux_sym_source_file_repeat1 = 94,
  aux_sym_jinja_from_repeat1 = 95,
  aux_sym_html_content_repeat1 = 96,
  aux_sym_html_content_repeat2 = 97,
  aux_sym_argument_list_repeat1 = 98,
  aux_sym_list_repeat1 = 99,
  aux_sym_dict_repeat1 = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_jinja_value_open] = "jinja_value_open",
  [sym_jinja_value_close] = "jinja_value_close",
  [anon_sym_DASH] = "-",
  [sym_jinja_statement_open] = "jinja_statement_open",
  [sym_jinja_statement_close] = "jinja_statement_close",
  [anon_sym_for] = "for",
  [anon_sym_in] = "in",
  [anon_sym_if] = "if",
  [anon_sym_elif] = "elif",
  [sym_jinja_else] = "jinja_else",
  [anon_sym_include] = "include",
  [anon_sym_with] = "with",
  [anon_sym_ignoremissing] = "ignore missing",
  [anon_sym_extends] = "extends",
  [anon_sym_block] = "block",
  [anon_sym_set] = "set",
  [anon_sym_EQ] = "=",
  [anon_sym_macro] = "macro",
  [anon_sym_call] = "call",
  [anon_sym_filter] = "filter",
  [sym_jinja_raw] = "jinja_raw",
  [anon_sym_import] = "import",
  [anon_sym_as] = "as",
  [anon_sym_from] = "from",
  [anon_sym_COMMA] = ",",
  [anon_sym_endmacro] = "endmacro",
  [anon_sym_endfor] = "endfor",
  [anon_sym_endif] = "endif",
  [anon_sym_endblock] = "endblock",
  [anon_sym_endraw] = "endraw",
  [anon_sym_endcall] = "endcall",
  [sym_jinja_comment_open] = "jinja_comment_open",
  [sym_jinja_comment_content] = "jinja_comment_content",
  [sym_jinja_comment_close] = "jinja_comment_close",
  [anon_sym_LT] = "<",
  [anon_sym_SLASH_GT] = "/>",
  [anon_sym_GT] = ">",
  [anon_sym_LT_SLASH] = "</",
  [aux_sym_html_tag_name_token1] = "html_tag_name_token1",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_lit_string_token1] = "lit_string_token1",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_lit_string_token2] = "lit_string_token2",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym__identifier] = "_identifier",
  [sym__text] = "_text",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [sym_source_file] = "source_file",
  [sym__jinja_value] = "_jinja_value",
  [sym_jinja_statement] = "jinja_statement",
  [sym_jinja_for] = "jinja_for",
  [sym_jinja_if] = "jinja_if",
  [sym_jinja_elif] = "jinja_elif",
  [sym_jinja_include] = "jinja_include",
  [sym_jinja_extends] = "jinja_extends",
  [sym_jinja_block] = "jinja_block",
  [sym_jinja_set] = "jinja_set",
  [sym_jinja_macro] = "jinja_macro",
  [sym_jinja_call] = "jinja_call",
  [sym_jinja_filter] = "jinja_filter",
  [sym_jinja_import] = "jinja_import",
  [sym_jinja_from] = "jinja_from",
  [sym_jinja_end_statement] = "jinja_end_statement",
  [sym_jinja_comment] = "jinja_comment",
  [sym_html_content] = "html_content",
  [sym_html_tag_name] = "html_tag_name",
  [sym_html_attribute] = "html_attribute",
  [sym_html_attribute_name] = "html_attribute_name",
  [sym__expr] = "_expr",
  [sym_fn_call] = "fn_call",
  [sym_argument_list] = "argument_list",
  [sym_lit_string] = "lit_string",
  [sym_bool] = "bool",
  [sym_list] = "list",
  [sym_dict] = "dict",
  [sym_pair] = "pair",
  [sym_identifier] = "identifier",
  [sym_kwarg] = "kwarg",
  [sym__condition] = "_condition",
  [sym_comparison] = "comparison",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_jinja_from_repeat1] = "jinja_from_repeat1",
  [aux_sym_html_content_repeat1] = "html_content_repeat1",
  [aux_sym_html_content_repeat2] = "html_content_repeat2",
  [aux_sym_argument_list_repeat1] = "argument_list_repeat1",
  [aux_sym_list_repeat1] = "list_repeat1",
  [aux_sym_dict_repeat1] = "dict_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_jinja_value_open] = sym_jinja_value_open,
  [sym_jinja_value_close] = sym_jinja_value_close,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_jinja_statement_open] = sym_jinja_statement_open,
  [sym_jinja_statement_close] = sym_jinja_statement_close,
  [anon_sym_for] = anon_sym_for,
  [anon_sym_in] = anon_sym_in,
  [anon_sym_if] = anon_sym_if,
  [anon_sym_elif] = anon_sym_elif,
  [sym_jinja_else] = sym_jinja_else,
  [anon_sym_include] = anon_sym_include,
  [anon_sym_with] = anon_sym_with,
  [anon_sym_ignoremissing] = anon_sym_ignoremissing,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_block] = anon_sym_block,
  [anon_sym_set] = anon_sym_set,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_macro] = anon_sym_macro,
  [anon_sym_call] = anon_sym_call,
  [anon_sym_filter] = anon_sym_filter,
  [sym_jinja_raw] = sym_jinja_raw,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_endmacro] = anon_sym_endmacro,
  [anon_sym_endfor] = anon_sym_endfor,
  [anon_sym_endif] = anon_sym_endif,
  [anon_sym_endblock] = anon_sym_endblock,
  [anon_sym_endraw] = anon_sym_endraw,
  [anon_sym_endcall] = anon_sym_endcall,
  [sym_jinja_comment_open] = sym_jinja_comment_open,
  [sym_jinja_comment_content] = sym_jinja_comment_content,
  [sym_jinja_comment_close] = sym_jinja_comment_close,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_SLASH_GT] = anon_sym_SLASH_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT_SLASH] = anon_sym_LT_SLASH,
  [aux_sym_html_tag_name_token1] = aux_sym_html_tag_name_token1,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_lit_string_token1] = aux_sym_lit_string_token1,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_lit_string_token2] = aux_sym_lit_string_token2,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym__identifier] = sym__identifier,
  [sym__text] = sym__text,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [sym_source_file] = sym_source_file,
  [sym__jinja_value] = sym__jinja_value,
  [sym_jinja_statement] = sym_jinja_statement,
  [sym_jinja_for] = sym_jinja_for,
  [sym_jinja_if] = sym_jinja_if,
  [sym_jinja_elif] = sym_jinja_elif,
  [sym_jinja_include] = sym_jinja_include,
  [sym_jinja_extends] = sym_jinja_extends,
  [sym_jinja_block] = sym_jinja_block,
  [sym_jinja_set] = sym_jinja_set,
  [sym_jinja_macro] = sym_jinja_macro,
  [sym_jinja_call] = sym_jinja_call,
  [sym_jinja_filter] = sym_jinja_filter,
  [sym_jinja_import] = sym_jinja_import,
  [sym_jinja_from] = sym_jinja_from,
  [sym_jinja_end_statement] = sym_jinja_end_statement,
  [sym_jinja_comment] = sym_jinja_comment,
  [sym_html_content] = sym_html_content,
  [sym_html_tag_name] = sym_html_tag_name,
  [sym_html_attribute] = sym_html_attribute,
  [sym_html_attribute_name] = sym_html_attribute_name,
  [sym__expr] = sym__expr,
  [sym_fn_call] = sym_fn_call,
  [sym_argument_list] = sym_argument_list,
  [sym_lit_string] = sym_lit_string,
  [sym_bool] = sym_bool,
  [sym_list] = sym_list,
  [sym_dict] = sym_dict,
  [sym_pair] = sym_pair,
  [sym_identifier] = sym_identifier,
  [sym_kwarg] = sym_kwarg,
  [sym__condition] = sym__condition,
  [sym_comparison] = sym_comparison,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_jinja_from_repeat1] = aux_sym_jinja_from_repeat1,
  [aux_sym_html_content_repeat1] = aux_sym_html_content_repeat1,
  [aux_sym_html_content_repeat2] = aux_sym_html_content_repeat2,
  [aux_sym_argument_list_repeat1] = aux_sym_argument_list_repeat1,
  [aux_sym_list_repeat1] = aux_sym_list_repeat1,
  [aux_sym_dict_repeat1] = aux_sym_dict_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_jinja_value_open] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_value_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_jinja_statement_open] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_statement_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_for] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_in] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_elif] = {
    .visible = true,
    .named = false,
  },
  [sym_jinja_else] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_include] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_with] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ignoremissing] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_block] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_set] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_macro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_call] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_filter] = {
    .visible = true,
    .named = false,
  },
  [sym_jinja_raw] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endmacro] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endfor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endif] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endblock] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endraw] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endcall] = {
    .visible = true,
    .named = false,
  },
  [sym_jinja_comment_open] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_comment_content] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_comment_close] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_html_tag_name_token1] = {
    .visible = false,
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
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_lit_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym__identifier] = {
    .visible = false,
    .named = true,
  },
  [sym__text] = {
    .visible = false,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__jinja_value] = {
    .visible = false,
    .named = true,
  },
  [sym_jinja_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_for] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_if] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_elif] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_include] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_extends] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_block] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_set] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_call] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_filter] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_import] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_from] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_end_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_jinja_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_html_content] = {
    .visible = true,
    .named = true,
  },
  [sym_html_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_html_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_html_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_fn_call] = {
    .visible = true,
    .named = true,
  },
  [sym_argument_list] = {
    .visible = true,
    .named = true,
  },
  [sym_lit_string] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_dict] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_kwarg] = {
    .visible = true,
    .named = true,
  },
  [sym__condition] = {
    .visible = false,
    .named = true,
  },
  [sym_comparison] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_jinja_from_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_html_content_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_argument_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_list_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_dict_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_alias = 1,
  field_argument_list = 2,
  field_block_name = 3,
  field_close_delimiter = 4,
  field_condition = 5,
  field_content = 6,
  field_context = 7,
  field_filter_name = 8,
  field_fn_name = 9,
  field_if_clause = 10,
  field_iterable = 11,
  field_key = 12,
  field_left = 13,
  field_macro = 14,
  field_macro_name = 15,
  field_module = 16,
  field_name = 17,
  field_open_delimiter = 18,
  field_operator = 19,
  field_params = 20,
  field_parent_template = 21,
  field_right = 22,
  field_target = 23,
  field_template = 24,
  field_value = 25,
  field_variable = 26,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_argument_list] = "argument_list",
  [field_block_name] = "block_name",
  [field_close_delimiter] = "close_delimiter",
  [field_condition] = "condition",
  [field_content] = "content",
  [field_context] = "context",
  [field_filter_name] = "filter_name",
  [field_fn_name] = "fn_name",
  [field_if_clause] = "if_clause",
  [field_iterable] = "iterable",
  [field_key] = "key",
  [field_left] = "left",
  [field_macro] = "macro",
  [field_macro_name] = "macro_name",
  [field_module] = "module",
  [field_name] = "name",
  [field_open_delimiter] = "open_delimiter",
  [field_operator] = "operator",
  [field_params] = "params",
  [field_parent_template] = "parent_template",
  [field_right] = "right",
  [field_target] = "target",
  [field_template] = "template",
  [field_value] = "value",
  [field_variable] = "variable",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
  [2] = {.index = 2, .length = 4},
  [3] = {.index = 6, .length = 2},
  [4] = {.index = 8, .length = 2},
  [5] = {.index = 10, .length = 1},
  [6] = {.index = 11, .length = 1},
  [7] = {.index = 12, .length = 1},
  [8] = {.index = 13, .length = 1},
  [9] = {.index = 14, .length = 1},
  [10] = {.index = 15, .length = 1},
  [11] = {.index = 16, .length = 1},
  [12] = {.index = 17, .length = 3},
  [13] = {.index = 20, .length = 2},
  [14] = {.index = 22, .length = 2},
  [15] = {.index = 24, .length = 2},
  [16] = {.index = 26, .length = 2},
  [17] = {.index = 28, .length = 2},
  [18] = {.index = 30, .length = 2},
  [19] = {.index = 32, .length = 3},
  [20] = {.index = 35, .length = 2},
  [21] = {.index = 37, .length = 2},
  [22] = {.index = 39, .length = 2},
  [23] = {.index = 41, .length = 2},
  [24] = {.index = 43, .length = 2},
  [25] = {.index = 45, .length = 4},
  [26] = {.index = 49, .length = 4},
  [27] = {.index = 53, .length = 3},
  [28] = {.index = 56, .length = 1},
  [29] = {.index = 57, .length = 4},
  [30] = {.index = 61, .length = 2},
  [31] = {.index = 63, .length = 5},
  [32] = {.index = 68, .length = 2},
  [33] = {.index = 70, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_close_delimiter, 0, .inherited = true},
    {field_open_delimiter, 0, .inherited = true},
  [2] =
    {field_close_delimiter, 0, .inherited = true},
    {field_close_delimiter, 1, .inherited = true},
    {field_open_delimiter, 0, .inherited = true},
    {field_open_delimiter, 1, .inherited = true},
  [6] =
    {field_close_delimiter, 2},
    {field_open_delimiter, 0},
  [8] =
    {field_argument_list, 1},
    {field_fn_name, 0},
  [10] =
    {field_condition, 1},
  [11] =
    {field_template, 1},
  [12] =
    {field_parent_template, 1},
  [13] =
    {field_block_name, 1},
  [14] =
    {field_macro, 1},
  [15] =
    {field_params, 1},
  [16] =
    {field_filter_name, 1},
  [17] =
    {field_close_delimiter, 2},
    {field_content, 1},
    {field_open_delimiter, 0},
  [20] =
    {field_close_delimiter, 3},
    {field_open_delimiter, 0},
  [22] =
    {field_macro_name, 1},
    {field_params, 2},
  [24] =
    {field_macro, 1},
    {field_params, 2},
  [26] =
    {field_key, 0},
    {field_value, 2},
  [28] =
    {field_close_delimiter, 4},
    {field_open_delimiter, 0},
  [30] =
    {field_iterable, 3},
    {field_target, 1},
  [32] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
  [35] =
    {field_context, 3},
    {field_template, 1},
  [37] =
    {field_value, 3},
    {field_variable, 1},
  [39] =
    {field_alias, 3},
    {field_module, 1},
  [41] =
    {field_module, 1},
    {field_name, 3},
  [43] =
    {field_close_delimiter, 2, .inherited = true},
    {field_open_delimiter, 2, .inherited = true},
  [45] =
    {field_alias, 4, .inherited = true},
    {field_module, 1},
    {field_name, 3},
    {field_name, 4, .inherited = true},
  [49] =
    {field_if_clause, 4},
    {field_if_clause, 5},
    {field_iterable, 3},
    {field_target, 1},
  [53] =
    {field_alias, 5},
    {field_module, 1},
    {field_name, 3},
  [56] =
    {field_name, 1},
  [57] =
    {field_alias, 0, .inherited = true},
    {field_alias, 1, .inherited = true},
    {field_name, 0, .inherited = true},
    {field_name, 1, .inherited = true},
  [61] =
    {field_close_delimiter, 3, .inherited = true},
    {field_open_delimiter, 3, .inherited = true},
  [63] =
    {field_alias, 5},
    {field_alias, 6, .inherited = true},
    {field_module, 1},
    {field_name, 3},
    {field_name, 6, .inherited = true},
  [68] =
    {field_close_delimiter, 4, .inherited = true},
    {field_open_delimiter, 4, .inherited = true},
  [70] =
    {field_alias, 3},
    {field_name, 1},
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 8,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 11,
  [16] = 16,
  [17] = 16,
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 19,
  [23] = 23,
  [24] = 20,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 26,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 26,
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
  [51] = 50,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 54,
  [57] = 57,
  [58] = 57,
  [59] = 59,
  [60] = 55,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 65,
  [71] = 71,
  [72] = 72,
  [73] = 64,
  [74] = 74,
  [75] = 75,
  [76] = 66,
  [77] = 75,
  [78] = 78,
  [79] = 79,
  [80] = 69,
  [81] = 79,
  [82] = 74,
  [83] = 83,
  [84] = 83,
  [85] = 85,
  [86] = 86,
  [87] = 71,
  [88] = 68,
  [89] = 62,
  [90] = 67,
  [91] = 86,
  [92] = 78,
  [93] = 93,
  [94] = 94,
  [95] = 6,
  [96] = 96,
  [97] = 97,
  [98] = 97,
  [99] = 99,
  [100] = 94,
  [101] = 101,
  [102] = 28,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 78,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 119,
  [120] = 21,
  [121] = 116,
  [122] = 122,
  [123] = 123,
  [124] = 119,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 114,
  [131] = 131,
  [132] = 132,
  [133] = 118,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 128,
  [138] = 125,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 144,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 146,
  [150] = 150,
  [151] = 151,
  [152] = 142,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 46,
  [160] = 160,
  [161] = 154,
  [162] = 43,
  [163] = 39,
  [164] = 164,
  [165] = 47,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 42,
  [171] = 27,
  [172] = 41,
  [173] = 173,
  [174] = 174,
  [175] = 45,
  [176] = 25,
  [177] = 40,
  [178] = 143,
  [179] = 49,
  [180] = 32,
  [181] = 48,
  [182] = 182,
  [183] = 44,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 174,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 194,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 199,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 198,
  [207] = 200,
  [208] = 208,
  [209] = 201,
  [210] = 210,
  [211] = 204,
  [212] = 212,
  [213] = 212,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 214,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 208,
  [225] = 225,
  [226] = 226,
  [227] = 210,
  [228] = 219,
  [229] = 223,
  [230] = 215,
  [231] = 218,
  [232] = 214,
  [233] = 226,
  [234] = 225,
  [235] = 235,
  [236] = 217,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(111);
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '#') ADVANCE(100);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '<') ADVANCE(151);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'T') ADVANCE(77);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(106);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '{') ADVANCE(175);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(64);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == 'b') ADVANCE(53);
      if (lookahead == 'c') ADVANCE(19);
      if (lookahead == 'e') ADVANCE(54);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'm') ADVANCE(15);
      if (lookahead == 'r') ADVANCE(16);
      if (lookahead == 's') ADVANCE(36);
      if (lookahead == '{') ADVANCE(99);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == ':') ADVANCE(177);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(39);
      if (lookahead == 'w') ADVANCE(47);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '!') ADVANCE(12);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(114);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead == '=') ADVANCE(130);
      if (lookahead == '>') ADVANCE(155);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == 'a') ADVANCE(85);
      if (lookahead == 'i') ADVANCE(41);
      if (lookahead == '}') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(164);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(160);
      if (lookahead == '(') ADVANCE(158);
      if (lookahead == ')') ADVANCE(159);
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == 'F') ADVANCE(179);
      if (lookahead == 'T') ADVANCE(183);
      if (lookahead == '[') ADVANCE(172);
      if (lookahead == ']') ADVANCE(173);
      if (lookahead == '_') ADVANCE(186);
      if (lookahead == '{') ADVANCE(174);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 6:
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '{') ADVANCE(112);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 7:
      if (lookahead == ',') ADVANCE(138);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=') ADVANCE(129);
      if (lookahead == '>') ADVANCE(154);
      if (lookahead == '}') ADVANCE(176);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(196);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(199);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(153);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(97);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(98);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 20:
      if (lookahead == 'a') ADVANCE(60);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'b') ADVANCE(61);
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'f') ADVANCE(75);
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == 'm') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(81);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(58);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == 'd') ADVANCE(22);
      END_STATE();
    case 29:
      if (lookahead == 'd') ADVANCE(86);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(35);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(170);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(1);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(66);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(80);
      END_STATE();
    case 39:
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'g') ADVANCE(67);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 40:
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'm') ADVANCE(76);
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 41:
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 42:
      if (lookahead == 'f') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == 'f') ADVANCE(141);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(125);
      END_STATE();
    case 45:
      if (lookahead == 'h') ADVANCE(124);
      END_STATE();
    case 46:
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(91);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'i') ADVANCE(88);
      END_STATE();
    case 50:
      if (lookahead == 'i') ADVANCE(62);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(68);
      END_STATE();
    case 51:
      if (lookahead == 'k') ADVANCE(127);
      END_STATE();
    case 52:
      if (lookahead == 'k') ADVANCE(142);
      END_STATE();
    case 53:
      if (lookahead == 'l') ADVANCE(71);
      END_STATE();
    case 54:
      if (lookahead == 'l') ADVANCE(46);
      if (lookahead == 'n') ADVANCE(28);
      if (lookahead == 'x') ADVANCE(93);
      END_STATE();
    case 55:
      if (lookahead == 'l') ADVANCE(132);
      END_STATE();
    case 56:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 57:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 58:
      if (lookahead == 'l') ADVANCE(96);
      END_STATE();
    case 59:
      if (lookahead == 'l') ADVANCE(55);
      END_STATE();
    case 60:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 61:
      if (lookahead == 'l') ADVANCE(72);
      END_STATE();
    case 62:
      if (lookahead == 'l') ADVANCE(94);
      END_STATE();
    case 63:
      if (lookahead == 'm') ADVANCE(137);
      END_STATE();
    case 64:
      if (lookahead == 'm') ADVANCE(49);
      END_STATE();
    case 65:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 66:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 67:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(139);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == 'o') ADVANCE(79);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(74);
      END_STATE();
    case 77:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(70);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(136);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(48);
      END_STATE();
    case 88:
      if (lookahead == 's') ADVANCE(87);
      END_STATE();
    case 89:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 95:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 96:
      if (lookahead == 'u') ADVANCE(30);
      END_STATE();
    case 97:
      if (lookahead == 'w') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 99:
      if (lookahead == '{') ADVANCE(112);
      END_STATE();
    case 100:
      if (lookahead == '}') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == '}') ADVANCE(117);
      END_STATE();
    case 102:
      if (lookahead == '}') ADVANCE(113);
      END_STATE();
    case 103:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(107);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 104:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(104)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 105:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 106:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 107:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 108:
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '%' &&
          lookahead != '{') ADVANCE(190);
      END_STATE();
    case 109:
      if (lookahead != 0 &&
          lookahead != '}') ADVANCE(147);
      END_STATE();
    case 110:
      if (eof) ADVANCE(111);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_jinja_value_open);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_jinja_value_close);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '.') ADVANCE(105);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_jinja_statement_open);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_jinja_statement_close);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_for);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_in);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_elif);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_jinja_else);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_include);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_with);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_ignoremissing);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_block);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_set);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(198);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_macro);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_call);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_filter);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_jinja_raw);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_endmacro);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_endfor);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_endif);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_endblock);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_endraw);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_endcall);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_jinja_comment_open);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_jinja_comment_content);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(146);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_jinja_comment_content);
      if (lookahead == '#') ADVANCE(109);
      if (lookahead != 0) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_jinja_comment_close);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(156);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '/') ADVANCE(156);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(200);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_SLASH_GT);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(201);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_LT_SLASH);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(aux_sym_html_tag_name_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(161);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(162);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead == '\\') ADVANCE(163);
      if (lookahead != 0 &&
          lookahead != '\'') ADVANCE(162);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(aux_sym_lit_string_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(162);
      if (lookahead == '\\') ADVANCE(163);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(165);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(166);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead == '\\') ADVANCE(167);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(166);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(aux_sym_lit_string_token2);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(166);
      if (lookahead == '\\') ADVANCE(167);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_True);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(anon_sym_False);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      if (lookahead == '#') ADVANCE(145);
      if (lookahead == '%') ADVANCE(116);
      if (lookahead == '{') ADVANCE(112);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == '_') ADVANCE(186);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'a') ADVANCE(182);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(169);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'e') ADVANCE(171);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'l') ADVANCE(184);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'r') ADVANCE(185);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 's') ADVANCE(181);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym__identifier);
      if (lookahead == 'u') ADVANCE(180);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(178);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(sym__identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(187);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '<') ADVANCE(149);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(188);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead == '{') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(189);
      if (lookahead != 0) ADVANCE(190);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(sym__text);
      if (lookahead == '{') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(190);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(191);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(196);
      if (lookahead == '_') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(192);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(106);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(193);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(196);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(197);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(194);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_float);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(195);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 110},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 4},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 5},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 3},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 3},
  [45] = {.lex_state = 3},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 3},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 11},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 110},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 11},
  [55] = {.lex_state = 11},
  [56] = {.lex_state = 11},
  [57] = {.lex_state = 11},
  [58] = {.lex_state = 11},
  [59] = {.lex_state = 110},
  [60] = {.lex_state = 11},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 7},
  [63] = {.lex_state = 7},
  [64] = {.lex_state = 11},
  [65] = {.lex_state = 11},
  [66] = {.lex_state = 11},
  [67] = {.lex_state = 110},
  [68] = {.lex_state = 110},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 110},
  [71] = {.lex_state = 7},
  [72] = {.lex_state = 110},
  [73] = {.lex_state = 110},
  [74] = {.lex_state = 110},
  [75] = {.lex_state = 11},
  [76] = {.lex_state = 110},
  [77] = {.lex_state = 110},
  [78] = {.lex_state = 110},
  [79] = {.lex_state = 11},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 110},
  [82] = {.lex_state = 11},
  [83] = {.lex_state = 11},
  [84] = {.lex_state = 110},
  [85] = {.lex_state = 11},
  [86] = {.lex_state = 110},
  [87] = {.lex_state = 7},
  [88] = {.lex_state = 11},
  [89] = {.lex_state = 7},
  [90] = {.lex_state = 11},
  [91] = {.lex_state = 11},
  [92] = {.lex_state = 11},
  [93] = {.lex_state = 5},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 7},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 7},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 7},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 7},
  [113] = {.lex_state = 7},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 0},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 7},
  [123] = {.lex_state = 7},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 7},
  [143] = {.lex_state = 7},
  [144] = {.lex_state = 7},
  [145] = {.lex_state = 7},
  [146] = {.lex_state = 7},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 7},
  [150] = {.lex_state = 0},
  [151] = {.lex_state = 104},
  [152] = {.lex_state = 7},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 7},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 104},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 7},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 104},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 104},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 3},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 7},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 104},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 104},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 104},
  [189] = {.lex_state = 104},
  [190] = {.lex_state = 104},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 0},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 0},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 0},
  [204] = {.lex_state = 0},
  [205] = {.lex_state = 0},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 0},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 2},
  [215] = {.lex_state = 5},
  [216] = {.lex_state = 5},
  [217] = {.lex_state = 5},
  [218] = {.lex_state = 5},
  [219] = {.lex_state = 5},
  [220] = {.lex_state = 2},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 146},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 161},
  [226] = {.lex_state = 165},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 5},
  [229] = {.lex_state = 146},
  [230] = {.lex_state = 5},
  [231] = {.lex_state = 5},
  [232] = {.lex_state = 2},
  [233] = {.lex_state = 165},
  [234] = {.lex_state = 161},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 5},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_jinja_value_open] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_jinja_statement_open] = ACTIONS(1),
    [sym_jinja_statement_close] = ACTIONS(1),
    [anon_sym_for] = ACTIONS(1),
    [anon_sym_in] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [anon_sym_elif] = ACTIONS(1),
    [sym_jinja_else] = ACTIONS(1),
    [anon_sym_with] = ACTIONS(1),
    [anon_sym_ignoremissing] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_block] = ACTIONS(1),
    [anon_sym_set] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_macro] = ACTIONS(1),
    [anon_sym_call] = ACTIONS(1),
    [anon_sym_filter] = ACTIONS(1),
    [sym_jinja_raw] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_endmacro] = ACTIONS(1),
    [anon_sym_endfor] = ACTIONS(1),
    [anon_sym_endif] = ACTIONS(1),
    [anon_sym_endblock] = ACTIONS(1),
    [anon_sym_endraw] = ACTIONS(1),
    [anon_sym_endcall] = ACTIONS(1),
    [sym_jinja_comment_open] = ACTIONS(1),
    [sym_jinja_comment_close] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_SLASH_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT_SLASH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(235),
    [sym__jinja_value] = STATE(72),
    [sym_jinja_statement] = STATE(59),
    [sym_jinja_comment] = STATE(59),
    [sym_html_content] = STATE(59),
    [aux_sym_source_file_repeat1] = STATE(59),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_jinja_value_open] = ACTIONS(5),
    [sym_jinja_statement_open] = ACTIONS(7),
    [sym_jinja_comment_open] = ACTIONS(9),
    [anon_sym_LT] = ACTIONS(11),
    [sym__text] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 16,
    ACTIONS(15), 1,
      anon_sym_DASH,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_elif,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_extends,
    ACTIONS(29), 1,
      anon_sym_block,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_macro,
    ACTIONS(35), 1,
      anon_sym_call,
    ACTIONS(37), 1,
      anon_sym_filter,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_from,
    ACTIONS(23), 2,
      sym_jinja_else,
      sym_jinja_raw,
    ACTIONS(43), 6,
      anon_sym_endmacro,
      anon_sym_endfor,
      anon_sym_endif,
      anon_sym_endblock,
      anon_sym_endraw,
      anon_sym_endcall,
    STATE(174), 13,
      sym_jinja_for,
      sym_jinja_if,
      sym_jinja_elif,
      sym_jinja_include,
      sym_jinja_extends,
      sym_jinja_block,
      sym_jinja_set,
      sym_jinja_macro,
      sym_jinja_call,
      sym_jinja_filter,
      sym_jinja_import,
      sym_jinja_from,
      sym_jinja_end_statement,
  [67] = 16,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_elif,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_extends,
    ACTIONS(29), 1,
      anon_sym_block,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_macro,
    ACTIONS(35), 1,
      anon_sym_call,
    ACTIONS(37), 1,
      anon_sym_filter,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_from,
    ACTIONS(45), 1,
      anon_sym_DASH,
    ACTIONS(47), 2,
      sym_jinja_else,
      sym_jinja_raw,
    ACTIONS(43), 6,
      anon_sym_endmacro,
      anon_sym_endfor,
      anon_sym_endif,
      anon_sym_endblock,
      anon_sym_endraw,
      anon_sym_endcall,
    STATE(191), 13,
      sym_jinja_for,
      sym_jinja_if,
      sym_jinja_elif,
      sym_jinja_include,
      sym_jinja_extends,
      sym_jinja_block,
      sym_jinja_set,
      sym_jinja_macro,
      sym_jinja_call,
      sym_jinja_filter,
      sym_jinja_import,
      sym_jinja_from,
      sym_jinja_end_statement,
  [134] = 15,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_elif,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_extends,
    ACTIONS(29), 1,
      anon_sym_block,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_macro,
    ACTIONS(35), 1,
      anon_sym_call,
    ACTIONS(37), 1,
      anon_sym_filter,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_from,
    ACTIONS(49), 2,
      sym_jinja_else,
      sym_jinja_raw,
    ACTIONS(43), 6,
      anon_sym_endmacro,
      anon_sym_endfor,
      anon_sym_endif,
      anon_sym_endblock,
      anon_sym_endraw,
      anon_sym_endcall,
    STATE(195), 13,
      sym_jinja_for,
      sym_jinja_if,
      sym_jinja_elif,
      sym_jinja_include,
      sym_jinja_extends,
      sym_jinja_block,
      sym_jinja_set,
      sym_jinja_macro,
      sym_jinja_call,
      sym_jinja_filter,
      sym_jinja_import,
      sym_jinja_from,
      sym_jinja_end_statement,
  [198] = 15,
    ACTIONS(17), 1,
      anon_sym_for,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      anon_sym_elif,
    ACTIONS(25), 1,
      anon_sym_include,
    ACTIONS(27), 1,
      anon_sym_extends,
    ACTIONS(29), 1,
      anon_sym_block,
    ACTIONS(31), 1,
      anon_sym_set,
    ACTIONS(33), 1,
      anon_sym_macro,
    ACTIONS(35), 1,
      anon_sym_call,
    ACTIONS(37), 1,
      anon_sym_filter,
    ACTIONS(39), 1,
      anon_sym_import,
    ACTIONS(41), 1,
      anon_sym_from,
    ACTIONS(51), 2,
      sym_jinja_else,
      sym_jinja_raw,
    ACTIONS(43), 6,
      anon_sym_endmacro,
      anon_sym_endfor,
      anon_sym_endif,
      anon_sym_endblock,
      anon_sym_endraw,
      anon_sym_endcall,
    STATE(194), 13,
      sym_jinja_for,
      sym_jinja_if,
      sym_jinja_elif,
      sym_jinja_include,
      sym_jinja_extends,
      sym_jinja_block,
      sym_jinja_set,
      sym_jinja_macro,
      sym_jinja_call,
      sym_jinja_filter,
      sym_jinja_import,
      sym_jinja_from,
      sym_jinja_end_statement,
  [262] = 2,
    ACTIONS(55), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(53), 18,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_with,
      anon_sym_ignoremissing,
      anon_sym_import,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COLON,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [287] = 14,
    ACTIONS(57), 1,
      anon_sym_DASH,
    ACTIONS(59), 1,
      sym_jinja_statement_close,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(75), 1,
      sym_integer,
    ACTIONS(77), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    STATE(186), 1,
      sym_argument_list,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(106), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [336] = 12,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(79), 1,
      anon_sym_COMMA,
    ACTIONS(81), 1,
      anon_sym_RPAREN,
    ACTIONS(83), 1,
      sym_integer,
    ACTIONS(85), 1,
      sym_float,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(121), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [380] = 12,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(87), 1,
      anon_sym_COMMA,
    ACTIONS(89), 1,
      anon_sym_RPAREN,
    ACTIONS(91), 1,
      sym_integer,
    ACTIONS(93), 1,
      sym_float,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(116), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [424] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(196), 2,
      sym__condition,
      sym_comparison,
    STATE(61), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [465] = 12,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(99), 1,
      anon_sym_COMMA,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    ACTIONS(103), 1,
      sym_integer,
    ACTIONS(105), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(138), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [508] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(109), 1,
      sym_integer,
    ACTIONS(111), 1,
      sym_float,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [549] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(197), 2,
      sym__condition,
      sym_comparison,
    STATE(61), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [590] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(95), 1,
      sym_integer,
    ACTIONS(97), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(148), 2,
      sym__condition,
      sym_comparison,
    STATE(61), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [631] = 12,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(113), 1,
      anon_sym_COMMA,
    ACTIONS(115), 1,
      anon_sym_RBRACK,
    ACTIONS(117), 1,
      sym_integer,
    ACTIONS(119), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(125), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [674] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(109), 1,
      sym_integer,
    ACTIONS(111), 1,
      sym_float,
    ACTIONS(121), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [715] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(109), 1,
      sym_integer,
    ACTIONS(111), 1,
      sym_float,
    ACTIONS(123), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [756] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(109), 1,
      sym_integer,
    ACTIONS(111), 1,
      sym_float,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [797] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(160), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [837] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_float,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(160), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [877] = 2,
    ACTIONS(137), 3,
      anon_sym_EQ,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(135), 14,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_as,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [899] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_float,
    ACTIONS(139), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(160), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [939] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(109), 1,
      sym_integer,
    ACTIONS(111), 1,
      sym_float,
    STATE(93), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(141), 7,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
      sym_kwarg,
  [977] = 11,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_float,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(160), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1017] = 2,
    ACTIONS(145), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(143), 14,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_ignoremissing,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1038] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(147), 1,
      sym_integer,
    ACTIONS(149), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(220), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1075] = 2,
    ACTIONS(153), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(151), 14,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_ignoremissing,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1096] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(47), 1,
      sym_argument_list,
    ACTIONS(157), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(155), 12,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1121] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(159), 1,
      sym_integer,
    ACTIONS(161), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(203), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1158] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(163), 1,
      sym_integer,
    ACTIONS(165), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(214), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1195] = 10,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(173), 1,
      anon_sym_LBRACK,
    ACTIONS(175), 1,
      anon_sym_LBRACE,
    ACTIONS(177), 1,
      sym__identifier,
    ACTIONS(179), 1,
      sym_integer,
    ACTIONS(181), 1,
      sym_float,
    STATE(102), 1,
      sym_identifier,
    ACTIONS(171), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(158), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1232] = 2,
    ACTIONS(185), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(183), 14,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_ignoremissing,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1253] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(129), 1,
      sym_integer,
    ACTIONS(131), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(160), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1290] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(187), 1,
      sym_integer,
    ACTIONS(189), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(115), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1327] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(191), 1,
      sym_integer,
    ACTIONS(193), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(155), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1364] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(195), 1,
      sym_integer,
    ACTIONS(197), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(139), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1401] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(199), 1,
      sym_integer,
    ACTIONS(201), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(232), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1438] = 10,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    ACTIONS(73), 1,
      sym__identifier,
    ACTIONS(203), 1,
      sym_integer,
    ACTIONS(205), 1,
      sym_float,
    STATE(28), 1,
      sym_identifier,
    ACTIONS(67), 2,
      anon_sym_True,
      anon_sym_False,
    STATE(147), 6,
      sym__expr,
      sym_fn_call,
      sym_lit_string,
      sym_bool,
      sym_list,
      sym_dict,
  [1475] = 2,
    ACTIONS(209), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(207), 14,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_ignoremissing,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1496] = 2,
    ACTIONS(213), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(211), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1516] = 2,
    ACTIONS(217), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(215), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1536] = 2,
    ACTIONS(221), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(219), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1556] = 2,
    ACTIONS(225), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(223), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1576] = 2,
    ACTIONS(229), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(227), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1596] = 2,
    ACTIONS(233), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(231), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1616] = 2,
    ACTIONS(237), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(235), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1636] = 2,
    ACTIONS(241), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(239), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1656] = 2,
    ACTIONS(245), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(243), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1676] = 2,
    ACTIONS(249), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(247), 13,
      sym_jinja_value_close,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_in,
      anon_sym_if,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [1696] = 8,
    ACTIONS(251), 1,
      sym_jinja_value_open,
    ACTIONS(253), 1,
      sym_jinja_statement_open,
    ACTIONS(255), 1,
      sym_jinja_comment_open,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(259), 1,
      anon_sym_LT_SLASH,
    ACTIONS(261), 1,
      sym__text,
    STATE(85), 1,
      sym__jinja_value,
    STATE(53), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [1724] = 8,
    ACTIONS(251), 1,
      sym_jinja_value_open,
    ACTIONS(253), 1,
      sym_jinja_statement_open,
    ACTIONS(255), 1,
      sym_jinja_comment_open,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym__text,
    ACTIONS(263), 1,
      anon_sym_LT_SLASH,
    STATE(85), 1,
      sym__jinja_value,
    STATE(53), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [1752] = 8,
    ACTIONS(265), 1,
      ts_builtin_sym_end,
    ACTIONS(267), 1,
      sym_jinja_value_open,
    ACTIONS(270), 1,
      sym_jinja_statement_open,
    ACTIONS(273), 1,
      sym_jinja_comment_open,
    ACTIONS(276), 1,
      anon_sym_LT,
    ACTIONS(279), 1,
      sym__text,
    STATE(72), 1,
      sym__jinja_value,
    STATE(52), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_source_file_repeat1,
  [1780] = 8,
    ACTIONS(282), 1,
      sym_jinja_value_open,
    ACTIONS(285), 1,
      sym_jinja_statement_open,
    ACTIONS(288), 1,
      sym_jinja_comment_open,
    ACTIONS(291), 1,
      anon_sym_LT,
    ACTIONS(294), 1,
      anon_sym_LT_SLASH,
    ACTIONS(296), 1,
      sym__text,
    STATE(85), 1,
      sym__jinja_value,
    STATE(53), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [1808] = 8,
    ACTIONS(251), 1,
      sym_jinja_value_open,
    ACTIONS(253), 1,
      sym_jinja_statement_open,
    ACTIONS(255), 1,
      sym_jinja_comment_open,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym__text,
    ACTIONS(299), 1,
      anon_sym_LT_SLASH,
    STATE(85), 1,
      sym__jinja_value,
    STATE(53), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [1836] = 8,
    ACTIONS(251), 1,
      sym_jinja_value_open,
    ACTIONS(253), 1,
      sym_jinja_statement_open,
    ACTIONS(255), 1,
      sym_jinja_comment_open,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(301), 1,
      anon_sym_LT_SLASH,
    ACTIONS(303), 1,
      sym__text,
    STATE(85), 1,
      sym__jinja_value,
    STATE(50), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [1864] = 8,
    ACTIONS(251), 1,
      sym_jinja_value_open,
    ACTIONS(253), 1,
      sym_jinja_statement_open,
    ACTIONS(255), 1,
      sym_jinja_comment_open,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(261), 1,
      sym__text,
    ACTIONS(305), 1,
      anon_sym_LT_SLASH,
    STATE(85), 1,
      sym__jinja_value,
    STATE(53), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [1892] = 8,
    ACTIONS(251), 1,
      sym_jinja_value_open,
    ACTIONS(253), 1,
      sym_jinja_statement_open,
    ACTIONS(255), 1,
      sym_jinja_comment_open,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(307), 1,
      anon_sym_LT_SLASH,
    ACTIONS(309), 1,
      sym__text,
    STATE(85), 1,
      sym__jinja_value,
    STATE(56), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [1920] = 8,
    ACTIONS(251), 1,
      sym_jinja_value_open,
    ACTIONS(253), 1,
      sym_jinja_statement_open,
    ACTIONS(255), 1,
      sym_jinja_comment_open,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(311), 1,
      anon_sym_LT_SLASH,
    ACTIONS(313), 1,
      sym__text,
    STATE(85), 1,
      sym__jinja_value,
    STATE(54), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [1948] = 8,
    ACTIONS(5), 1,
      sym_jinja_value_open,
    ACTIONS(7), 1,
      sym_jinja_statement_open,
    ACTIONS(9), 1,
      sym_jinja_comment_open,
    ACTIONS(11), 1,
      anon_sym_LT,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
    ACTIONS(317), 1,
      sym__text,
    STATE(72), 1,
      sym__jinja_value,
    STATE(52), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_source_file_repeat1,
  [1976] = 8,
    ACTIONS(251), 1,
      sym_jinja_value_open,
    ACTIONS(253), 1,
      sym_jinja_statement_open,
    ACTIONS(255), 1,
      sym_jinja_comment_open,
    ACTIONS(257), 1,
      anon_sym_LT,
    ACTIONS(319), 1,
      anon_sym_LT_SLASH,
    ACTIONS(321), 1,
      sym__text,
    STATE(85), 1,
      sym__jinja_value,
    STATE(51), 4,
      sym_jinja_statement,
      sym_jinja_comment,
      sym_html_content,
      aux_sym_html_content_repeat2,
  [2004] = 3,
    ACTIONS(323), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
    ACTIONS(325), 2,
      anon_sym_LT,
      anon_sym_GT,
    ACTIONS(327), 4,
      anon_sym_EQ_EQ,
      anon_sym_BANG_EQ,
      anon_sym_LT_EQ,
      anon_sym_GT_EQ,
  [2019] = 5,
    ACTIONS(329), 1,
      anon_sym_SLASH_GT,
    ACTIONS(331), 1,
      anon_sym_GT,
    ACTIONS(333), 1,
      aux_sym_html_tag_name_token1,
    STATE(105), 1,
      sym_html_attribute_name,
    STATE(71), 2,
      sym_html_attribute,
      aux_sym_html_content_repeat1,
  [2036] = 4,
    ACTIONS(337), 1,
      aux_sym_html_tag_name_token1,
    STATE(105), 1,
      sym_html_attribute_name,
    ACTIONS(335), 2,
      anon_sym_SLASH_GT,
      anon_sym_GT,
    STATE(63), 2,
      sym_html_attribute,
      aux_sym_html_content_repeat1,
  [2051] = 1,
    ACTIONS(340), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2060] = 1,
    ACTIONS(342), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2069] = 1,
    ACTIONS(344), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2078] = 2,
    ACTIONS(346), 1,
      ts_builtin_sym_end,
    ACTIONS(348), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2089] = 2,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(352), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2100] = 6,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(354), 1,
      anon_sym_COMMA,
    ACTIONS(356), 1,
      anon_sym_RBRACE,
    STATE(128), 1,
      sym_pair,
    STATE(205), 1,
      sym_lit_string,
  [2119] = 2,
    ACTIONS(358), 1,
      ts_builtin_sym_end,
    ACTIONS(342), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2130] = 5,
    ACTIONS(333), 1,
      aux_sym_html_tag_name_token1,
    ACTIONS(360), 1,
      anon_sym_SLASH_GT,
    ACTIONS(362), 1,
      anon_sym_GT,
    STATE(105), 1,
      sym_html_attribute_name,
    STATE(63), 2,
      sym_html_attribute,
      aux_sym_html_content_repeat1,
  [2147] = 2,
    ACTIONS(364), 1,
      ts_builtin_sym_end,
    ACTIONS(366), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2158] = 2,
    ACTIONS(368), 1,
      ts_builtin_sym_end,
    ACTIONS(340), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2169] = 2,
    ACTIONS(370), 1,
      ts_builtin_sym_end,
    ACTIONS(372), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2180] = 1,
    ACTIONS(374), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2189] = 2,
    ACTIONS(376), 1,
      ts_builtin_sym_end,
    ACTIONS(344), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2200] = 2,
    ACTIONS(378), 1,
      ts_builtin_sym_end,
    ACTIONS(374), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2211] = 2,
    ACTIONS(380), 1,
      ts_builtin_sym_end,
    ACTIONS(382), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2222] = 1,
    ACTIONS(384), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2231] = 6,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(386), 1,
      anon_sym_COMMA,
    ACTIONS(388), 1,
      anon_sym_RBRACE,
    STATE(137), 1,
      sym_pair,
    STATE(205), 1,
      sym_lit_string,
  [2250] = 2,
    ACTIONS(390), 1,
      ts_builtin_sym_end,
    ACTIONS(384), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2261] = 1,
    ACTIONS(372), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2270] = 1,
    ACTIONS(392), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2279] = 2,
    ACTIONS(394), 1,
      ts_builtin_sym_end,
    ACTIONS(392), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2290] = 1,
    ACTIONS(396), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2299] = 2,
    ACTIONS(398), 1,
      ts_builtin_sym_end,
    ACTIONS(400), 5,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      sym__text,
  [2310] = 5,
    ACTIONS(333), 1,
      aux_sym_html_tag_name_token1,
    ACTIONS(402), 1,
      anon_sym_SLASH_GT,
    ACTIONS(404), 1,
      anon_sym_GT,
    STATE(105), 1,
      sym_html_attribute_name,
    STATE(63), 2,
      sym_html_attribute,
      aux_sym_html_content_repeat1,
  [2327] = 1,
    ACTIONS(352), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2336] = 5,
    ACTIONS(333), 1,
      aux_sym_html_tag_name_token1,
    ACTIONS(406), 1,
      anon_sym_SLASH_GT,
    ACTIONS(408), 1,
      anon_sym_GT,
    STATE(105), 1,
      sym_html_attribute_name,
    STATE(87), 2,
      sym_html_attribute,
      aux_sym_html_content_repeat1,
  [2353] = 1,
    ACTIONS(348), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2362] = 1,
    ACTIONS(400), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2371] = 1,
    ACTIONS(382), 6,
      sym_jinja_value_open,
      sym_jinja_statement_open,
      sym_jinja_comment_open,
      anon_sym_LT,
      anon_sym_LT_SLASH,
      sym__text,
  [2380] = 4,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    ACTIONS(410), 1,
      anon_sym_EQ,
    STATE(47), 1,
      sym_argument_list,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2394] = 5,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_pair,
    STATE(205), 1,
      sym_lit_string,
  [2410] = 1,
    ACTIONS(53), 5,
      anon_sym_COMMA,
      anon_sym_SLASH_GT,
      anon_sym_GT,
      aux_sym_html_tag_name_token1,
      anon_sym_RBRACE,
  [2418] = 5,
    ACTIONS(167), 1,
      anon_sym_SQUOTE,
    ACTIONS(169), 1,
      anon_sym_DQUOTE,
    ACTIONS(414), 1,
      sym_jinja_value_open,
    STATE(122), 1,
      sym__jinja_value,
    STATE(123), 1,
      sym_lit_string,
  [2434] = 5,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_pair,
    STATE(205), 1,
      sym_lit_string,
  [2450] = 5,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(418), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_pair,
    STATE(205), 1,
      sym_lit_string,
  [2466] = 4,
    ACTIONS(422), 1,
      anon_sym_as,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(108), 1,
      aux_sym_jinja_from_repeat1,
    ACTIONS(420), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2480] = 5,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    STATE(157), 1,
      sym_pair,
    STATE(205), 1,
      sym_lit_string,
  [2496] = 3,
    ACTIONS(430), 1,
      anon_sym_with,
    ACTIONS(432), 1,
      anon_sym_ignoremissing,
    ACTIONS(428), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2507] = 3,
    ACTIONS(434), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_argument_list,
    ACTIONS(155), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2518] = 2,
    ACTIONS(438), 1,
      anon_sym_as,
    ACTIONS(436), 3,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_COMMA,
  [2527] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(110), 1,
      aux_sym_jinja_from_repeat1,
    ACTIONS(440), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2538] = 2,
    ACTIONS(442), 1,
      anon_sym_EQ,
    ACTIONS(444), 3,
      anon_sym_SLASH_GT,
      anon_sym_GT,
      aux_sym_html_tag_name_token1,
  [2547] = 3,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(167), 1,
      sym_argument_list,
    ACTIONS(446), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2558] = 1,
    ACTIONS(448), 4,
      anon_sym_EQ,
      anon_sym_SLASH_GT,
      anon_sym_GT,
      aux_sym_html_tag_name_token1,
  [2565] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_jinja_from_repeat1,
    ACTIONS(450), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2576] = 4,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym_pair,
    STATE(205), 1,
      sym_lit_string,
  [2589] = 3,
    ACTIONS(424), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_jinja_from_repeat1,
    ACTIONS(452), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2600] = 3,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    STATE(111), 1,
      aux_sym_jinja_from_repeat1,
    ACTIONS(454), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2611] = 1,
    ACTIONS(380), 3,
      anon_sym_SLASH_GT,
      anon_sym_GT,
      aux_sym_html_tag_name_token1,
  [2617] = 1,
    ACTIONS(459), 3,
      anon_sym_SLASH_GT,
      anon_sym_GT,
      aux_sym_html_tag_name_token1,
  [2623] = 3,
    ACTIONS(107), 1,
      anon_sym_RPAREN,
    ACTIONS(461), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_argument_list_repeat1,
  [2633] = 2,
    ACTIONS(465), 1,
      anon_sym_if,
    ACTIONS(463), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2641] = 3,
    ACTIONS(467), 1,
      anon_sym_COMMA,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
    STATE(114), 1,
      aux_sym_argument_list_repeat1,
  [2651] = 2,
    ACTIONS(473), 1,
      anon_sym_ignoremissing,
    ACTIONS(471), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2659] = 3,
    ACTIONS(426), 1,
      anon_sym_RBRACE,
    ACTIONS(475), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_dict_repeat1,
  [2669] = 3,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    ACTIONS(477), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_list_repeat1,
  [2679] = 1,
    ACTIONS(135), 3,
      anon_sym_COMMA,
      anon_sym_LPAREN,
      anon_sym_RBRACE,
  [2685] = 3,
    ACTIONS(479), 1,
      anon_sym_COMMA,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
    STATE(130), 1,
      aux_sym_argument_list_repeat1,
  [2695] = 1,
    ACTIONS(483), 3,
      anon_sym_SLASH_GT,
      anon_sym_GT,
      aux_sym_html_tag_name_token1,
  [2701] = 1,
    ACTIONS(485), 3,
      anon_sym_SLASH_GT,
      anon_sym_GT,
      aux_sym_html_tag_name_token1,
  [2707] = 3,
    ACTIONS(141), 1,
      anon_sym_RBRACK,
    ACTIONS(487), 1,
      anon_sym_COMMA,
    STATE(134), 1,
      aux_sym_list_repeat1,
  [2717] = 3,
    ACTIONS(489), 1,
      anon_sym_COMMA,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
    STATE(119), 1,
      aux_sym_list_repeat1,
  [2727] = 3,
    ACTIONS(493), 1,
      anon_sym_COMMA,
    ACTIONS(496), 1,
      anon_sym_RBRACE,
    STATE(126), 1,
      aux_sym_dict_repeat1,
  [2737] = 3,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(222), 1,
      sym_lit_string,
  [2747] = 3,
    ACTIONS(498), 1,
      anon_sym_COMMA,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
    STATE(133), 1,
      aux_sym_dict_repeat1,
  [2757] = 3,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(221), 1,
      sym_lit_string,
  [2767] = 3,
    ACTIONS(125), 1,
      anon_sym_RPAREN,
    ACTIONS(502), 1,
      anon_sym_COMMA,
    STATE(131), 1,
      aux_sym_argument_list_repeat1,
  [2777] = 3,
    ACTIONS(504), 1,
      anon_sym_COMMA,
    ACTIONS(507), 1,
      anon_sym_RPAREN,
    STATE(131), 1,
      aux_sym_argument_list_repeat1,
  [2787] = 3,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(193), 1,
      sym_lit_string,
  [2797] = 3,
    ACTIONS(412), 1,
      anon_sym_RBRACE,
    ACTIONS(509), 1,
      anon_sym_COMMA,
    STATE(126), 1,
      aux_sym_dict_repeat1,
  [2807] = 3,
    ACTIONS(511), 1,
      anon_sym_COMMA,
    ACTIONS(514), 1,
      anon_sym_RBRACK,
    STATE(134), 1,
      aux_sym_list_repeat1,
  [2817] = 3,
    ACTIONS(63), 1,
      anon_sym_SQUOTE,
    ACTIONS(65), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      sym_lit_string,
  [2827] = 1,
    ACTIONS(516), 3,
      anon_sym_DASH,
      sym_jinja_statement_close,
      anon_sym_COMMA,
  [2833] = 3,
    ACTIONS(518), 1,
      anon_sym_COMMA,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    STATE(118), 1,
      aux_sym_dict_repeat1,
  [2843] = 3,
    ACTIONS(522), 1,
      anon_sym_COMMA,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
    STATE(124), 1,
      aux_sym_list_repeat1,
  [2853] = 1,
    ACTIONS(526), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2858] = 1,
    ACTIONS(528), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2863] = 1,
    ACTIONS(507), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2868] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(236), 1,
      sym_html_tag_name,
  [2875] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(62), 1,
      sym_html_tag_name,
  [2882] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(219), 1,
      sym_html_tag_name,
  [2889] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(228), 1,
      sym_html_tag_name,
  [2896] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(218), 1,
      sym_html_tag_name,
  [2903] = 1,
    ACTIONS(532), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [2908] = 1,
    ACTIONS(534), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2913] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(231), 1,
      sym_html_tag_name,
  [2920] = 1,
    ACTIONS(536), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2925] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(104), 1,
      sym_identifier,
  [2932] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(217), 1,
      sym_html_tag_name,
  [2939] = 1,
    ACTIONS(540), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2944] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(215), 1,
      sym_html_tag_name,
  [2951] = 1,
    ACTIONS(542), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [2956] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(136), 1,
      sym_identifier,
  [2963] = 1,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2968] = 1,
    ACTIONS(544), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2973] = 1,
    ACTIONS(235), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2978] = 1,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [2983] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(230), 1,
      sym_html_tag_name,
  [2990] = 1,
    ACTIONS(223), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [2995] = 1,
    ACTIONS(207), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3000] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(99), 1,
      sym_identifier,
  [3007] = 1,
    ACTIONS(239), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3012] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(153), 1,
      sym_identifier,
  [3019] = 1,
    ACTIONS(546), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3024] = 1,
    ACTIONS(548), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3029] = 1,
    ACTIONS(550), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3034] = 1,
    ACTIONS(219), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3039] = 1,
    ACTIONS(151), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3044] = 1,
    ACTIONS(215), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3049] = 2,
    ACTIONS(71), 1,
      anon_sym_LBRACE,
    STATE(117), 1,
      sym_dict,
  [3056] = 2,
    ACTIONS(552), 1,
      anon_sym_DASH,
    ACTIONS(554), 1,
      sym_jinja_statement_close,
  [3063] = 1,
    ACTIONS(231), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3068] = 1,
    ACTIONS(143), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3073] = 1,
    ACTIONS(211), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3078] = 2,
    ACTIONS(530), 1,
      aux_sym_html_tag_name_token1,
    STATE(89), 1,
      sym_html_tag_name,
  [3085] = 1,
    ACTIONS(247), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3090] = 1,
    ACTIONS(183), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3095] = 1,
    ACTIONS(243), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3100] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(140), 1,
      sym_identifier,
  [3107] = 1,
    ACTIONS(227), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [3112] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(216), 1,
      sym_identifier,
  [3119] = 1,
    ACTIONS(556), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3124] = 1,
    ACTIONS(558), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3129] = 2,
    ACTIONS(61), 1,
      anon_sym_LPAREN,
    STATE(168), 1,
      sym_argument_list,
  [3136] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(187), 1,
      sym_identifier,
  [3143] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(103), 1,
      sym_identifier,
  [3150] = 2,
    ACTIONS(538), 1,
      sym__identifier,
    STATE(185), 1,
      sym_identifier,
  [3157] = 2,
    ACTIONS(560), 1,
      anon_sym_DASH,
    ACTIONS(562), 1,
      sym_jinja_statement_close,
  [3164] = 1,
    ACTIONS(564), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3169] = 1,
    ACTIONS(566), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3174] = 2,
    ACTIONS(568), 1,
      anon_sym_DASH,
    ACTIONS(570), 1,
      sym_jinja_statement_close,
  [3181] = 2,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(574), 1,
      sym_jinja_statement_close,
  [3188] = 1,
    ACTIONS(576), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3193] = 1,
    ACTIONS(578), 2,
      anon_sym_DASH,
      sym_jinja_statement_close,
  [3198] = 1,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
  [3202] = 1,
    ACTIONS(570), 1,
      sym_jinja_statement_close,
  [3206] = 1,
    ACTIONS(524), 1,
      anon_sym_RBRACK,
  [3210] = 1,
    ACTIONS(580), 1,
      anon_sym_DQUOTE,
  [3214] = 1,
    ACTIONS(574), 1,
      sym_jinja_statement_close,
  [3218] = 1,
    ACTIONS(582), 1,
      anon_sym_in,
  [3222] = 1,
    ACTIONS(580), 1,
      anon_sym_SQUOTE,
  [3226] = 1,
    ACTIONS(584), 1,
      anon_sym_COLON,
  [3230] = 1,
    ACTIONS(500), 1,
      anon_sym_RBRACE,
  [3234] = 1,
    ACTIONS(491), 1,
      anon_sym_RBRACK,
  [3238] = 1,
    ACTIONS(481), 1,
      anon_sym_RPAREN,
  [3242] = 1,
    ACTIONS(586), 1,
      anon_sym_DQUOTE,
  [3246] = 1,
    ACTIONS(588), 1,
      sym_jinja_statement_close,
  [3250] = 1,
    ACTIONS(586), 1,
      anon_sym_SQUOTE,
  [3254] = 1,
    ACTIONS(590), 1,
      sym_jinja_comment_close,
  [3258] = 1,
    ACTIONS(592), 1,
      sym_jinja_comment_close,
  [3262] = 1,
    ACTIONS(594), 1,
      sym_jinja_value_close,
  [3266] = 1,
    ACTIONS(596), 1,
      anon_sym_GT,
  [3270] = 1,
    ACTIONS(598), 1,
      anon_sym_EQ,
  [3274] = 1,
    ACTIONS(600), 1,
      anon_sym_GT,
  [3278] = 1,
    ACTIONS(602), 1,
      anon_sym_GT,
  [3282] = 1,
    ACTIONS(604), 1,
      anon_sym_GT,
  [3286] = 1,
    ACTIONS(606), 1,
      sym_jinja_value_close,
  [3290] = 1,
    ACTIONS(608), 1,
      anon_sym_as,
  [3294] = 1,
    ACTIONS(610), 1,
      anon_sym_import,
  [3298] = 1,
    ACTIONS(612), 1,
      sym_jinja_comment_content,
  [3302] = 1,
    ACTIONS(469), 1,
      anon_sym_RPAREN,
  [3306] = 1,
    ACTIONS(614), 1,
      aux_sym_lit_string_token1,
  [3310] = 1,
    ACTIONS(616), 1,
      aux_sym_lit_string_token2,
  [3314] = 1,
    ACTIONS(618), 1,
      sym_jinja_statement_close,
  [3318] = 1,
    ACTIONS(620), 1,
      anon_sym_GT,
  [3322] = 1,
    ACTIONS(622), 1,
      sym_jinja_comment_content,
  [3326] = 1,
    ACTIONS(624), 1,
      anon_sym_GT,
  [3330] = 1,
    ACTIONS(626), 1,
      anon_sym_GT,
  [3334] = 1,
    ACTIONS(628), 1,
      sym_jinja_value_close,
  [3338] = 1,
    ACTIONS(630), 1,
      aux_sym_lit_string_token2,
  [3342] = 1,
    ACTIONS(632), 1,
      aux_sym_lit_string_token1,
  [3346] = 1,
    ACTIONS(634), 1,
      ts_builtin_sym_end,
  [3350] = 1,
    ACTIONS(636), 1,
      anon_sym_GT,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 67,
  [SMALL_STATE(4)] = 134,
  [SMALL_STATE(5)] = 198,
  [SMALL_STATE(6)] = 262,
  [SMALL_STATE(7)] = 287,
  [SMALL_STATE(8)] = 336,
  [SMALL_STATE(9)] = 380,
  [SMALL_STATE(10)] = 424,
  [SMALL_STATE(11)] = 465,
  [SMALL_STATE(12)] = 508,
  [SMALL_STATE(13)] = 549,
  [SMALL_STATE(14)] = 590,
  [SMALL_STATE(15)] = 631,
  [SMALL_STATE(16)] = 674,
  [SMALL_STATE(17)] = 715,
  [SMALL_STATE(18)] = 756,
  [SMALL_STATE(19)] = 797,
  [SMALL_STATE(20)] = 837,
  [SMALL_STATE(21)] = 877,
  [SMALL_STATE(22)] = 899,
  [SMALL_STATE(23)] = 939,
  [SMALL_STATE(24)] = 977,
  [SMALL_STATE(25)] = 1017,
  [SMALL_STATE(26)] = 1038,
  [SMALL_STATE(27)] = 1075,
  [SMALL_STATE(28)] = 1096,
  [SMALL_STATE(29)] = 1121,
  [SMALL_STATE(30)] = 1158,
  [SMALL_STATE(31)] = 1195,
  [SMALL_STATE(32)] = 1232,
  [SMALL_STATE(33)] = 1253,
  [SMALL_STATE(34)] = 1290,
  [SMALL_STATE(35)] = 1327,
  [SMALL_STATE(36)] = 1364,
  [SMALL_STATE(37)] = 1401,
  [SMALL_STATE(38)] = 1438,
  [SMALL_STATE(39)] = 1475,
  [SMALL_STATE(40)] = 1496,
  [SMALL_STATE(41)] = 1516,
  [SMALL_STATE(42)] = 1536,
  [SMALL_STATE(43)] = 1556,
  [SMALL_STATE(44)] = 1576,
  [SMALL_STATE(45)] = 1596,
  [SMALL_STATE(46)] = 1616,
  [SMALL_STATE(47)] = 1636,
  [SMALL_STATE(48)] = 1656,
  [SMALL_STATE(49)] = 1676,
  [SMALL_STATE(50)] = 1696,
  [SMALL_STATE(51)] = 1724,
  [SMALL_STATE(52)] = 1752,
  [SMALL_STATE(53)] = 1780,
  [SMALL_STATE(54)] = 1808,
  [SMALL_STATE(55)] = 1836,
  [SMALL_STATE(56)] = 1864,
  [SMALL_STATE(57)] = 1892,
  [SMALL_STATE(58)] = 1920,
  [SMALL_STATE(59)] = 1948,
  [SMALL_STATE(60)] = 1976,
  [SMALL_STATE(61)] = 2004,
  [SMALL_STATE(62)] = 2019,
  [SMALL_STATE(63)] = 2036,
  [SMALL_STATE(64)] = 2051,
  [SMALL_STATE(65)] = 2060,
  [SMALL_STATE(66)] = 2069,
  [SMALL_STATE(67)] = 2078,
  [SMALL_STATE(68)] = 2089,
  [SMALL_STATE(69)] = 2100,
  [SMALL_STATE(70)] = 2119,
  [SMALL_STATE(71)] = 2130,
  [SMALL_STATE(72)] = 2147,
  [SMALL_STATE(73)] = 2158,
  [SMALL_STATE(74)] = 2169,
  [SMALL_STATE(75)] = 2180,
  [SMALL_STATE(76)] = 2189,
  [SMALL_STATE(77)] = 2200,
  [SMALL_STATE(78)] = 2211,
  [SMALL_STATE(79)] = 2222,
  [SMALL_STATE(80)] = 2231,
  [SMALL_STATE(81)] = 2250,
  [SMALL_STATE(82)] = 2261,
  [SMALL_STATE(83)] = 2270,
  [SMALL_STATE(84)] = 2279,
  [SMALL_STATE(85)] = 2290,
  [SMALL_STATE(86)] = 2299,
  [SMALL_STATE(87)] = 2310,
  [SMALL_STATE(88)] = 2327,
  [SMALL_STATE(89)] = 2336,
  [SMALL_STATE(90)] = 2353,
  [SMALL_STATE(91)] = 2362,
  [SMALL_STATE(92)] = 2371,
  [SMALL_STATE(93)] = 2380,
  [SMALL_STATE(94)] = 2394,
  [SMALL_STATE(95)] = 2410,
  [SMALL_STATE(96)] = 2418,
  [SMALL_STATE(97)] = 2434,
  [SMALL_STATE(98)] = 2450,
  [SMALL_STATE(99)] = 2466,
  [SMALL_STATE(100)] = 2480,
  [SMALL_STATE(101)] = 2496,
  [SMALL_STATE(102)] = 2507,
  [SMALL_STATE(103)] = 2518,
  [SMALL_STATE(104)] = 2527,
  [SMALL_STATE(105)] = 2538,
  [SMALL_STATE(106)] = 2547,
  [SMALL_STATE(107)] = 2558,
  [SMALL_STATE(108)] = 2565,
  [SMALL_STATE(109)] = 2576,
  [SMALL_STATE(110)] = 2589,
  [SMALL_STATE(111)] = 2600,
  [SMALL_STATE(112)] = 2611,
  [SMALL_STATE(113)] = 2617,
  [SMALL_STATE(114)] = 2623,
  [SMALL_STATE(115)] = 2633,
  [SMALL_STATE(116)] = 2641,
  [SMALL_STATE(117)] = 2651,
  [SMALL_STATE(118)] = 2659,
  [SMALL_STATE(119)] = 2669,
  [SMALL_STATE(120)] = 2679,
  [SMALL_STATE(121)] = 2685,
  [SMALL_STATE(122)] = 2695,
  [SMALL_STATE(123)] = 2701,
  [SMALL_STATE(124)] = 2707,
  [SMALL_STATE(125)] = 2717,
  [SMALL_STATE(126)] = 2727,
  [SMALL_STATE(127)] = 2737,
  [SMALL_STATE(128)] = 2747,
  [SMALL_STATE(129)] = 2757,
  [SMALL_STATE(130)] = 2767,
  [SMALL_STATE(131)] = 2777,
  [SMALL_STATE(132)] = 2787,
  [SMALL_STATE(133)] = 2797,
  [SMALL_STATE(134)] = 2807,
  [SMALL_STATE(135)] = 2817,
  [SMALL_STATE(136)] = 2827,
  [SMALL_STATE(137)] = 2833,
  [SMALL_STATE(138)] = 2843,
  [SMALL_STATE(139)] = 2853,
  [SMALL_STATE(140)] = 2858,
  [SMALL_STATE(141)] = 2863,
  [SMALL_STATE(142)] = 2868,
  [SMALL_STATE(143)] = 2875,
  [SMALL_STATE(144)] = 2882,
  [SMALL_STATE(145)] = 2889,
  [SMALL_STATE(146)] = 2896,
  [SMALL_STATE(147)] = 2903,
  [SMALL_STATE(148)] = 2908,
  [SMALL_STATE(149)] = 2913,
  [SMALL_STATE(150)] = 2920,
  [SMALL_STATE(151)] = 2925,
  [SMALL_STATE(152)] = 2932,
  [SMALL_STATE(153)] = 2939,
  [SMALL_STATE(154)] = 2944,
  [SMALL_STATE(155)] = 2951,
  [SMALL_STATE(156)] = 2956,
  [SMALL_STATE(157)] = 2963,
  [SMALL_STATE(158)] = 2968,
  [SMALL_STATE(159)] = 2973,
  [SMALL_STATE(160)] = 2978,
  [SMALL_STATE(161)] = 2983,
  [SMALL_STATE(162)] = 2990,
  [SMALL_STATE(163)] = 2995,
  [SMALL_STATE(164)] = 3000,
  [SMALL_STATE(165)] = 3007,
  [SMALL_STATE(166)] = 3012,
  [SMALL_STATE(167)] = 3019,
  [SMALL_STATE(168)] = 3024,
  [SMALL_STATE(169)] = 3029,
  [SMALL_STATE(170)] = 3034,
  [SMALL_STATE(171)] = 3039,
  [SMALL_STATE(172)] = 3044,
  [SMALL_STATE(173)] = 3049,
  [SMALL_STATE(174)] = 3056,
  [SMALL_STATE(175)] = 3063,
  [SMALL_STATE(176)] = 3068,
  [SMALL_STATE(177)] = 3073,
  [SMALL_STATE(178)] = 3078,
  [SMALL_STATE(179)] = 3085,
  [SMALL_STATE(180)] = 3090,
  [SMALL_STATE(181)] = 3095,
  [SMALL_STATE(182)] = 3100,
  [SMALL_STATE(183)] = 3107,
  [SMALL_STATE(184)] = 3112,
  [SMALL_STATE(185)] = 3119,
  [SMALL_STATE(186)] = 3124,
  [SMALL_STATE(187)] = 3129,
  [SMALL_STATE(188)] = 3136,
  [SMALL_STATE(189)] = 3143,
  [SMALL_STATE(190)] = 3150,
  [SMALL_STATE(191)] = 3157,
  [SMALL_STATE(192)] = 3164,
  [SMALL_STATE(193)] = 3169,
  [SMALL_STATE(194)] = 3174,
  [SMALL_STATE(195)] = 3181,
  [SMALL_STATE(196)] = 3188,
  [SMALL_STATE(197)] = 3193,
  [SMALL_STATE(198)] = 3198,
  [SMALL_STATE(199)] = 3202,
  [SMALL_STATE(200)] = 3206,
  [SMALL_STATE(201)] = 3210,
  [SMALL_STATE(202)] = 3214,
  [SMALL_STATE(203)] = 3218,
  [SMALL_STATE(204)] = 3222,
  [SMALL_STATE(205)] = 3226,
  [SMALL_STATE(206)] = 3230,
  [SMALL_STATE(207)] = 3234,
  [SMALL_STATE(208)] = 3238,
  [SMALL_STATE(209)] = 3242,
  [SMALL_STATE(210)] = 3246,
  [SMALL_STATE(211)] = 3250,
  [SMALL_STATE(212)] = 3254,
  [SMALL_STATE(213)] = 3258,
  [SMALL_STATE(214)] = 3262,
  [SMALL_STATE(215)] = 3266,
  [SMALL_STATE(216)] = 3270,
  [SMALL_STATE(217)] = 3274,
  [SMALL_STATE(218)] = 3278,
  [SMALL_STATE(219)] = 3282,
  [SMALL_STATE(220)] = 3286,
  [SMALL_STATE(221)] = 3290,
  [SMALL_STATE(222)] = 3294,
  [SMALL_STATE(223)] = 3298,
  [SMALL_STATE(224)] = 3302,
  [SMALL_STATE(225)] = 3306,
  [SMALL_STATE(226)] = 3310,
  [SMALL_STATE(227)] = 3314,
  [SMALL_STATE(228)] = 3318,
  [SMALL_STATE(229)] = 3322,
  [SMALL_STATE(230)] = 3326,
  [SMALL_STATE(231)] = 3330,
  [SMALL_STATE(232)] = 3334,
  [SMALL_STATE(233)] = 3338,
  [SMALL_STATE(234)] = 3342,
  [SMALL_STATE(235)] = 3346,
  [SMALL_STATE(236)] = 3350,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lit_string, 3),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lit_string, 3),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_call, 1),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_call, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [91] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [129] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 3),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(214),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 5),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 5),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [195] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(147),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_dict, 2),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_dict, 2),
  [211] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 3),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 3),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 2),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 2),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 3),
  [221] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 2),
  [225] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 2),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 5),
  [229] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 5),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 4),
  [233] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 4),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_fn_call, 2, .production_id = 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_fn_call, 2, .production_id = 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_argument_list, 4),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_argument_list, 4),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_list, 5),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_list, 5),
  [251] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [253] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [255] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [259] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [261] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [263] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 2),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 2), SHIFT_REPEAT(37),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 2), SHIFT_REPEAT(2),
  [273] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 2), SHIFT_REPEAT(229),
  [276] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 2), SHIFT_REPEAT(143),
  [279] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2, .production_id = 2), SHIFT_REPEAT(52),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat2, 2, .production_id = 2), SHIFT_REPEAT(30),
  [285] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat2, 2, .production_id = 2), SHIFT_REPEAT(3),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat2, 2, .production_id = 2), SHIFT_REPEAT(223),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat2, 2, .production_id = 2), SHIFT_REPEAT(178),
  [294] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_content_repeat2, 2, .production_id = 2),
  [296] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_html_content_repeat2, 2, .production_id = 2), SHIFT_REPEAT(53),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(146),
  [309] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [311] = {.entry = {.count = 1, .reusable = false}}, SHIFT(149),
  [313] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, .production_id = 1),
  [317] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(161),
  [321] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__condition, 1),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [331] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_html_content_repeat1, 2),
  [337] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_html_content_repeat1, 2), SHIFT_REPEAT(107),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_content, 7, .production_id = 30),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_content, 6),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_statement, 5, .production_id = 17),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_comment, 3, .production_id = 12),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_comment, 3, .production_id = 12),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_content, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 6),
  [360] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 1, .production_id = 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 7, .production_id = 30),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 7),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_content, 7),
  [374] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_content, 8, .production_id = 32),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_statement, 5, .production_id = 17),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 8, .production_id = 32),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__jinja_value, 3, .production_id = 3),
  [382] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__jinja_value, 3, .production_id = 3),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_html_content, 4),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_content, 4),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_statement, 4, .production_id = 13),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_statement, 4, .production_id = 13),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_html_content_repeat2, 1, .production_id = 1),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_statement, 3, .production_id = 3),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_jinja_statement, 3, .production_id = 3),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [404] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_from, 4, .production_id = 23),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [428] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_include, 2, .production_id = 6),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_from_repeat1, 2, .production_id = 28),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [440] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_from, 6, .production_id = 27),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [444] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_attribute, 1),
  [446] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_call, 2, .production_id = 9),
  [448] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_attribute_name, 1),
  [450] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_from, 5, .production_id = 25),
  [452] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_from, 7, .production_id = 31),
  [454] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_from_repeat1, 2, .production_id = 29),
  [456] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_jinja_from_repeat1, 2, .production_id = 29), SHIFT_REPEAT(189),
  [459] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_tag_name, 1),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [463] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_for, 4, .production_id = 18),
  [465] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [467] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_include, 4, .production_id = 20),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [483] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_attribute, 3, .production_id = 24),
  [485] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_html_attribute, 3),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2), SHIFT_REPEAT(109),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_dict_repeat1, 2),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2), SHIFT_REPEAT(23),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_argument_list_repeat1, 2),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [511] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2), SHIFT_REPEAT(33),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_list_repeat1, 2),
  [516] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_jinja_from_repeat1, 4, .production_id = 33),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [524] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [526] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_set, 4, .production_id = 21),
  [528] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_block, 2, .production_id = 8),
  [530] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [532] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_kwarg, 3, .production_id = 16),
  [534] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_for, 6, .production_id = 26),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_include, 5, .production_id = 20),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [540] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_import, 4, .production_id = 22),
  [542] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comparison, 3, .production_id = 19),
  [544] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, .production_id = 16),
  [546] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_call, 3, .production_id = 15),
  [548] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_macro, 3, .production_id = 14),
  [550] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_include, 3, .production_id = 6),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [554] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [556] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_filter, 2, .production_id = 11),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_call, 2, .production_id = 10),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_end_statement, 1),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_extends, 2, .production_id = 7),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [576] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_if, 2, .production_id = 5),
  [578] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_jinja_elif, 2, .production_id = 5),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [594] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [602] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [610] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [614] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [616] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [620] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [634] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jinja2(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
