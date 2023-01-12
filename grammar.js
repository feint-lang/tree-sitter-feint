module.exports = grammar({
  name: "feint",

  externals: $ => [
    $._newline,
    $._indent,
    $._dedent,
  ],

  rules: {
    source_file: $ => repeat($._statement),

    _statement: $ => choice(
      "break",
      "continue",
      $._expr,
    ),

    _expr: $ => choice(
      $.ident,
      $.literal,
      $.assignment,
      $.block,
      $.func,
    ),

    ident: $ => /[a-z]|[a-z][a-z0-9_]*[a-z0-9]/,
    literal: $ => choice("nil", "true", "false"),
    assignment: $ => seq($.ident, "=", $._expr),

    suite: $ => seq("->", $._indent, repeat1($._statement), $._dedent),
    inline_suite: $ => seq("->", $._statement),
    block: $ => seq("block", choice($.suite, $.inline_suite)),

    func_suite: $ => seq("=>", $._indent, repeat1($._statement), $._dedent),
    inline_func_suite: $ => seq("=>", $._expr),
    func: $ => seq($.params, choice($.inline_func_suite)),

    params: $ => seq(
      seq(
        "(",
        optional(
          seq(
            $.ident,
            repeat(seq(",", $.ident)),
            optional(",")
          ),
        ),
        ")",
      )
    ),
  }
});
