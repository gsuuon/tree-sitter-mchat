module.exports = grammar({
  name: 'mchat',

  rules: {
    document: $ => seq(
      $.provider_service,
      optional($.settings_block),
      optional($.system_instruction),
      $.message_sequence
    ),

    provider_service: $ => $._line,

    settings_block: $ => seq(
      $._settings_separator,
      $._lines,
      $._settings_separator,
    ),

    system_instruction: $ => seq(
      token(prec(2, '> ')),
      $._line,
      $._newline
    ),

    _end: _ => '\0',
    _newline: _ => /\n/,
    _line: _ => /.+/,
    _lines: $ => repeat1(
      choice(
        $._line,
        $._newline
      )
    ),
    _message_separator: _ => token(prec(2, '\n======\n')),
    _settings_separator: _ => token(prec(2, '\n---\n')),

    message_sequence: $ => choice(
      seq($.user_message, optional($._newline)),
      repeat1($.message_turn),
    ),

    message_turn: $ => seq(
      $.user_message,
      $.assistant_message
    ),

    user_message: $ => prec.right($._lines),
    assistant_message: $ => seq(
      $._message_separator,
      $._lines,
      $._message_separator
    )
  },
});
