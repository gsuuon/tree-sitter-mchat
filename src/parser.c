#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 22
#define ALIAS_COUNT 2
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 4

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH = 1,
  anon_sym_GT = 2,
  aux_sym_assistant_message_token1 = 3,
  anon_sym_LT_LT_LT_LT_LT_LTreasoning = 4,
  anon_sym_GT_GT_GT_GT_GT_GT = 5,
  sym__newline = 6,
  anon_sym_EQ_EQ_EQ_EQ_EQ_EQ = 7,
  sym_document = 8,
  sym_chat_handler = 9,
  sym_params_block = 10,
  sym_system_instruction = 11,
  sym_message_sequence = 12,
  sym_message_turn = 13,
  sym_user_message = 14,
  sym_assistant_message = 15,
  sym__reasoning = 16,
  sym__line = 17,
  aux_sym__lines = 18,
  sym_turn_delimiter = 19,
  aux_sym_message_sequence_repeat1 = 20,
  aux_sym_assistant_message_repeat1 = 21,
  alias_sym_content = 22,
  alias_sym_reasoning = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_GT] = "> ",
  [aux_sym_assistant_message_token1] = "assistant_message_token1",
  [anon_sym_LT_LT_LT_LT_LT_LTreasoning] = "reason_delimiter",
  [anon_sym_GT_GT_GT_GT_GT_GT] = "reason_delimiter",
  [sym__newline] = "_newline",
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = "======",
  [sym_document] = "document",
  [sym_chat_handler] = "chat_handler",
  [sym_params_block] = "params_block",
  [sym_system_instruction] = "system_instruction",
  [sym_message_sequence] = "message_sequence",
  [sym_message_turn] = "message_turn",
  [sym_user_message] = "user_message",
  [sym_assistant_message] = "assistant_message",
  [sym__reasoning] = "_reasoning",
  [sym__line] = "_line",
  [aux_sym__lines] = "_lines",
  [sym_turn_delimiter] = "turn_delimiter",
  [aux_sym_message_sequence_repeat1] = "message_sequence_repeat1",
  [aux_sym_assistant_message_repeat1] = "assistant_message_repeat1",
  [alias_sym_content] = "content",
  [alias_sym_reasoning] = "reasoning",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_assistant_message_token1] = aux_sym_assistant_message_token1,
  [anon_sym_LT_LT_LT_LT_LT_LTreasoning] = anon_sym_LT_LT_LT_LT_LT_LTreasoning,
  [anon_sym_GT_GT_GT_GT_GT_GT] = anon_sym_LT_LT_LT_LT_LT_LTreasoning,
  [sym__newline] = sym__newline,
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [sym_document] = sym_document,
  [sym_chat_handler] = sym_chat_handler,
  [sym_params_block] = sym_params_block,
  [sym_system_instruction] = sym_system_instruction,
  [sym_message_sequence] = sym_message_sequence,
  [sym_message_turn] = sym_message_turn,
  [sym_user_message] = sym_user_message,
  [sym_assistant_message] = sym_assistant_message,
  [sym__reasoning] = sym__reasoning,
  [sym__line] = sym__line,
  [aux_sym__lines] = aux_sym__lines,
  [sym_turn_delimiter] = sym_turn_delimiter,
  [aux_sym_message_sequence_repeat1] = aux_sym_message_sequence_repeat1,
  [aux_sym_assistant_message_repeat1] = aux_sym_assistant_message_repeat1,
  [alias_sym_content] = alias_sym_content,
  [alias_sym_reasoning] = alias_sym_reasoning,
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
  [aux_sym_assistant_message_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LT_LT_LT_LT_LT_LTreasoning] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_GT_GT_GT_GT_GT_GT] = {
    .visible = true,
    .named = true,
  },
  [sym__newline] = {
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
  [sym__reasoning] = {
    .visible = false,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym__lines] = {
    .visible = false,
    .named = false,
  },
  [sym_turn_delimiter] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_message_sequence_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_assistant_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_content] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_reasoning] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_content,
  },
  [2] = {
    [1] = alias_sym_content,
  },
  [3] = {
    [1] = alias_sym_reasoning,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_assistant_message_repeat1, 3,
    aux_sym_assistant_message_repeat1,
    alias_sym_content,
    alias_sym_reasoning,
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
  [13] = 8,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 18,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 20,
  [30] = 27,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 45,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(25);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '>') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '<') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '>') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '=') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(65);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '>') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 8:
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '-') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(68);
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
      if (lookahead == '\n') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '=') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '=') ADVANCE(13);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '>') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '\n') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '=') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '>') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '\n') ADVANCE(67);
      if (lookahead == '-') ADVANCE(30);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(59);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '>') ADVANCE(25);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(28);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(59);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '-') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(59);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '<') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(59);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '=') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '>') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(59);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 'a') ADVANCE(57);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 'e') ADVANCE(49);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 'g') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 'n') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 'n') ADVANCE(51);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 'o') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 'r') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == 's') ADVANCE(55);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(58);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(59);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_assistant_message_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_LT_LT_LT_LT_LT_LTreasoning);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(59);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT_GT);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(62);
      if (lookahead == '>') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(20);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(63);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(64);
      if (lookahead == '=') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(66);
      if (lookahead == '>') ADVANCE(26);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(67);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 68:
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
  [3] = {.lex_state = 7},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 15},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 4},
  [19] = {.lex_state = 16},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 16},
  [23] = {.lex_state = 5},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 16},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 16},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_assistant_message_token1] = ACTIONS(1),
    [anon_sym_LT_LT_LT_LT_LT_LTreasoning] = ACTIONS(1),
    [anon_sym_GT_GT_GT_GT_GT_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(36),
    [sym_chat_handler] = STATE(48),
    [sym__line] = STATE(44),
    [aux_sym_assistant_message_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_params_block] = STATE(38),
    [sym_system_instruction] = STATE(37),
    [sym_message_sequence] = STATE(47),
    [sym_message_turn] = STATE(7),
    [sym_user_message] = STATE(19),
    [sym__line] = STATE(9),
    [aux_sym__lines] = STATE(9),
    [aux_sym_message_sequence_repeat1] = STATE(7),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(7),
    [aux_sym_assistant_message_token1] = ACTIONS(9),
    [sym__newline] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      anon_sym_GT,
    STATE(19), 1,
      sym_user_message,
    STATE(34), 1,
      sym_message_sequence,
    STATE(39), 1,
      sym_system_instruction,
    ACTIONS(9), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(7), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
    STATE(9), 2,
      sym__line,
      aux_sym__lines,
  [25] = 5,
    STATE(19), 1,
      sym_user_message,
    STATE(41), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(7), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
    STATE(9), 2,
      sym__line,
      aux_sym__lines,
  [44] = 5,
    STATE(19), 1,
      sym_user_message,
    STATE(34), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(7), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
    STATE(9), 2,
      sym__line,
      aux_sym__lines,
  [63] = 5,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_user_message,
    ACTIONS(13), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(6), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
    STATE(11), 2,
      sym__line,
      aux_sym__lines,
  [82] = 5,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    STATE(22), 1,
      sym_user_message,
    ACTIONS(9), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(6), 2,
      sym_message_turn,
      aux_sym_message_sequence_repeat1,
    STATE(9), 2,
      sym__line,
      aux_sym__lines,
  [101] = 4,
    ACTIONS(18), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(20), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(8), 2,
      sym__line,
      aux_sym__lines,
  [116] = 4,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(27), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(8), 2,
      sym__line,
      aux_sym__lines,
  [131] = 3,
    ACTIONS(23), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(31), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(10), 2,
      sym__line,
      aux_sym__lines,
  [143] = 3,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(34), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(10), 2,
      sym__line,
      aux_sym__lines,
  [155] = 5,
    ACTIONS(36), 1,
      aux_sym_assistant_message_token1,
    ACTIONS(38), 1,
      anon_sym_LT_LT_LT_LT_LT_LTreasoning,
    STATE(25), 1,
      aux_sym_assistant_message_repeat1,
    STATE(31), 1,
      sym_assistant_message,
    STATE(32), 1,
      sym__reasoning,
  [171] = 2,
    ACTIONS(40), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(13), 2,
      sym__line,
      aux_sym__lines,
  [180] = 2,
    ACTIONS(43), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
    STATE(15), 2,
      sym__line,
      aux_sym__lines,
  [189] = 3,
    ACTIONS(45), 1,
      aux_sym_assistant_message_token1,
    ACTIONS(47), 1,
      sym__newline,
    STATE(13), 2,
      sym__line,
      aux_sym__lines,
  [200] = 2,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
  [208] = 3,
    ACTIONS(53), 1,
      aux_sym_assistant_message_token1,
    ACTIONS(55), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(18), 1,
      aux_sym_assistant_message_repeat1,
  [218] = 3,
    ACTIONS(57), 1,
      aux_sym_assistant_message_token1,
    ACTIONS(60), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(18), 1,
      aux_sym_assistant_message_repeat1,
  [228] = 3,
    ACTIONS(16), 1,
      ts_builtin_sym_end,
    ACTIONS(62), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(12), 1,
      sym_turn_delimiter,
  [238] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
  [246] = 3,
    ACTIONS(60), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(68), 1,
      aux_sym_assistant_message_token1,
    STATE(21), 1,
      aux_sym_assistant_message_repeat1,
  [256] = 3,
    ACTIONS(62), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    STATE(12), 1,
      sym_turn_delimiter,
  [266] = 3,
    ACTIONS(36), 1,
      aux_sym_assistant_message_token1,
    ACTIONS(73), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(21), 1,
      aux_sym_assistant_message_repeat1,
  [276] = 3,
    ACTIONS(53), 1,
      aux_sym_assistant_message_token1,
    ACTIONS(75), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(17), 1,
      aux_sym_assistant_message_repeat1,
  [286] = 3,
    ACTIONS(36), 1,
      aux_sym_assistant_message_token1,
    ACTIONS(77), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(21), 1,
      aux_sym_assistant_message_repeat1,
  [296] = 2,
    ACTIONS(79), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(81), 2,
      aux_sym_assistant_message_token1,
      sym__newline,
  [304] = 1,
    ACTIONS(83), 2,
      aux_sym_assistant_message_token1,
      anon_sym_GT_GT_GT_GT_GT_GT,
  [309] = 2,
    ACTIONS(85), 1,
      aux_sym_assistant_message_token1,
    STATE(46), 1,
      sym__line,
  [316] = 1,
    ACTIONS(66), 2,
      aux_sym_assistant_message_token1,
      anon_sym_LT_LT_LT_LT_LT_LTreasoning,
  [321] = 1,
    ACTIONS(83), 2,
      aux_sym_assistant_message_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [326] = 2,
    ACTIONS(87), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(16), 1,
      sym_turn_delimiter,
  [333] = 2,
    ACTIONS(89), 1,
      aux_sym_assistant_message_token1,
    STATE(23), 1,
      aux_sym_assistant_message_repeat1,
  [340] = 2,
    ACTIONS(62), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(12), 1,
      sym_turn_delimiter,
  [347] = 1,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
  [351] = 1,
    ACTIONS(93), 1,
      aux_sym_assistant_message_token1,
  [355] = 1,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
  [359] = 1,
    ACTIONS(97), 1,
      sym__newline,
  [363] = 1,
    ACTIONS(99), 1,
      sym__newline,
  [367] = 1,
    ACTIONS(101), 1,
      sym__newline,
  [371] = 1,
    ACTIONS(103), 1,
      sym__newline,
  [375] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
  [379] = 1,
    ACTIONS(107), 1,
      aux_sym_assistant_message_token1,
  [383] = 1,
    ACTIONS(109), 1,
      sym__newline,
  [387] = 1,
    ACTIONS(111), 1,
      sym__newline,
  [391] = 1,
    ACTIONS(113), 1,
      sym__newline,
  [395] = 1,
    ACTIONS(115), 1,
      sym__newline,
  [399] = 1,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
  [403] = 1,
    ACTIONS(119), 1,
      sym__newline,
  [407] = 1,
    ACTIONS(121), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 25,
  [SMALL_STATE(5)] = 44,
  [SMALL_STATE(6)] = 63,
  [SMALL_STATE(7)] = 82,
  [SMALL_STATE(8)] = 101,
  [SMALL_STATE(9)] = 116,
  [SMALL_STATE(10)] = 131,
  [SMALL_STATE(11)] = 143,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 171,
  [SMALL_STATE(14)] = 180,
  [SMALL_STATE(15)] = 189,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 208,
  [SMALL_STATE(18)] = 218,
  [SMALL_STATE(19)] = 228,
  [SMALL_STATE(20)] = 238,
  [SMALL_STATE(21)] = 246,
  [SMALL_STATE(22)] = 256,
  [SMALL_STATE(23)] = 266,
  [SMALL_STATE(24)] = 276,
  [SMALL_STATE(25)] = 286,
  [SMALL_STATE(26)] = 296,
  [SMALL_STATE(27)] = 304,
  [SMALL_STATE(28)] = 309,
  [SMALL_STATE(29)] = 316,
  [SMALL_STATE(30)] = 321,
  [SMALL_STATE(31)] = 326,
  [SMALL_STATE(32)] = 333,
  [SMALL_STATE(33)] = 340,
  [SMALL_STATE(34)] = 347,
  [SMALL_STATE(35)] = 351,
  [SMALL_STATE(36)] = 355,
  [SMALL_STATE(37)] = 359,
  [SMALL_STATE(38)] = 363,
  [SMALL_STATE(39)] = 367,
  [SMALL_STATE(40)] = 371,
  [SMALL_STATE(41)] = 375,
  [SMALL_STATE(42)] = 379,
  [SMALL_STATE(43)] = 383,
  [SMALL_STATE(44)] = 387,
  [SMALL_STATE(45)] = 391,
  [SMALL_STATE(46)] = 395,
  [SMALL_STATE(47)] = 399,
  [SMALL_STATE(48)] = 403,
  [SMALL_STATE(49)] = 407,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2, 0, 0),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_message_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [16] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 1, 0, 0),
  [18] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2, 0, 0),
  [20] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2, 0, 0), SHIFT_REPEAT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 2, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_message, 1, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_message, 1, 0, 0),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2, 0, 0), SHIFT_REPEAT(10),
  [34] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2, 0, 0), SHIFT_REPEAT(13),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_turn, 4, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_message_turn, 4, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assistant_message_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assistant_message_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turn_delimiter, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_turn_delimiter, 2, 0, 0),
  [68] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_assistant_message_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 2, 0, 0),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assistant_message, 2, 0, 2),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assistant_message, 1, 0, 1),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 1, 0, 0),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_assistant_message_repeat1, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, 0, 0),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reasoning, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_block, 5, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__reasoning, 3, 0, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chat_handler, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_instruction, 2, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_mchat(void) {
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
