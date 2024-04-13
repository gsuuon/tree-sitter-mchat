module.exports = grammar({
  name: 'mchat',

  rules: {
    document: $ => seq(
      $.chat_handler,
      $._newline,
      optional($.params_block),
      optional(
        seq(
          $._newline,
          $.system_instruction
        )
      ),
      $.message_sequence
    ),

    chat_handler: $ => $._line,

    params_block: $ => seq(
      '---',
      $._newline,
      $._lines,
      $._newline,
      '---',
    ),

    system_instruction: $ => seq(
      token(prec(2, '> ')),
      $._line,
    ),

    message_sequence: $ => choice(
      seq($.user_message, optional($._newline)),
      repeat1($.message_turn),
    ),

    message_turn: $ => seq(
      $.user_message,
      $._message_separator,
      $.assistant_message,
      $._message_separator,
    ),

    user_message: $ => prec.right($._lines),
    assistant_message: $ => $._lines,

    _newline: _ => /\n/,
    _line: _ => /.+/,
    _lines: $ => repeat1(
      choice(
        $._line,
        $._newline
      )
    ),
    _message_separator: $ => seq(
      token(prec(2, '======')),
      $._newline,
    )
  },
});
