#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 22
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
  aux_sym_content_repeat1 = 21,
  alias_sym_data_section_body = 22,
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
  [14] = 7,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 19,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 19,
  [30] = 30,
  [31] = 22,
  [32] = 18,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 33,
  [37] = 37,
  [38] = 38,
  [39] = 25,
  [40] = 40,
  [41] = 33,
  [42] = 25,
  [43] = 43,
  [44] = 44,
  [45] = 45,
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
  [58] = 48,
  [59] = 48,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') SKIP(0);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(27);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3);
      if (lookahead == '<') ADVANCE(37);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4);
      if (lookahead == '>') ADVANCE(44);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(58);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(5);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 7:
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '-') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '=') ADVANCE(61);
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
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '=') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '\n') SKIP(15);
      if (lookahead == '=') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '=') ADVANCE(12);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DASH_DASH_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead == ' ') ADVANCE(52);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(53);
      if (lookahead != 0) ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '=') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\n') ADVANCE(60);
      if (lookahead == '-') ADVANCE(31);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0) ADVANCE(51);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(31);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '>') ADVANCE(27);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '-') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(37);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(32);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(34);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '<') ADVANCE(36);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(43);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(38);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(40);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(41);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '=') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(46);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(47);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '>') ADVANCE(44);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(49);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead == '\t' ||
          (0x0b <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_content_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_data_section_token1);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_GT_GT_GT_GT_GT_GT);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(55);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(22);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(56);
      if (lookahead == '=') ADVANCE(43);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(23);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(57);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(24);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(58);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(59);
      if (lookahead == '>') ADVANCE(28);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(25);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym__newline);
      if (lookahead == '\n') ADVANCE(60);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(26);
      END_STATE();
    case 61:
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
  [3] = {.lex_state = 6},
  [4] = {.lex_state = 13},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 3},
  [7] = {.lex_state = 13},
  [8] = {.lex_state = 3},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 16},
  [16] = {.lex_state = 16},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 15},
  [19] = {.lex_state = 15},
  [20] = {.lex_state = 14},
  [21] = {.lex_state = 16},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 15},
  [24] = {.lex_state = 4},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 16},
  [28] = {.lex_state = 4},
  [29] = {.lex_state = 4},
  [30] = {.lex_state = 16},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 14},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 16},
  [38] = {.lex_state = 16},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 14},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 1},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 5},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 5},
  [59] = {.lex_state = 5},
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
    [sym_document] = STATE(44),
    [sym_chat_handler] = STATE(46),
    [sym__line] = STATE(47),
    [aux_sym_content_token1] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(7), 1,
      anon_sym_GT,
    STATE(21), 1,
      sym_user_message,
    STATE(45), 1,
      sym_system_instruction,
    STATE(50), 1,
      sym_message_sequence,
    STATE(52), 1,
      sym_params_block,
    ACTIONS(9), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(4), 2,
      sym__line,
      aux_sym__lines,
  [27] = 6,
    ACTIONS(7), 1,
      anon_sym_GT,
    STATE(21), 1,
      sym_user_message,
    STATE(51), 1,
      sym_system_instruction,
    STATE(53), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(4), 2,
      sym__line,
      aux_sym__lines,
  [48] = 4,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(13), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(7), 2,
      sym__line,
      aux_sym__lines,
  [63] = 4,
    STATE(21), 1,
      sym_user_message,
    STATE(53), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(4), 2,
      sym__line,
      aux_sym__lines,
  [78] = 6,
    ACTIONS(17), 1,
      aux_sym_content_token1,
    ACTIONS(19), 1,
      aux_sym_data_section_token1,
    STATE(18), 1,
      aux_sym_content_repeat1,
    STATE(22), 1,
      sym_data_section,
    STATE(27), 1,
      sym_assistant_message,
    STATE(35), 1,
      sym_content,
  [97] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(26), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(23), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(7), 2,
      sym__line,
      aux_sym__lines,
  [112] = 6,
    ACTIONS(17), 1,
      aux_sym_content_token1,
    ACTIONS(19), 1,
      aux_sym_data_section_token1,
    STATE(18), 1,
      aux_sym_content_repeat1,
    STATE(22), 1,
      sym_data_section,
    STATE(30), 1,
      sym_assistant_message,
    STATE(35), 1,
      sym_content,
  [131] = 4,
    STATE(21), 1,
      sym_user_message,
    STATE(56), 1,
      sym_message_sequence,
    ACTIONS(9), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(4), 2,
      sym__line,
      aux_sym__lines,
  [146] = 4,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_user_message,
    ACTIONS(9), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(4), 2,
      sym__line,
      aux_sym__lines,
  [161] = 6,
    ACTIONS(19), 1,
      aux_sym_data_section_token1,
    ACTIONS(30), 1,
      aux_sym_content_token1,
    STATE(31), 1,
      sym_data_section,
    STATE(32), 1,
      aux_sym_content_repeat1,
    STATE(35), 1,
      sym_content,
    STATE(40), 1,
      sym_assistant_message,
  [180] = 4,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    STATE(38), 1,
      sym_user_message,
    ACTIONS(9), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(4), 2,
      sym__line,
      aux_sym__lines,
  [195] = 3,
    STATE(38), 1,
      sym_user_message,
    ACTIONS(9), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(4), 2,
      sym__line,
      aux_sym__lines,
  [207] = 2,
    ACTIONS(34), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(14), 2,
      sym__line,
      aux_sym__lines,
  [216] = 4,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
    ACTIONS(39), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(11), 1,
      sym_turn_delimiter,
    STATE(15), 1,
      aux_sym_message_sequence_repeat1,
  [229] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(8), 1,
      sym_turn_delimiter,
    STATE(15), 1,
      aux_sym_message_sequence_repeat1,
  [242] = 3,
    ACTIONS(46), 1,
      aux_sym_content_token1,
    ACTIONS(48), 1,
      sym__newline,
    STATE(14), 2,
      sym__line,
      aux_sym__lines,
  [253] = 4,
    ACTIONS(17), 1,
      aux_sym_content_token1,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(19), 1,
      aux_sym_content_repeat1,
  [266] = 4,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(56), 1,
      aux_sym_content_token1,
    ACTIONS(59), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(19), 1,
      aux_sym_content_repeat1,
  [279] = 2,
    ACTIONS(61), 2,
      aux_sym_content_token1,
      sym__newline,
    STATE(17), 2,
      sym__line,
      aux_sym__lines,
  [288] = 4,
    ACTIONS(44), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_turn_delimiter,
    STATE(16), 1,
      aux_sym_message_sequence_repeat1,
  [301] = 3,
    ACTIONS(65), 1,
      aux_sym_content_token1,
    STATE(18), 1,
      aux_sym_content_repeat1,
    STATE(37), 1,
      sym_content,
  [311] = 3,
    ACTIONS(59), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    ACTIONS(67), 1,
      aux_sym_content_token1,
    STATE(23), 1,
      aux_sym_content_repeat1,
  [321] = 3,
    ACTIONS(70), 1,
      aux_sym_content_token1,
    ACTIONS(72), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(28), 1,
      aux_sym_content_repeat1,
  [331] = 2,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 2,
      aux_sym_content_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [339] = 2,
    ACTIONS(78), 1,
      anon_sym_DASH_DASH_DASH,
    ACTIONS(80), 2,
      aux_sym_content_token1,
      sym__newline,
  [347] = 3,
    ACTIONS(82), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(10), 1,
      sym_turn_delimiter,
  [357] = 3,
    ACTIONS(70), 1,
      aux_sym_content_token1,
    ACTIONS(86), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    STATE(29), 1,
      aux_sym_content_repeat1,
  [367] = 3,
    ACTIONS(59), 1,
      anon_sym_GT_GT_GT_GT_GT_GT,
    ACTIONS(88), 1,
      aux_sym_content_token1,
    STATE(29), 1,
      aux_sym_content_repeat1,
  [377] = 3,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
    ACTIONS(84), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(12), 1,
      sym_turn_delimiter,
  [387] = 3,
    ACTIONS(91), 1,
      aux_sym_content_token1,
    STATE(32), 1,
      aux_sym_content_repeat1,
    STATE(37), 1,
      sym_content,
  [397] = 3,
    ACTIONS(30), 1,
      aux_sym_content_token1,
    ACTIONS(52), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(23), 1,
      aux_sym_content_repeat1,
  [407] = 2,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 2,
      aux_sym_content_token1,
      sym__newline,
  [415] = 2,
    ACTIONS(97), 1,
      aux_sym_content_token1,
    STATE(49), 1,
      sym__line,
  [422] = 1,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [427] = 1,
    ACTIONS(95), 2,
      aux_sym_content_token1,
      aux_sym_data_section_token1,
  [432] = 1,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [437] = 1,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [442] = 1,
    ACTIONS(76), 2,
      aux_sym_content_token1,
      anon_sym_GT_GT_GT_GT_GT_GT,
  [447] = 2,
    ACTIONS(105), 1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
    STATE(13), 1,
      sym_turn_delimiter,
  [454] = 1,
    ACTIONS(95), 2,
      aux_sym_content_token1,
      sym__newline,
  [459] = 1,
    ACTIONS(76), 2,
      aux_sym_content_token1,
      anon_sym_EQ_EQ_EQ_EQ_EQ_EQ,
  [464] = 1,
    ACTIONS(107), 1,
      aux_sym_content_token1,
  [468] = 1,
    ACTIONS(109), 1,
      ts_builtin_sym_end,
  [472] = 1,
    ACTIONS(111), 1,
      sym__newline,
  [476] = 1,
    ACTIONS(113), 1,
      sym__newline,
  [480] = 1,
    ACTIONS(115), 1,
      sym__newline,
  [484] = 1,
    ACTIONS(117), 1,
      sym__newline,
  [488] = 1,
    ACTIONS(119), 1,
      sym__newline,
  [492] = 1,
    ACTIONS(121), 1,
      ts_builtin_sym_end,
  [496] = 1,
    ACTIONS(123), 1,
      sym__newline,
  [500] = 1,
    ACTIONS(125), 1,
      sym__newline,
  [504] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [508] = 1,
    ACTIONS(129), 1,
      sym__newline,
  [512] = 1,
    ACTIONS(131), 1,
      sym__newline,
  [516] = 1,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
  [520] = 1,
    ACTIONS(135), 1,
      aux_sym_content_token1,
  [524] = 1,
    ACTIONS(137), 1,
      sym__newline,
  [528] = 1,
    ACTIONS(139), 1,
      sym__newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 78,
  [SMALL_STATE(7)] = 97,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 131,
  [SMALL_STATE(10)] = 146,
  [SMALL_STATE(11)] = 161,
  [SMALL_STATE(12)] = 180,
  [SMALL_STATE(13)] = 195,
  [SMALL_STATE(14)] = 207,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 229,
  [SMALL_STATE(17)] = 242,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 279,
  [SMALL_STATE(21)] = 288,
  [SMALL_STATE(22)] = 301,
  [SMALL_STATE(23)] = 311,
  [SMALL_STATE(24)] = 321,
  [SMALL_STATE(25)] = 331,
  [SMALL_STATE(26)] = 339,
  [SMALL_STATE(27)] = 347,
  [SMALL_STATE(28)] = 357,
  [SMALL_STATE(29)] = 367,
  [SMALL_STATE(30)] = 377,
  [SMALL_STATE(31)] = 387,
  [SMALL_STATE(32)] = 397,
  [SMALL_STATE(33)] = 407,
  [SMALL_STATE(34)] = 415,
  [SMALL_STATE(35)] = 422,
  [SMALL_STATE(36)] = 427,
  [SMALL_STATE(37)] = 432,
  [SMALL_STATE(38)] = 437,
  [SMALL_STATE(39)] = 442,
  [SMALL_STATE(40)] = 447,
  [SMALL_STATE(41)] = 454,
  [SMALL_STATE(42)] = 459,
  [SMALL_STATE(43)] = 464,
  [SMALL_STATE(44)] = 468,
  [SMALL_STATE(45)] = 472,
  [SMALL_STATE(46)] = 476,
  [SMALL_STATE(47)] = 480,
  [SMALL_STATE(48)] = 484,
  [SMALL_STATE(49)] = 488,
  [SMALL_STATE(50)] = 492,
  [SMALL_STATE(51)] = 496,
  [SMALL_STATE(52)] = 500,
  [SMALL_STATE(53)] = 504,
  [SMALL_STATE(54)] = 508,
  [SMALL_STATE(55)] = 512,
  [SMALL_STATE(56)] = 516,
  [SMALL_STATE(57)] = 520,
  [SMALL_STATE(58)] = 524,
  [SMALL_STATE(59)] = 528,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_message, 1, 0, 0),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_message, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__lines, 2, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2, 0, 0), SHIFT_REPEAT(7),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 2, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 4, 0, 0),
  [30] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 5, 0, 0),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__lines, 2, 0, 0), SHIFT_REPEAT(14),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2, 0, 0),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [46] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_content, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_content, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(25),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(42),
  [70] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_content_repeat1, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__lines, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_message_sequence, 3, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_content_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_turn_delimiter, 2, 0, 0),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_turn_delimiter, 2, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assistant_message, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_assistant_message, 2, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_message_sequence_repeat1, 4, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_section, 2, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chat_handler, 1, 0, 0),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_system_instruction, 2, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 3, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 5, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_params_block, 5, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 7, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_data_section, 3, 0, 1),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
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
