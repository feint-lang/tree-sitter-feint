[
  "break"
  "jump"
  "return"
  "block"
;  "if"
;  "else"
] @keyword

[
  "nil"
  "true"
  "false"
  "@"
] @variable.builtin

[ "," ] @punctuation
[ "(" ")" ] @punctuation.bracket
(scope_start) @punctuation.delimiter
(func_scope_start) @punctuation.delimiter
(param) @param

(var_ident) @variable
(const_ident) @constant
(type_ident) @type

(int) @number
(float) @number

(string) @string
(format_string) @string.special

(comment) @comment
