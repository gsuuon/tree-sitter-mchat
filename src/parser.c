#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 17
#define ALIAS_COUNT 0
#define TOKEN_COUNT 6
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6
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
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 10,
  [15] = 11,
  [16] = 16,
  [17] = 17,
  [18] = 10,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 19,
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
  [39] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '=') ADVANCE(39);
      END_STATE();
    case 5:
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      END_STATE();
    case 6:
      if (lookahead == '=') ADVANCE(4);
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
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 11:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '=') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      END_STATE();
    case 12:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(20);
      if (lookahead == '=') ADVANCE(9);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(17);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(18);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(19);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(22);
      if (lookahead == '=') ADVANCE(36);
      if (lookahead == '>') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(27);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\n') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(38);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(15);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '=') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym__line);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym__line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
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
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 13},
  [6] = {.lex_state = 13},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 12},
  [9] = {.lex_state = 12},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 11},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 13},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 13},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 5},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 3},
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
    [sym_document] = STATE(30),
    [sym_chat_handler] = STATE(28),
    [sym__line] = ACTIONS(3),
  },
  [2] = {
    [sym_params_block] = STATE(6),
    [sym_message_sequence] = STATE(34),
    [sym_message_turn] = STATE(3),
    [sym_user_message] = STATE(13),
    [aux_sym__lines] = STATE(11),
    [aux_sym_message_sequence_repeat1] = STATE(3),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [sym__newline] = ACTIONS(7),
    [sym__line] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__lines,
    STATE(24), 1,
      sym_user_message,
    ACTIONS(13), 2,
      sym__newline,
      sym__line,
    STATE(5), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [18] = 5,
    STATE(11), 1,
      aux_sym__lines,
    STATE(13), 1,
      sym_user_message,
    STATE(33), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      sym__newline,
      sym__line,
    STATE(3), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [36] = 5,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(15), 1,
      aux_sym__lines,
    STATE(24), 1,
      sym_user_message,
    ACTIONS(17), 2,
      sym__newline,
      sym__line,
    STATE(5), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [54] = 6,
    ACTIONS(9), 1,
      sym__line,
    ACTIONS(20), 1,
      sym__newline,
    STATE(11), 1,
      aux_sym__lines,
    STATE(13), 1,
      sym_user_message,
    STATE(37), 1,
      sym_message_sequence,
    STATE(3), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [74] = 5,
    STATE(11), 1,
      aux_sym__lines,
    STATE(13), 1,
      sym_user_message,
    STATE(29), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      sym__newline,
      sym__line,
    STATE(3), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
  [92] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_GT,
    STATE(7), 1,
      sym_system_instruction,
    ACTIONS(26), 3,
      sym__newline,
      sym__line,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [107] = 4,
    ACTIONS(22), 1,
      ts_builtin_sym_end,
    ACTIONS(24), 1,
      anon_sym_GT,
    STATE(4), 1,
      sym_system_instruction,
    ACTIONS(26), 3,
      sym__newline,
      sym__line,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [122] = 4,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(33), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(10), 1,
      aux_sym__lines,
    ACTIONS(30), 2,
      sym__newline,
      sym__line,
  [136] = 4,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(10), 1,
      aux_sym__lines,
    ACTIONS(37), 2,
      sym__newline,
      sym__line,
  [150] = 3,
    STATE(16), 1,
      aux_sym__lines,
    STATE(26), 1,
      sym_assistant_message,
    ACTIONS(41), 2,
      sym__newline,
      sym__line,
  [161] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(43), 1,
      sym__newline,
    ACTIONS(45), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(12), 1,
      sym__message_separator,
  [174] = 3,
    ACTIONS(33), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(14), 1,
      aux_sym__lines,
    ACTIONS(47), 2,
      sym__newline,
      sym__line,
  [185] = 3,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(14), 1,
      aux_sym__lines,
    ACTIONS(50), 2,
      sym__newline,
      sym__line,
  [196] = 3,
    ACTIONS(52), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(14), 1,
      aux_sym__lines,
    ACTIONS(50), 2,
      sym__newline,
      sym__line,
  [207] = 2,
    STATE(22), 1,
      aux_sym__lines,
    ACTIONS(54), 2,
      sym__newline,
      sym__line,
  [215] = 2,
    STATE(18), 1,
      aux_sym__lines,
    ACTIONS(56), 2,
      sym__newline,
      sym__line,
  [223] = 2,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 2,
      sym__newline,
      sym__line,
  [231] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 2,
      sym__newline,
      sym__line,
  [239] = 2,
    ACTIONS(67), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(26), 2,
      sym__newline,
      sym__line,
  [247] = 3,
    ACTIONS(69), 1,
      sym__newline,
    ACTIONS(71), 1,
      sym__line,
    STATE(18), 1,
      aux_sym__lines,
  [257] = 1,
    ACTIONS(73), 2,
      sym__newline,
      sym__line,
  [262] = 2,
    ACTIONS(75), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(12), 1,
      sym__message_separator,
  [269] = 1,
    ACTIONS(61), 2,
      sym__newline,
      sym__line,
  [274] = 2,
    ACTIONS(77), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(20), 1,
      sym__message_separator,
  [281] = 1,
    ACTIONS(79), 2,
      sym__newline,
      sym__line,
  [286] = 1,
    ACTIONS(81), 1,
      sym__newline,
  [290] = 1,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
  [294] = 1,
    ACTIONS(85), 1,
      ts_builtin_sym_end,
  [298] = 1,
    ACTIONS(87), 1,
      sym__line,
  [302] = 1,
    ACTIONS(89), 1,
      sym__newline,
  [306] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [310] = 1,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
  [314] = 1,
    ACTIONS(95), 1,
      sym__newline,
  [318] = 1,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
  [322] = 1,
    ACTIONS(99), 1,
      ts_builtin_sym_end,
  [326] = 1,
    ACTIONS(101), 1,
      sym__newline,
  [330] = 1,
    ACTIONS(103), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 18,
  [SMALL_STATE(5)] = 36,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 74,
  [SMALL_STATE(8)] = 92,
  [SMALL_STATE(9)] = 107,
  [SMALL_STATE(10)] = 122,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 150,
  [SMALL_STATE(13)] = 161,
  [SMALL_STATE(14)] = 174,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 196,
  [SMALL_STATE(17)] = 207,
  [SMALL_STATE(18)] = 215,
  [SMALL_STATE(19)] = 223,
  [SMALL_STATE(20)] = 231,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 247,
  [SMALL_STATE(23)] = 257,
  [SMALL_STATE(24)] = 262,
  [SMALL_STATE(25)] = 269,
  [SMALL_STATE(26)] = 274,
  [SMALL_STATE(27)] = 281,
  [SMALL_STATE(28)] = 286,
  [SMALL_STATE(29)] = 290,
  [SMALL_STATE(30)] = 294,
  [SMALL_STATE(31)] = 298,
  [SMALL_STATE(32)] = 302,
  [SMALL_STATE(33)] = 306,
  [SMALL_STATE(34)] = 310,
  [SMALL_STATE(35)] = 314,
  [SMALL_STATE(36)] = 318,
  [SMALL_STATE(37)] = 322,
  [SMALL_STATE(38)] = 326,
  [SMALL_STATE(39)] = 330,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 1),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_sequence_repeat1, 2), SHIFT_REPEAT(15),
  [20] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 1),
  [24] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(10),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 2),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_message, 1),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [39] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_message, 1),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(14),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assistant_message, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2), SHIFT_REPEAT(18),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__message_separator, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__message_separator, 2),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_turn, 4),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_turn, 4),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_system_instruction, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_params_block, 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5),
  [85] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 6),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 4),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chat_handler, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
