module.exports = grammar({
  name: 'mchat',

  rules: {
    document: $ => seq(
      $.chat_handler,
      $._newline,
      optional(
        seq(
          $.params_block,
          $._newline
        )
      ),
      optional(
        seq(
          $.system_instruction,
          $._newline
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
      $.user_message,
      seq(
        repeat1($.message_turn),
        optional($.user_message)
      )
    ),

    message_turn: $ => seq(
      $.user_message,
      $.turn_delimiter,
      $.assistant_message,
      $.turn_delimiter,
    ),

    user_message: $ => prec.right($._lines),
    assistant_message: $ => seq(
      optional($._reasoning),
      alias(repeat1(/.+/), $.content),
    ),

    _reasoning: $ => seq(
      alias('<<<<<< reasoning', $.reason_delimiter),
      alias(repeat(/.+/), $.reasoning),
      alias(token(prec(2, '>>>>>>')), $.reason_delimiter),
    ),

    _newline: _ => /\n/,
    _line: _ => /.+/,
    _lines: $ => repeat1(
      choice(
        $._line,
        $._newline
      )
    ),
    turn_delimiter: $ => seq(
      token(prec(2, '======')),
      $._newline,
    )
  },
});
