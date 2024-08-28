module.exports = grammar({
  name: "jinja2",

  conflicts: ($) => [[$._expr, $.fn_call]],

  rules: {
    source_file: ($) =>
      repeat(
        choice(
          $._jinja_value,
          $.jinja_statement,
          $.jinja_comment,
          $.html_content,
          $._text,
        ),
      ),

    _jinja_value: ($) =>
      seq(
        field("open_delimiter", $.jinja_value_open),
        $._expr,
        field("close_delimiter", $.jinja_value_close),
      ),

    jinja_value_open: ($) => "{{",
    jinja_value_close: ($) => "}}",

    jinja_statement: ($) =>
      seq(
        field("open_delimiter", $.jinja_statement_open),
        optional("-"),
        choice(
          $.jinja_for,
          $.jinja_if,
          $.jinja_include,
          $.jinja_extends,
          $.jinja_block,
          $.jinja_set,
          $.jinja_macro,
          $.jinja_call,
          $.jinja_filter,
          $.jinja_raw,
          $.jinja_import,
          $.jinja_from,
          $.jinja_end_statement,
        ),
        optional("-"),
        field("close_delimiter", $.jinja_statement_close),
      ),

    jinja_statement_open: ($) => "{%",
    jinja_statement_close: ($) => "%}",

    jinja_for: ($) =>
      seq(
        "for",
        field("target", $._expr),
        "in",
        field("iterable", $._expr),
        optional(field("if_clause", seq("if", $._expr))),
      ),

    jinja_if: ($) => seq("if", field("condition", $._expr)),

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

    jinja_call: ($) =>
      seq(
        "call",
        optional(field("macro", $._expr)),
        optional(field("params", $.argument_list)),
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

    jinja_comment_open: ($) => "{#",
    jinja_comment_content: ($) => token(prec(1, /([^#]|#[^}])*/)),
    jinja_comment_close: ($) => "#}",

    html_content: ($) =>
      seq(
        "<",
        $.html_tag_name,
        repeat($.html_attribute),
        choice(
          "/>",
          seq(
            ">",
            repeat(
              choice(
                $.html_content,
                $._text,
                $._jinja_value,
                $.jinja_statement,
                $.jinja_comment,
              ),
            ),
            "</",
            $.html_tag_name,
            ">",
          ),
        ),
      ),

    html_tag_name: ($) => /[a-zA-Z][a-zA-Z0-9-]*/,

    html_attribute: ($) =>
      seq(
        $.html_attribute_name,
        optional(seq("=", choice($.lit_string, $._jinja_value))),
      ),

    html_attribute_name: ($) => /[a-zA-Z][a-zA-Z0-9-]*/,

    _expr: ($) =>
      choice(
        $.fn_call,
        $.list,
        $.dict,
        $.lit_string,
        $.bool,
        $.integer,
        $.float,
        $.identifier,
      ),

    fn_call: ($) =>
      prec(
        1,
        seq(
          field("fn_name", $.identifier),
          field("argument_list", $.argument_list),
        ),
      ),

    argument_list: ($) =>
      seq(
        "(",
        optional(commaSep1(choice($._expr, $.kwarg))),
        optional(","),
        ")",
      ),

    lit_string: ($) =>
      choice(seq("'", /([^']|\\')*/, "'"), seq('"', /([^"]|\\")*/, '"')),

    bool: ($) => choice("True", "False"),

    list: ($) => seq("[", optional(commaSep1($._expr)), optional(","), "]"),

    dict: ($) => seq("{", optional(commaSep1($.pair)), optional(","), "}"),

    pair: ($) => seq(field("key", $.lit_string), ":", field("value", $._expr)),

    identifier: ($) => $._identifier,

    _identifier: ($) => token(new RegExp("[a-zA-Z_]" + "[a-zA-Z0-9_]*")),

    kwarg: ($) => seq(field("key", $.identifier), "=", field("value", $._expr)),

    _text: ($) =>
      token(prec(-1, new RegExp("(" + "[^<{]" + "|" + "[{][^{%#]" + ")+"))),

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
  },
});

function commaSep1(rule) {
  return sep1(rule, ",");
}

function sep1(rule, separator) {
  return seq(rule, repeat(seq(separator, rule)));
}
