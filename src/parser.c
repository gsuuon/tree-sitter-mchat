#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_DASH_DASH_DASH = 1,
  anon_sym_GT = 2,
  sym__newline = 3,
  sym__line = 4,
  anon_sym_EQ_EQ_EQ_EQ_EQ_EQ = 5,
  sym_document = 6,
  sym_chat_handler = 7,
  sym_params_block = 8,
  sym_system_instruction = 9,
  sym_message_sequence = 10,
  sym_message_turn = 11,
  sym_user_message = 12,
  sym_assistant_message = 13,
  aux_sym__lines = 14,
  sym__message_separator = 15,
  aux_sym_message_sequence_repeat1 = 16,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_GT] = "> ",
  [sym__newline] = "_newline",
  [sym__line] = "_line",
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = "======",
  [sym_document] = "document",
  [sym_chat_handler] = "chat_handler",
  [sym_params_block] = "params_block",
  [sym_system_instruction] = "system_instruction",
  [sym_message_sequence] = "message_sequence",
  [sym_message_turn] = "message_turn",
  [sym_user_message] = "user_message",
  [sym_assistant_message] = "assistant_message",
  [aux_sym__lines] = "_lines",
  [sym__message_separator] = "_message_separator",
  [aux_sym_message_sequence_repeat1] = "message_sequence_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [sym__newline] = sym__newline,
  [sym__line] = sym__line,
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [sym_document] = sym_document,
  [sym_chat_handler] = sym_chat_handler,
  [sym_params_block] = sym_params_block,
  [sym_system_instruction] = sym_system_instruction,
  [sym_message_sequence] = sym_message_sequence,
  [sym_message_turn] = sym_message_turn,
  [sym_user_message] = sym_user_message,
  [sym_assistant_message] = sym_assistant_message,
  [aux_sym__lines] = aux_sym__lines,
  [sym__message_separator] = sym__message_separator,
  [aux_sym_message_sequence_repeat1] = aux_sym_message_sequence_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DASH_DASH_DASH] = {
    .visible = true,
    .named = false,
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
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = {
    .visible = true,
    .named = false,
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
  [sym__message_separator] = {
    .visible = false,
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
  [10] = 8,
  [11] = 9,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 8,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 18,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 37,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(40);
      END_STATE();
    case 7:
      if (lookahead == '=') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '=') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '>') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '-') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(39);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_EQ_EQ_EQ_EQ_EQ_EQ);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 2},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 11},
  [6] = {.lex_state = 11},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 12},
  [11] = {.lex_state = 12},
  [12] = {.lex_state = 12},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 11},
  [16] = {.lex_state = 13},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 11},
  [19] = {.lex_state = 11},
  [20] = {.lex_state = 11},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 3},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 3},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 3},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
    [sym__line] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(38),
    [sym_chat_handler] = STATE(35),
    [sym__line] = ACTIONS(3),
  },
  [2] = {
    [sym_params_block] = STATE(29),
    [sym_system_instruction] = STATE(25),
    [sym_message_sequence] = STATE(28),
    [sym_message_turn] = STATE(7),
    [sym_user_message] = STATE(16),
    [aux_sym__lines] = STATE(9),
    [aux_sym_message_sequence_repeat1] = STATE(7),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [sym__line] = ACTIONS(9),
  },
  [3] = {
    [sym_system_instruction] = STATE(26),
    [sym_message_sequence] = STATE(27),
    [sym_message_turn] = STATE(7),
    [sym_user_message] = STATE(16),
    [aux_sym__lines] = STATE(9),
    [aux_sym_message_sequence_repeat1] = STATE(7),
    [anon_sym_GT] = ACTIONS(7),
    [sym__newline] = ACTIONS(9),
    [sym__line] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    STATE(9), 1,
      aux_sym__lines,
    STATE(16), 1,
      sym_user_message,
    STATE(27), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      sym__newline,
      sym__line,
    STATE(7), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [18] = 5,
    STATE(9), 1,
      aux_sym__lines,
    STATE(16), 1,
      sym_user_message,
    STATE(34), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      sym__newline,
      sym__line,
    STATE(7), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [36] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      aux_sym__lines,
    STATE(24), 1,
      sym_user_message,
    ACTIONS(13), 2,
      sym__newline,
      sym__line,
    STATE(6), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [54] = 5,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      aux_sym__lines,
    STATE(21), 1,
      sym_user_message,
    ACTIONS(9), 2,
      sym__newline,
      sym__line,
    STATE(6), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [72] = 4,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(8), 1,
      aux_sym__lines,
    ACTIONS(20), 2,
      sym__newline,
      sym__line,
  [86] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(8), 1,
      aux_sym__lines,
    ACTIONS(27), 2,
      sym__newline,
      sym__line,
  [100] = 3,
    ACTIONS(23), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(10), 1,
      aux_sym__lines,
    ACTIONS(31), 2,
      sym__newline,
      sym__line,
  [111] = 3,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(10), 1,
      aux_sym__lines,
    ACTIONS(34), 2,
      sym__newline,
      sym__line,
  [122] = 3,
    ACTIONS(36), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(10), 1,
      aux_sym__lines,
    ACTIONS(34), 2,
      sym__newline,
      sym__line,
  [133] = 3,
    STATE(12), 1,
      aux_sym__lines,
    STATE(22), 1,
      sym_assistant_message,
    ACTIONS(38), 2,
      sym__newline,
      sym__line,
  [144] = 2,
    ACTIONS(40), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(42), 2,
      sym__newline,
      sym__line,
  [152] = 3,
    ACTIONS(44), 1,
      sym__newline,
    ACTIONS(46), 1,
      sym__line,
    STATE(19), 1,
      aux_sym__lines,
  [162] = 3,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(13), 1,
      sym__message_separator,
  [172] = 2,
    STATE(15), 1,
      aux_sym__lines,
    ACTIONS(50), 2,
      sym__newline,
      sym__line,
  [180] = 2,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 2,
      sym__newline,
      sym__line,
  [188] = 2,
    STATE(19), 1,
      aux_sym__lines,
    ACTIONS(56), 2,
      sym__newline,
      sym__line,
  [196] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 2,
      sym__newline,
      sym__line,
  [204] = 3,
    ACTIONS(48), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(13), 1,
      sym__message_separator,
  [214] = 2,
    ACTIONS(65), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(20), 1,
      sym__message_separator,
  [221] = 1,
    ACTIONS(54), 2,
      sym__newline,
      sym__line,
  [226] = 2,
    ACTIONS(48), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(13), 1,
      sym__message_separator,
  [233] = 1,
    ACTIONS(67), 1,
      sym__newline,
  [237] = 1,
    ACTIONS(69), 1,
      sym__newline,
  [241] = 1,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
  [245] = 1,
    ACTIONS(73), 1,
      ts_builtin_sym_end,
  [249] = 1,
    ACTIONS(75), 1,
      sym__newline,
  [253] = 1,
    ACTIONS(77), 1,
      sym__line,
  [257] = 1,
    ACTIONS(79), 1,
      sym__newline,
  [261] = 1,
    ACTIONS(81), 1,
      sym__newline,
  [265] = 1,
    ACTIONS(83), 1,
      sym__newline,
  [269] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [273] = 1,
    ACTIONS(87), 1,
      sym__newline,
  [277] = 1,
    ACTIONS(89), 1,
      sym__newline,
  [281] = 1,
    ACTIONS(91), 1,
      sym__newline,
  [285] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [289] = 1,
    ACTIONS(95), 1,
      sym__newline,
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
  [SMALL_STATE(15)] = 152,
  [SMALL_STATE(16)] = 162,
  [SMALL_STATE(17)] = 172,
  [SMALL_STATE(18)] = 180,
  [SMALL_STATE(19)] = 188,
  [SMALL_STATE(20)] = 196,
  [SMALL_STATE(21)] = 204,
  [SMALL_STATE(22)] = 214,
  [SMALL_STATE(23)] = 221,
  [SMALL_STATE(24)] = 226,
  [SMALL_STATE(25)] = 233,
  [SMALL_STATE(26)] = 237,
  [SMALL_STATE(27)] = 241,
  [SMALL_STATE(28)] = 245,
  [SMALL_STATE(29)] = 249,
  [SMALL_STATE(30)] = 253,
  [SMALL_STATE(31)] = 257,
  [SMALL_STATE(32)] = 261,
  [SMALL_STATE(33)] = 265,
  [SMALL_STATE(34)] = 269,
  [SMALL_STATE(35)] = 273,
  [SMALL_STATE(36)] = 277,
  [SMALL_STATE(37)] = 281,
  [SMALL_STATE(38)] = 285,
  [SMALL_STATE(39)] = 289,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_sequence_repeat1, 2), SHIFT_REPEAT(11),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 1),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_message, 1),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_message, 1),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(10),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [36] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assistant_message, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 1),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_separator, 2),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__message_separator, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(19),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_turn, 4),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_turn, 4),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 2),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_instruction, 2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_block, 5),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chat_handler, 1),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
