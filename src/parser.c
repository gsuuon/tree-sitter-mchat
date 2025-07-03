#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 61
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 1
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_DASH_DASH_DASH = 1,
  anon_sym_GT = 2,
  aux_sym_content_token1 = 3,
  aux_sym_data_section_token1 = 4,
  anon_sym_GT_GT_GT_GT_GT_GT = 5,
  sym__newline = 6,
  anon_sym_EQ_EQ_EQ_EQ_EQ_EQ = 7,
  sym_document = 8,
  sym_chat_handler = 9,
  sym_params_block = 10,
  sym_system_instruction = 11,
  sym_message_sequence = 12,
  sym_user_message = 13,
  sym_content = 14,
  sym_assistant_message = 15,
  sym_data_section = 16,
  sym__line = 17,
  aux_sym__lines = 18,
  sym_turn_delimiter = 19,
  aux_sym_message_sequence_repeat1 = 20,
  aux_sym_user_message_repeat1 = 21,
  aux_sym_content_repeat1 = 22,
  alias_sym_data_section_body = 23,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DASH_DASH_DASH] = "---",
  [anon_sym_GT] = "> ",
  [aux_sym_content_token1] = "content_token1",
  [aux_sym_data_section_token1] = "data_section_open",
  [anon_sym_GT_GT_GT_GT_GT_GT] = "data_section_close",
  [sym__newline] = "_newline",
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = "======",
  [sym_document] = "document",
  [sym_chat_handler] = "chat_handler",
  [sym_params_block] = "params_block",
  [sym_system_instruction] = "system_instruction",
  [sym_message_sequence] = "message_sequence",
  [sym_user_message] = "user_message",
  [sym_content] = "content",
  [sym_assistant_message] = "assistant_message",
  [sym_data_section] = "data_section",
  [sym__line] = "_line",
  [aux_sym__lines] = "_lines",
  [sym_turn_delimiter] = "turn_delimiter",
  [aux_sym_message_sequence_repeat1] = "message_sequence_repeat1",
  [aux_sym_user_message_repeat1] = "user_message_repeat1",
  [aux_sym_content_repeat1] = "content_repeat1",
  [alias_sym_data_section_body] = "data_section_body",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DASH_DASH_DASH] = anon_sym_DASH_DASH_DASH,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym_content_token1] = aux_sym_content_token1,
  [aux_sym_data_section_token1] = aux_sym_data_section_token1,
  [anon_sym_GT_GT_GT_GT_GT_GT] = anon_sym_GT_GT_GT_GT_GT_GT,
  [sym__newline] = sym__newline,
  [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [sym_document] = sym_document,
  [sym_chat_handler] = sym_chat_handler,
  [sym_params_block] = sym_params_block,
  [sym_system_instruction] = sym_system_instruction,
  [sym_message_sequence] = sym_message_sequence,
  [sym_user_message] = sym_user_message,
  [sym_content] = sym_content,
  [sym_assistant_message] = sym_assistant_message,
  [sym_data_section] = sym_data_section,
  [sym__line] = sym__line,
  [aux_sym__lines] = aux_sym__lines,
  [sym_turn_delimiter] = sym_turn_delimiter,
  [aux_sym_message_sequence_repeat1] = aux_sym_message_sequence_repeat1,
  [aux_sym_user_message_repeat1] = aux_sym_user_message_repeat1,
  [aux_sym_content_repeat1] = aux_sym_content_repeat1,
  [alias_sym_data_section_body] = alias_sym_data_section_body,
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
  [aux_sym_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_data_section_token1] = {
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
  [sym_user_message] = {
    .visible = true,
    .named = true,
  },
  [sym_content] = {
    .visible = true,
    .named = true,
  },
  [sym_assistant_message] = {
    .visible = true,
    .named = true,
  },
  [sym_data_section] = {
    .visible = true,
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
  [aux_sym_user_message_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_data_section_body] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [1] = alias_sym_data_section_body,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym_content_repeat1, 2,
    aux_sym_content_repeat1,
    alias_sym_data_section_body,
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
  [14] = 14,
  [15] = 6,
  [16] = 7,
  [17] = 17,
  [18] = 18,
  [19] = 17,
  [20] = 18,
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
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 31,
  [35] = 22,
  [36] = 36,
  [37] = 24,
  [38] = 29,
  [39] = 18,
  [40] = 40,
  [41] = 36,
  [42] = 42,
  [43] = 43,
  [44] = 40,
  [45] = 22,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 51,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(23);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(24);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5);
      if (lookahead == '>') ADVANCE(42);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(54);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '-') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == '=') ADVANCE(8);
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
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(13);
      if (lookahead == '<') ADVANCE(36);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 14:
      if (eof) ADVANCE(16);
      if (lookahead == '\n') SKIP(14);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(41);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '=') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(51);
      if (lookahead != 0) ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '-') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(49);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '>') ADVANCE(23);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(28);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(17);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(27);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '>') ADVANCE(24);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(31);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(32);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(38);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(43);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(42);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(47);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(48);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(49);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(20);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_data_section_token1);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT_GT);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(21);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(55);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 56:
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
  [3] = {.lex_state = 3},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 13},
  [9] = {.lex_state = 13},
  [10] = {.lex_state = 13},
  [11] = {.lex_state = 13},
  [12] = {.lex_state = 13},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 13},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 15},
  [22] = {.lex_state = 14},
  [23] = {.lex_state = 4},
  [24] = {.lex_state = 14},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 4},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 14},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 5},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 7},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 14},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 14},
  [38] = {.lex_state = 14},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 13},
  [41] = {.lex_state = 5},
  [42] = {.lex_state = 1},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 13},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 15},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 6},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [aux_sym_content_token1] = ACTIONS(1),
    [aux_sym_data_section_token1] = ACTIONS(1),
    [anon_sym_GT_GT_GT_GT_GT_GT] = ACTIONS(1),
    [anon_sym_EQ_EQ_EQ_EQ_EQ_EQ] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(52),
    [sym_chat_handler] = STATE(53),
    [sym__line] = STATE(56),
    [aux_sym_content_token1] = ACTIONS(3),
  },
  [2] = {
    [sym_params_block] = STATE(48),
    [sym_system_instruction] = STATE(49),
    [sym_message_sequence] = STATE(50),
    [sym_user_message] = STATE(27),
    [sym_content] = STATE(5),
    [sym_data_section] = STATE(5),
    [aux_sym_user_message_repeat1] = STATE(5),
    [aux_sym_content_repeat1] = STATE(17),
    [anon_sym_DASH_DASH_DASH] = ACTIONS(5),
    [anon_sym_GT] = ACTIONS(7),
    [aux_sym_content_token1] = ACTIONS(9),
    [aux_sym_data_section_token1] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(7), 1,
      anon_sym_GT,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(27), 1,
      sym_user_message,
    STATE(58), 1,
      sym_system_instruction,
    STATE(59), 1,
      sym_message_sequence,
    STATE(5), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [27] = 6,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(27), 1,
      sym_user_message,
    STATE(59), 1,
      sym_message_sequence,
    STATE(5), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [48] = 6,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(6), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [69] = 6,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      aux_sym_content_token1,
    ACTIONS(22), 1,
      aux_sym_data_section_token1,
    ACTIONS(25), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(6), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [90] = 6,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(6), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [111] = 6,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(27), 1,
      sym_user_message,
    STATE(55), 1,
      sym_message_sequence,
    STATE(5), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [132] = 6,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(43), 1,
      sym_user_message,
    STATE(5), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [153] = 6,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(43), 1,
      sym_user_message,
    STATE(5), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [174] = 5,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(32), 1,
      sym_assistant_message,
    STATE(7), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [192] = 5,
    ACTIONS(35), 1,
      aux_sym_content_token1,
    ACTIONS(37), 1,
      aux_sym_data_section_token1,
    STATE(19), 1,
      aux_sym_content_repeat1,
    STATE(46), 1,
      sym_assistant_message,
    STATE(16), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [210] = 5,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(43), 1,
      sym_user_message,
    STATE(5), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [228] = 5,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(11), 1,
      aux_sym_data_section_token1,
    STATE(17), 1,
      aux_sym_content_repeat1,
    STATE(30), 1,
      sym_assistant_message,
    STATE(7), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [246] = 5,
    ACTIONS(25), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(39), 1,
      aux_sym_content_token1,
    ACTIONS(42), 1,
      aux_sym_data_section_token1,
    STATE(19), 1,
      aux_sym_content_repeat1,
    STATE(15), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [264] = 5,
    ACTIONS(29), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(35), 1,
      aux_sym_content_token1,
    ACTIONS(37), 1,
      aux_sym_data_section_token1,
    STATE(19), 1,
      aux_sym_content_repeat1,
    STATE(15), 3,
      sym_content,
      sym_data_section,
      aux_sym_user_message_repeat1,
  [282] = 4,
    ACTIONS(9), 1,
      aux_sym_content_token1,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    STATE(18), 1,
      aux_sym_content_repeat1,
    ACTIONS(47), 2,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [296] = 4,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym_content_token1,
    STATE(18), 1,
      aux_sym_content_repeat1,
    ACTIONS(54), 2,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [310] = 3,
    ACTIONS(35), 1,
      aux_sym_content_token1,
    STATE(20), 1,
      aux_sym_content_repeat1,
    ACTIONS(47), 2,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [321] = 3,
    ACTIONS(56), 1,
      aux_sym_content_token1,
    STATE(20), 1,
      aux_sym_content_repeat1,
    ACTIONS(54), 2,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [332] = 4,
    ACTIONS(59), 1,
      ts_builtin_sym_end,
    ACTIONS(61), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(14), 1,
      sym_turn_delimiter,
    STATE(25), 1,
      aux_sym_message_sequence_repeat1,
  [345] = 2,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 3,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [354] = 3,
    ACTIONS(67), 1,
      aux_sym_content_token1,
    ACTIONS(69), 1,
      sym__newline,
    STATE(26), 2,
      sym__line,
      aux_sym__lines,
  [365] = 2,
    ACTIONS(71), 1,
      ts_builtin_sym_end,
    ACTIONS(73), 3,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [374] = 4,
    ACTIONS(75), 1,
      ts_builtin_sym_end,
    ACTIONS(77), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(12), 1,
      sym_turn_delimiter,
    STATE(25), 1,
      aux_sym_message_sequence_repeat1,
  [387] = 2,
    ACTIONS(80), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(26), 2,
      sym__line,
      aux_sym__lines,
  [396] = 4,
    ACTIONS(61), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(83), 1,
      ts_builtin_sym_end,
    STATE(11), 1,
      sym_turn_delimiter,
    STATE(21), 1,
      aux_sym_message_sequence_repeat1,
  [409] = 2,
    ACTIONS(85), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(23), 2,
      sym__line,
      aux_sym__lines,
  [418] = 2,
    ACTIONS(87), 1,
      ts_builtin_sym_end,
    ACTIONS(89), 3,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [427] = 3,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(10), 1,
      sym_turn_delimiter,
  [437] = 3,
    ACTIONS(93), 1,
      aux_sym_content_token1,
    ACTIONS(95), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(36), 1,
      aux_sym_content_repeat1,
  [447] = 3,
    ACTIONS(91), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(97), 1,
      ts_builtin_sym_end,
    STATE(9), 1,
      sym_turn_delimiter,
  [457] = 2,
    ACTIONS(99), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(101), 2,
      aux_sym_content_token1,
      sym__newline,
  [465] = 3,
    ACTIONS(93), 1,
      aux_sym_content_token1,
    ACTIONS(103), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(41), 1,
      aux_sym_content_repeat1,
  [475] = 1,
    ACTIONS(65), 3,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [481] = 3,
    ACTIONS(93), 1,
      aux_sym_content_token1,
    ACTIONS(105), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(39), 1,
      aux_sym_content_repeat1,
  [491] = 1,
    ACTIONS(73), 3,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [497] = 1,
    ACTIONS(89), 3,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [503] = 3,
    ACTIONS(54), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    ACTIONS(107), 1,
      aux_sym_content_token1,
    STATE(39), 1,
      aux_sym_content_repeat1,
  [513] = 2,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 2,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
  [521] = 3,
    ACTIONS(93), 1,
      aux_sym_content_token1,
    ACTIONS(114), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(39), 1,
      aux_sym_content_repeat1,
  [531] = 2,
    ACTIONS(116), 1,
      aux_sym_content_token1,
    STATE(57), 1,
      sym__line,
  [538] = 1,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [543] = 1,
    ACTIONS(112), 2,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
  [548] = 1,
    ACTIONS(65), 2,
      aux_sym_content_token1,
      anon_sym_GT_GT_GT_GT_GT_GT,
  [553] = 2,
    ACTIONS(61), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(13), 1,
      sym_turn_delimiter,
  [560] = 1,
    ACTIONS(120), 1,
      sym__newline,
  [564] = 1,
    ACTIONS(122), 1,
      sym__newline,
  [568] = 1,
    ACTIONS(124), 1,
      sym__newline,
  [572] = 1,
    ACTIONS(126), 1,
      ts_builtin_sym_end,
  [576] = 1,
    ACTIONS(128), 1,
      sym__newline,
  [580] = 1,
    ACTIONS(130), 1,
      ts_builtin_sym_end,
  [584] = 1,
    ACTIONS(132), 1,
      sym__newline,
  [588] = 1,
    ACTIONS(134), 1,
      sym__newline,
  [592] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [596] = 1,
    ACTIONS(138), 1,
      sym__newline,
  [600] = 1,
    ACTIONS(140), 1,
      sym__newline,
  [604] = 1,
    ACTIONS(142), 1,
      sym__newline,
  [608] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [612] = 1,
    ACTIONS(146), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 27,
  [SMALL_STATE(5)] = 48,
  [SMALL_STATE(6)] = 69,
  [SMALL_STATE(7)] = 90,
  [SMALL_STATE(8)] = 111,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 153,
  [SMALL_STATE(11)] = 174,
  [SMALL_STATE(12)] = 192,
  [SMALL_STATE(13)] = 210,
  [SMALL_STATE(14)] = 228,
  [SMALL_STATE(15)] = 246,
  [SMALL_STATE(16)] = 264,
  [SMALL_STATE(17)] = 282,
  [SMALL_STATE(18)] = 296,
  [SMALL_STATE(19)] = 310,
  [SMALL_STATE(20)] = 321,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 354,
  [SMALL_STATE(24)] = 365,
  [SMALL_STATE(25)] = 374,
  [SMALL_STATE(26)] = 387,
  [SMALL_STATE(27)] = 396,
  [SMALL_STATE(28)] = 409,
  [SMALL_STATE(29)] = 418,
  [SMALL_STATE(30)] = 427,
  [SMALL_STATE(31)] = 437,
  [SMALL_STATE(32)] = 447,
  [SMALL_STATE(33)] = 457,
  [SMALL_STATE(34)] = 465,
  [SMALL_STATE(35)] = 475,
  [SMALL_STATE(36)] = 481,
  [SMALL_STATE(37)] = 491,
  [SMALL_STATE(38)] = 497,
  [SMALL_STATE(39)] = 503,
  [SMALL_STATE(40)] = 513,
  [SMALL_STATE(41)] = 521,
  [SMALL_STATE(42)] = 531,
  [SMALL_STATE(43)] = 538,
  [SMALL_STATE(44)] = 543,
  [SMALL_STATE(45)] = 548,
  [SMALL_STATE(46)] = 553,
  [SMALL_STATE(47)] = 560,
  [SMALL_STATE(48)] = 564,
  [SMALL_STATE(49)] = 568,
  [SMALL_STATE(50)] = 572,
  [SMALL_STATE(51)] = 576,
  [SMALL_STATE(52)] = 580,
  [SMALL_STATE(53)] = 584,
  [SMALL_STATE(54)] = 588,
  [SMALL_STATE(55)] = 592,
  [SMALL_STATE(56)] = 596,
  [SMALL_STATE(57)] = 600,
  [SMALL_STATE(58)] = 604,
  [SMALL_STATE(59)] = 608,
  [SMALL_STATE(60)] = 612,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_message, 1, 0, 0),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_message, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_user_message_repeat1, 2, 0, 0),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_message_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_message_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [25] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_user_message_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assistant_message, 1, 0, 0),
  [29] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_assistant_message, 1, 0, 0),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 4, 0, 0),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 5, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_message_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_user_message_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(22),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_section, 3, 0, 1),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_section, 3, 0, 1),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(51),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2, 0, 0), SHIFT_REPEAT(26),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 1, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_section, 2, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_data_section, 2, 0, 0),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 1, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turn_delimiter, 2, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_turn_delimiter, 2, 0, 0),
  [114] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 4, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [130] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_block, 5, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chat_handler, 1, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_instruction, 2, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
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
