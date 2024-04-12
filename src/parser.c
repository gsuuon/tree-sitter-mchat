#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 31
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 16
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_GT = 1,
  sym__newline = 2,
  sym__line = 3,
  sym__message_separator = 4,
  sym__params_separator = 5,
  sym_document = 6,
  sym_chat_handler = 7,
  sym_params_block = 8,
  sym_system_instruction = 9,
  sym_message_sequence = 10,
  sym_message_turn = 11,
  sym_user_message = 12,
  sym_assistant_message = 13,
  aux_sym__lines = 14,
  aux_sym_message_sequence_repeat1 = 15,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_GT] = "> ",
  [sym__newline] = "_newline",
  [sym__line] = "_line",
  [sym__message_separator] = "_message_separator",
  [sym__params_separator] = "_params_separator",
  [sym_document] = "document",
  [sym_chat_handler] = "chat_handler",
  [sym_params_block] = "params_block",
  [sym_system_instruction] = "system_instruction",
  [sym_message_sequence] = "message_sequence",
  [sym_message_turn] = "message_turn",
  [sym_user_message] = "user_message",
  [sym_assistant_message] = "assistant_message",
  [aux_sym__lines] = "_lines",
  [aux_sym_message_sequence_repeat1] = "message_sequence_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_GT] = anon_sym_GT,
  [sym__newline] = sym__newline,
  [sym__line] = sym__line,
  [sym__message_separator] = sym__message_separator,
  [sym__params_separator] = sym__params_separator,
  [sym_document] = sym_document,
  [sym_chat_handler] = sym_chat_handler,
  [sym_params_block] = sym_params_block,
  [sym_system_instruction] = sym_system_instruction,
  [sym_message_sequence] = sym_message_sequence,
  [sym_message_turn] = sym_message_turn,
  [sym_user_message] = sym_user_message,
  [sym_assistant_message] = sym_assistant_message,
  [aux_sym__lines] = aux_sym__lines,
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
  [sym__params_separator] = {
    .visible = false,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym_chat_handler] = {
    .visible = true,
    .named = true,
  },
  [sym_params_block] = {
    .visible = true,
    .named = true,
  },
  [sym_system_instruction] = {
    .visible = true,
    .named = true,
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
  [aux_sym__lines] = {
    .visible = false,
    .named = false,
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
  [11] = 9,
  [12] = 9,
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
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
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(45);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '=') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(6);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(1);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(10);
      END_STATE();
    case 12:
      if (lookahead == '=') ADVANCE(11);
      END_STATE();
    case 13:
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '-') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(25);
      if (lookahead == '=') ADVANCE(13);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(46);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(45);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '>') ADVANCE(35);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(34);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym__message_separator);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym__params_separator);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 2},
  [2] = {.lex_state = 3},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 15},
  [14] = {.lex_state = 15},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 7},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__line] = ACTIONS(1),
    [sym__message_separator] = ACTIONS(1),
    [sym__params_separator] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(26),
    [sym_chat_handler] = STATE(2),
    [sym__line] = ACTIONS(3),
  },
  [2] = {
    [sym_params_block] = STATE(3),
    [sym_system_instruction] = STATE(5),
    [sym_message_sequence] = STATE(30),
    [sym_message_turn] = STATE(6),
    [sym_user_message] = STATE(19),
    [aux_sym__lines] = STATE(8),
    [aux_sym_message_sequence_repeat1] = STATE(6),
    [anon_sym_GT] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__line] = ACTIONS(7),
    [sym__params_separator] = ACTIONS(9),
  },
  [3] = {
    [sym_system_instruction] = STATE(7),
    [sym_message_sequence] = STATE(25),
    [sym_message_turn] = STATE(6),
    [sym_user_message] = STATE(19),
    [aux_sym__lines] = STATE(8),
    [aux_sym_message_sequence_repeat1] = STATE(6),
    [anon_sym_GT] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__line] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym__lines,
    STATE(24), 1,
      sym_user_message,
    ACTIONS(13), 2,
      sym__newline,
      sym__line,
    STATE(4), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [18] = 5,
    STATE(8), 1,
      aux_sym__lines,
    STATE(19), 1,
      sym_user_message,
    STATE(25), 1,
      sym_message_sequence,
    ACTIONS(7), 2,
      sym__newline,
      sym__line,
    STATE(6), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [36] = 5,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      aux_sym__lines,
    STATE(24), 1,
      sym_user_message,
    ACTIONS(18), 2,
      sym__newline,
      sym__line,
    STATE(4), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [54] = 5,
    STATE(8), 1,
      aux_sym__lines,
    STATE(19), 1,
      sym_user_message,
    STATE(27), 1,
      sym_message_sequence,
    ACTIONS(7), 2,
      sym__newline,
      sym__line,
    STATE(6), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [72] = 4,
    ACTIONS(20), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      sym__message_separator,
    STATE(9), 1,
      aux_sym__lines,
    ACTIONS(22), 2,
      sym__newline,
      sym__line,
  [86] = 4,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym__message_separator,
    STATE(9), 1,
      aux_sym__lines,
    ACTIONS(28), 2,
      sym__newline,
      sym__line,
  [100] = 3,
    STATE(14), 1,
      aux_sym__lines,
    STATE(28), 1,
      sym_assistant_message,
    ACTIONS(33), 2,
      sym__newline,
      sym__line,
  [111] = 3,
    ACTIONS(31), 1,
      sym__message_separator,
    STATE(11), 1,
      aux_sym__lines,
    ACTIONS(35), 2,
      sym__newline,
      sym__line,
  [122] = 3,
    ACTIONS(31), 1,
      sym__params_separator,
    STATE(12), 1,
      aux_sym__lines,
    ACTIONS(38), 2,
      sym__newline,
      sym__line,
  [133] = 3,
    ACTIONS(24), 1,
      sym__message_separator,
    STATE(11), 1,
      aux_sym__lines,
    ACTIONS(41), 2,
      sym__newline,
      sym__line,
  [144] = 3,
    ACTIONS(43), 1,
      sym__message_separator,
    STATE(11), 1,
      aux_sym__lines,
    ACTIONS(41), 2,
      sym__newline,
      sym__line,
  [155] = 1,
    ACTIONS(45), 4,
      anon_sym_GT,
      sym__newline,
      sym__line,
      sym__params_separator,
  [162] = 3,
    ACTIONS(49), 1,
      sym__params_separator,
    STATE(12), 1,
      aux_sym__lines,
    ACTIONS(47), 2,
      sym__newline,
      sym__line,
  [173] = 1,
    ACTIONS(51), 3,
      anon_sym_GT,
      sym__newline,
      sym__line,
  [179] = 2,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 2,
      sym__newline,
      sym__line,
  [187] = 3,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(57), 1,
      sym__newline,
    ACTIONS(59), 1,
      sym__message_separator,
  [197] = 2,
    STATE(16), 1,
      aux_sym__lines,
    ACTIONS(61), 2,
      sym__newline,
      sym__line,
  [205] = 1,
    ACTIONS(63), 2,
      sym__newline,
      sym__line,
  [210] = 1,
    ACTIONS(65), 1,
      sym__line,
  [214] = 1,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
  [218] = 1,
    ACTIONS(69), 1,
      sym__message_separator,
  [222] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [226] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [230] = 1,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
  [234] = 1,
    ACTIONS(77), 1,
      sym__message_separator,
  [238] = 1,
    ACTIONS(79), 1,
      sym__newline,
  [242] = 1,
    ACTIONS(81), 1,
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
  [SMALL_STATE(12)] = 122,
  [SMALL_STATE(13)] = 133,
  [SMALL_STATE(14)] = 144,
  [SMALL_STATE(15)] = 155,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 173,
  [SMALL_STATE(18)] = 179,
  [SMALL_STATE(19)] = 187,
  [SMALL_STATE(20)] = 197,
  [SMALL_STATE(21)] = 205,
  [SMALL_STATE(22)] = 210,
  [SMALL_STATE(23)] = 214,
  [SMALL_STATE(24)] = 218,
  [SMALL_STATE(25)] = 222,
  [SMALL_STATE(26)] = 226,
  [SMALL_STATE(27)] = 230,
  [SMALL_STATE(28)] = 234,
  [SMALL_STATE(29)] = 238,
  [SMALL_STATE(30)] = 242,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_sequence_repeat1, 2), SHIFT_REPEAT(13),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 1),
  [18] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_message, 1),
  [22] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [24] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_message, 1),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 2),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(11),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(12),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [43] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assistant_message, 1),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chat_handler, 1),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params_block, 3),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_turn, 4),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_turn, 4),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_instruction, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [73] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 2),
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
