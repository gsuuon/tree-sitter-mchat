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

    message_sequence: $ => seq(
      $.user_message,
      repeat(
        seq(
          $.turn_delimiter,
          $.assistant_message,
          $.turn_delimiter,
          $.user_message,
        )
      ),
      optional(
        seq(
          $.turn_delimiter,
          $.assistant_message,
          optional($.turn_delimiter),
        )
      )
    ),

    user_message: $ => prec.right($._lines),

    content: _ => repeat1(/.+/),

    assistant_message: $ => seq(
      optional($.data_section),
      $.content
    ),

    data_section: $ => seq(
      alias(/<<<<<<(?: .+)?\n/, $.data_section_open), 
      alias(repeat(/.+/), $.data_section_body),
      alias(token(prec(2, '>>>>>>')), $.data_section_close),
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
