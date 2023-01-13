module.exports = grammar({
  name: "feint",

  conflicts: $ => [
    // These conflict because N and NAME are both valid const and type
    // identifiers.
    [$.const_ident, $.type_ident],
  ],

  externals: $ => [
    $.scope_start,
    $.func_scope_start,
    $._end_of_statement,
    $._indent,
    $._dedent,
    $._error_sentinel,
  ],

  rules: {
    module: $ => repeat($._statement),

    // Statements ------------------------------------------------------

    _statement: $ => seq(
      choice(
        $.break,
        $.continue,
        $.jump,
        $.label,
        $.return,
        $._expr,
      ),
      $._end_of_statement,
    ),

    break: $ => seq("break", optional($._expr)),
    continue: $ => "continue",
    jump: $ => seq("jump", $.var_ident),
    label: $ => /:[a-z]|[a-z][a-z0-9_]*[a-z0-9]:/,
    return: $ => seq("return", optional($._expr)),

    // Expressions -----------------------------------------------------

    _expr: $ => choice(
      $.atom,
      $.assignment,
      $.block,
      $.func,
      $.comment,
    ),

    assignment: $ => seq($._ident, "=", $._expr),
    block: $ => seq("block", choice($.suite, $.inline_suite)),
    func: $ => seq($.params, choice($.inline_func_suite, $.func_suite)),

    // Atoms -----------------------------------------------------------

    atom: $ => choice(
      "nil",
      "true",
      "false",
      "@",
      $._ident,
      $._num,
      $.string,
      $.format_string,
    ),

    // Suites ----------------------------------------------------------

    inline_suite: $ => seq($.scope_start, $._statement, $._end_of_statement),
    suite: $ => seq($.scope_start, $._indent, repeat1($._statement), $._dedent),

    func_suite: $ => seq($.func_scope_start, $._indent, repeat1($._statement), $._dedent),
    inline_func_suite: $ => seq($.func_scope_start, $._expr, $._end_of_statement),

    params: $ => choice(
      seq("(", ")"),
      seq("(", $.param, repeat(seq(",", $.param)), optional(","), ")"),
    ),

    param: $ => $.var_ident,

    // Identifiers -------------------------------------------------------

    _ident: $ => choice($.var_ident, $.const_ident, $.type_ident),

    var_ident: $ => choice(
      /[a-z]/,
      /[a-z][a-z0-9_]*[a-z0-9]/,
    ),

    const_ident: $ => choice(
      /[A-Z]/,
      /[A-Z][A-Z0-9_]*[A-Z0-9]/,
    ),

    type_ident: $ => choice(
      /[A-Z]/,
      /[A-Z][A-Za-z0-9]*[A-Za-z0-9]/,
    ),

    // Numbers ---------------------------------------------------------

    _num: $ => choice($.int, $.float),

    int: $ => seq(
      optional(/[+-]/),
      choice(
        /0(_?0+)*/,
        /[1-9](_?[0-9]+)*/,
        /0b_?[0-1](_?[0-1]+)*/,
        /0o_?[0-7](_?[0-7]+)*/,
        /0x_?[A-Za-z0-9](_?[A-Za-z0-9]+)*/,
      ),
    ),

    float: $ => seq(
      optional(/[+-]/),
      choice(
        /[0-9](_?[0-9]+)*\.[0-9](_?[0-9]+)*/,
        /[0-9](_?[0-9]+)*(\.[0-9](_?[0-9]+)*)?[eE][+-]?[0-9](_?[0-9]+)*/,
      ),
    ),

    // Strings ---------------------------------------------------------

    string: $ => choice(
      $._string_single,
      $._string_double,
    ),

    format_string: $ => choice(
      $._format_string_single,
      $._format_string_double,
    ),

    _string_single: $ => /'.*?'/,
    _string_double: $ => /".*?"/,
    _format_string_single: $ => /\$'.*?'/,
    _format_string_double: $ => /\$".*?"/,

    // Tuples ----------------------------------------------------------

    tuple: $ => choice(
      seq("(", ")"),
      seq("(", $._expr, ",", ")"),
      seq("(", $._expr, repeat1(seq(",", $._expr)), optional(","), ")"),
    ),

    // Comments --------------------------------------------------------

    comment: $ => seq("#", /.*/),
  },
});
