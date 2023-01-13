module.exports = grammar({
  name: "feint",

  externals: $ => [
    $._scope_start,
    $._func_scope_start,
    $._newline,
    $._indent,
    $._dedent,
    $._error_sentinel,
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

    inline_suite: $ => seq($._scope_start, $._statement, $._newline),
    suite: $ => seq($._scope_start, $._indent, repeat1($._statement), $._dedent),

    block: $ => seq("block", choice($.suite, $.inline_suite)),

    func_suite: $ => seq($._func_scope_start, $._indent, repeat1($._statement), $._dedent),
    inline_func_suite: $ => seq($._func_scope_start, $._expr, $._newline),
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
