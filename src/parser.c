#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_GT = 1,
  sym__end = 2,
  sym__newline = 3,
  sym__line = 4,
  sym__message_separator = 5,
  sym__settings_separator = 6,
  sym_document = 7,
  sym_provider_service = 8,
  sym_settings_block = 9,
  sym_system_instruction = 10,
  aux_sym__lines = 11,
  sym_message_sequence = 12,
  sym_message_turn = 13,
  sym_user_message = 14,
  sym_assistant_message = 15,
  aux_sym_message_sequence_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GT] = "> ",
  [sym__end] = "_end",
  [sym__newline] = "_newline",
  [sym__line] = "_line",
  [sym__message_separator] = "_message_separator",
  [sym__settings_separator] = "_settings_separator",
  [sym_document] = "document",
  [sym_provider_service] = "provider_service",
  [sym_settings_block] = "settings_block",
  [sym_system_instruction] = "system_instruction",
  [aux_sym__lines] = "_lines",
  [sym_message_sequence] = "message_sequence",
  [sym_message_turn] = "message_turn",
  [sym_user_message] = "user_message",
  [sym_assistant_message] = "assistant_message",
  [aux_sym_message_sequence_repeat1] = "message_sequence_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GT] = anon_sym_GT,
  [sym__end] = sym__end,
  [sym__newline] = sym__newline,
  [sym__line] = sym__line,
  [sym__message_separator] = sym__message_separator,
  [sym__settings_separator] = sym__settings_separator,
  [sym_document] = sym_document,
  [sym_provider_service] = sym_provider_service,
  [sym_settings_block] = sym_settings_block,
  [sym_system_instruction] = sym_system_instruction,
  [aux_sym__lines] = aux_sym__lines,
  [sym_message_sequence] = sym_message_sequence,
  [sym_message_turn] = sym_message_turn,
  [sym_user_message] = sym_user_message,
  [sym_assistant_message] = sym_assistant_message,
  [aux_sym_message_sequence_repeat1] = aux_sym_message_sequence_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [sym__end] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__message_separator] = {
    .visible = false,
    .named = true,
  },
  [sym__settings_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_provider_service] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_block] = {
    .visible = true,
    .named = true,
  },
  [sym_system_instruction] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__lines] = {
    .visible = false,
    .named = false,
  },
  [sym_message_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_message_turn] = {
    .visible = true,
    .named = true,
  },
  [sym_user_message] = {
    .visible = true,
    .named = true,
  },
  [sym_assistant_message] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_message_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 9,
  [15] = 8,
  [16] = 8,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(21);
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '-') ADVANCE(12);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 2:
      if (lookahead == 0) ADVANCE(23);
      if (lookahead == '\n') ADVANCE(1);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 9:
      if (lookahead == '\n') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 11:
      if (lookahead == '-') ADVANCE(3);
      END_STATE();
    case 12:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '=') ADVANCE(4);
      END_STATE();
    case 15:
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(15);
      END_STATE();
    case 17:
      if (lookahead == '=') ADVANCE(16);
      END_STATE();
    case 18:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 19:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 20:
      if (eof) ADVANCE(21);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__end);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '=') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '-') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(29);
      if (lookahead == '=') ADVANCE(17);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(49);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(48);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '>') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(35);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(36);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ' ') ADVANCE(22);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym__message_separator);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym__settings_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 5},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 18},
  [5] = {.lex_state = 18},
  [6] = {.lex_state = 18},
  [7] = {.lex_state = 18},
  [8] = {.lex_state = 19},
  [9] = {.lex_state = 19},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 20},
  [12] = {.lex_state = 6},
  [13] = {.lex_state = 19},
  [14] = {.lex_state = 19},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 19},
  [17] = {.lex_state = 18},
  [18] = {.lex_state = 18},
  [19] = {.lex_state = 18},
  [20] = {.lex_state = 7},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 18},
  [24] = {.lex_state = 9},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 5},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__end] = ACTIONS(1),
    [sym__message_separator] = ACTIONS(1),
    [sym__settings_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(29),
    [sym_provider_service] = STATE(2),
    [sym__line] = ACTIONS(3),
  },
  [2] = {
    [sym_settings_block] = STATE(3),
    [sym_system_instruction] = STATE(7),
    [aux_sym__lines] = STATE(9),
    [sym_message_sequence] = STATE(25),
    [sym_message_turn] = STATE(4),
    [sym_user_message] = STATE(11),
    [aux_sym_message_sequence_repeat1] = STATE(4),
    [anon_sym_GT] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__line] = ACTIONS(7),
    [sym__settings_separator] = ACTIONS(9),
  },
  [3] = {
    [sym_system_instruction] = STATE(6),
    [aux_sym__lines] = STATE(9),
    [sym_message_sequence] = STATE(26),
    [sym_message_turn] = STATE(4),
    [sym_user_message] = STATE(11),
    [aux_sym_message_sequence_repeat1] = STATE(4),
    [anon_sym_GT] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__line] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym__lines,
    STATE(22), 1,
      sym_user_message,
    ACTIONS(13), 2,
      sym__newline,
      sym__line,
    STATE(5), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [18] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(14), 1,
      aux_sym__lines,
    STATE(22), 1,
      sym_user_message,
    ACTIONS(17), 2,
      sym__newline,
      sym__line,
    STATE(5), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [36] = 5,
    STATE(9), 1,
      aux_sym__lines,
    STATE(11), 1,
      sym_user_message,
    STATE(30), 1,
      sym_message_sequence,
    ACTIONS(7), 2,
      sym__newline,
      sym__line,
    STATE(4), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [54] = 5,
    STATE(9), 1,
      aux_sym__lines,
    STATE(11), 1,
      sym_user_message,
    STATE(26), 1,
      sym_message_sequence,
    ACTIONS(7), 2,
      sym__newline,
      sym__line,
    STATE(4), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [72] = 4,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym__message_separator,
    STATE(8), 1,
      aux_sym__lines,
    ACTIONS(22), 2,
      sym__newline,
      sym__line,
  [86] = 4,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym__message_separator,
    STATE(8), 1,
      aux_sym__lines,
    ACTIONS(29), 2,
      sym__newline,
      sym__line,
  [100] = 3,
    ACTIONS(35), 1,
      sym__settings_separator,
    STATE(15), 1,
      aux_sym__lines,
    ACTIONS(33), 2,
      sym__newline,
      sym__line,
  [111] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      sym__newline,
    ACTIONS(39), 1,
      sym__message_separator,
    STATE(19), 1,
      sym_assistant_message,
  [124] = 1,
    ACTIONS(41), 4,
      anon_sym_GT,
      sym__newline,
      sym__line,
      sym__settings_separator,
  [131] = 3,
    ACTIONS(45), 1,
      sym__message_separator,
    STATE(16), 1,
      aux_sym__lines,
    ACTIONS(43), 2,
      sym__newline,
      sym__line,
  [142] = 3,
    ACTIONS(31), 1,
      sym__message_separator,
    STATE(16), 1,
      aux_sym__lines,
    ACTIONS(43), 2,
      sym__newline,
      sym__line,
  [153] = 3,
    ACTIONS(25), 1,
      sym__settings_separator,
    STATE(15), 1,
      aux_sym__lines,
    ACTIONS(47), 2,
      sym__newline,
      sym__line,
  [164] = 3,
    ACTIONS(25), 1,
      sym__message_separator,
    STATE(16), 1,
      aux_sym__lines,
    ACTIONS(50), 2,
      sym__newline,
      sym__line,
  [175] = 2,
    STATE(10), 1,
      aux_sym__lines,
    ACTIONS(53), 2,
      sym__newline,
      sym__line,
  [183] = 2,
    STATE(13), 1,
      aux_sym__lines,
    ACTIONS(55), 2,
      sym__newline,
      sym__line,
  [191] = 2,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 2,
      sym__newline,
      sym__line,
  [199] = 1,
    ACTIONS(61), 3,
      anon_sym_GT,
      sym__newline,
      sym__line,
  [205] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 2,
      sym__newline,
      sym__line,
  [213] = 2,
    ACTIONS(67), 1,
      sym__message_separator,
    STATE(19), 1,
      sym_assistant_message,
  [220] = 1,
    ACTIONS(69), 2,
      sym__newline,
      sym__line,
  [225] = 1,
    ACTIONS(71), 1,
      sym__newline,
  [229] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [233] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [237] = 1,
    ACTIONS(77), 1,
      sym__line,
  [241] = 1,
    ACTIONS(79), 1,
      ts_builtin_sym_end,
  [245] = 1,
    ACTIONS(81), 1,
      ts_builtin_sym_end,
  [249] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 18,
  [SMALL_STATE(6)] = 36,
  [SMALL_STATE(7)] = 54,
  [SMALL_STATE(8)] = 72,
  [SMALL_STATE(9)] = 86,
  [SMALL_STATE(10)] = 100,
  [SMALL_STATE(11)] = 111,
  [SMALL_STATE(12)] = 124,
  [SMALL_STATE(13)] = 131,
  [SMALL_STATE(14)] = 142,
  [SMALL_STATE(15)] = 153,
  [SMALL_STATE(16)] = 164,
  [SMALL_STATE(17)] = 175,
  [SMALL_STATE(18)] = 183,
  [SMALL_STATE(19)] = 191,
  [SMALL_STATE(20)] = 199,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 213,
  [SMALL_STATE(23)] = 220,
  [SMALL_STATE(24)] = 225,
  [SMALL_STATE(25)] = 229,
  [SMALL_STATE(26)] = 233,
  [SMALL_STATE(27)] = 237,
  [SMALL_STATE(28)] = 241,
  [SMALL_STATE(29)] = 245,
  [SMALL_STATE(30)] = 249,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_sequence_repeat1, 2), SHIFT_REPEAT(14),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_message, 1),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_message, 1),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_provider_service, 1),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(15),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(16),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_turn, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_turn, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assistant_message, 3),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assistant_message, 3),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_instruction, 3),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 2),
  [81] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_mchat(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
