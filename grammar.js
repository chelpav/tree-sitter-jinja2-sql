module.exports = grammar({
  name: "jinja2",

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $._jinja_value,
          $.jinja_statement,
          $.jinja_comment,
          $.raw_text,
        ),
      ),

    _jinja_value: ($) =>
      seq(
        field("open_delimiter", $.jinja_value_open),
        $._expr,
        field("close_delimiter", $.jinja_value_close),
      ),

    jinja_value_open: ($) => token(seq("{{", optional("-"))),
    jinja_value_close: ($) => token(seq(optional("-"), "}}")),

    jinja_statement: ($) =>
      seq(
        field("open_delimiter", $.jinja_statement_open),
        choice(
          $.jinja_for,
          $.jinja_if,
          $.jinja_elif,
          $.jinja_else,
          $.jinja_include,
          $.jinja_extends,
          $.jinja_block,
          $.jinja_set,
          $.jinja_macro,
          $.jinja_filter,
          $.jinja_raw,
          $.jinja_import,
          $.jinja_from,
          $.fn_call,
          $.jinja_end_statement,
        ),
        field("close_delimiter", $.jinja_statement_close),
      ),

    jinja_statement_open: ($) => token(seq("{%", optional("-"))),
    jinja_statement_close: ($) => token(seq(optional("-"), "%}")),

    jinja_for: ($) =>
      seq(
        "for",
        field("target", $._expr),
        "in",
        field("iterable", $._expr),
        optional(field("if_clause", seq("if", $._expr))),
      ),

    jinja_if: ($) => seq("if", field("condition", $._expr)),

    jinja_elif: ($) => seq("elif", field("condition", $._expr)),

    jinja_else: ($) => "else",

    jinja_include: ($) =>
      seq(
        "include",
        field("template", $.lit_string),
        optional(seq("with", field("context", $.dict))),
        optional("ignore missing"),
      ),

    jinja_extends: ($) =>
      seq("extends", field("parent_template", $.lit_string)),

    jinja_block: ($) => seq("block", field("block_name", $.identifier)),

    jinja_set: ($) =>
      seq("set", field("variable", $.identifier), "=", field("value", $._expr)),

    jinja_macro: ($) =>
      seq(
        "macro",
        field("macro_name", $.identifier),
        field("params", $.argument_list),
      ),

    jinja_filter: ($) => seq("filter", field("filter_name", $.identifier)),

    jinja_raw: ($) => "raw",

    jinja_import: ($) =>
      seq(
        "import",
        field("module", $.lit_string),
        "as",
        field("alias", $.identifier),
      ),

    jinja_from: ($) =>
      seq(
        "from",
        field("module", $.lit_string),
        "import",
        commaSep1(
          seq(
            field("name", $.identifier),
            optional(seq("as", field("alias", $.identifier))),
          ),
        ),
      ),

    jinja_end_statement: ($) =>
      choice("endmacro", "endfor", "endif", "endblock", "endraw", "endcall"),

    jinja_comment: ($) =>
      seq(
        field("open_delimiter", $.jinja_comment_open),
        field("content", $.jinja_comment_content),
        field("close_delimiter", $.jinja_comment_close),
      ),

    jinja_comment_open: ($) => token(seq("{#", optional("-"))),
    jinja_comment_content: ($) => token(prec(1, /([^#]|#[^}])*/)),
    jinja_comment_close: ($) => token(seq(optional("-"), "#}")),

    _expr: ($) =>
      choice(
        $.comparison,
        $.binary_operation,
        $.unary_operation,
        $.fn_call,
        $.filtered,
        $.tuple,
        $.list,
        $.dict,
        $.lit_string,
        $.bool,
        $.integer,
        $.float,
        $.identifier,
        $.property_access,
        $.subscript,
      ),

    // Pipe filter: {{ value | filter | filter(args) }}
    filtered: ($) =>
      prec.left(
        3,
        seq(
          field("value", $._expr),
          "|",
          field("filter", $.filter_spec),
        ),
      ),

    filter_spec: ($) =>
      prec.right(
        2,
        seq(
          field("filter_name", $.identifier),
          optional(field("arguments", $.argument_list)),
        ),
      ),

    property_access: ($) =>
      prec.left(
        2,
        seq(field("object", $._expr), ".", field("property", $.identifier)),
      ),

    subscript: ($) =>
      prec.left(
        2,
        seq(field("object", $._expr), "[", field("index", $._expr), "]"),
      ),

    fn_call: ($) =>
      prec.left(
        1,
        seq(field("fn_name", $._expr), field("argument_list", $.argument_list)),
      ),

    argument_list: ($) =>
      prec(
        1,
        seq(
          "(",
          optional(commaSep1(choice($._expr, $.kwarg))),
          optional(","),
          ")",
        ),
      ),

    tuple: ($) =>
      seq("(", optional(commaSep1($._expr)), optional(","), ")"),

    lit_string: ($) =>
      choice(seq("'", /([^']|\\')*/, "'"), seq('"', /([^"]|\\")*/, '"')),

    bool: ($) => choice("True", "False"),

    list: ($) => seq("[", optional(commaSep1($._expr)), optional(","), "]"),

    dict: ($) => seq("{", optional(commaSep1($.pair)), optional(","), "}"),

    pair: ($) => seq(field("key", $._expr), ":", field("value", $._expr)),

    identifier: ($) => $._identifier,

    _identifier: ($) => token(new RegExp("[a-zA-Z_]" + "[a-zA-Z0-9_]*")),

    kwarg: ($) => seq(field("key", $.identifier), "=", field("value", $._expr)),

    // Raw template text (SQL in our case). Named (not hidden) so that
    // injections.scm can capture it and inject the SQL grammar.
    // '<' must be consumable: SQL operators like <=, <>, <=> are plain text.
    // A single '{' is text unless followed by '{', '%' or '#'.
    raw_text: ($) =>
      token(
        prec(
          -1,
          new RegExp("(" + "[^<{]" + "|" + "[{][^{%#]" + "|" + "<" + ")+"),
        ),
      ),

    integer: ($) => token(seq(optional(/[\+-]/), repeat1(/_?[0-9]+/))),

    float: ($) => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);
      const sign = /[\+-]/;

      return token(
        choice(
          seq(
            optional(sign),
            digits,
            ".",
            optional(digits),
            optional(exponent),
          ),
          seq(
            optional(sign),
            optional(digits),
            ".",
            digits,
            optional(exponent),
          ),
          seq(digits, exponent),
        ),
      );
    },

    comparison: ($) =>
      prec.left(
        1,
        seq(
          field("left", $._expr),
          field(
            "operator",
            choice("==", "!=", "<", ">", "<=", ">=", "in", "not in"),
          ),
          field("right", $._expr),
        ),
      ),

    binary_operation: ($) =>
      prec.left(
        1,
        seq(
          field("left", $._expr),
          field("operator", choice("+", "-", "*", "/", "%", "//", "**")),
          field("right", $._expr),
        ),
      ),

    unary_operation: ($) =>
      prec.right(
        2,
        seq(
          field("operator", choice("not", "-", "+")),
          field("operand", $._expr),
        ),
      ),
  },
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
