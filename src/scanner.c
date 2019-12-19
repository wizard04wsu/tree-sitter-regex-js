#include <tree_sitter/parser.h>
#include <string.h>

enum TokenType {
	NULL_CHAR,
	HAS_GROUP_NAME,
	BEGIN_COUNT_QUANTIFIER,
};

void * tree_sitter_regex_external_scanner_create() { return NULL; }
void tree_sitter_regex_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_regex_external_scanner_serialize(void *payload, char *buffer) { return 0; }
void tree_sitter_regex_external_scanner_deserialize(void *payload, const char *buffer, unsigned length) {}

static void advance(TSLexer *lexer) {
	lexer->advance(lexer, false);
}

bool tree_sitter_regex_external_scanner_scan(
	void *payload,
	TSLexer *lexer,
	const bool *valid_symbols
) {
	if (lexer->lookahead == '\\') {
		if (valid_symbols[NULL_CHAR]) {
			int zeroCount;
			for (zeroCount=0; zeroCount<=3; zeroCount++) {
				advance(lexer);
				if (lexer->lookahead != '0') {
					break;
				}
			}
			lexer->mark_end(lexer);
			if (zeroCount == 0) {
				return false;
			}
			if (zeroCount < 3 && lexer->lookahead != 0 && strchr("1234567", lexer->lookahead) != NULL) {
				return false;
			}
			lexer->result_symbol = NULL_CHAR;
			return true;
		}
	}
	else if (valid_symbols[HAS_GROUP_NAME] && lexer->lookahead == '<') {
		lexer->mark_end(lexer);
		advance(lexer);
		if (lexer->lookahead == '>') {
			return false;	// <>
		}
		char word[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789$_";
		char hex[] = "0123456789abcdefABCDEF";
		while (lexer->lookahead != 0 && lexer->lookahead != '>') {
			if (strchr(word, lexer->lookahead) != NULL) {
				 advance(lexer);
			}
			else if (lexer->lookahead == '\\') {
				advance(lexer);
				if(lexer->lookahead != 'u') {
					return false;
				}
				for (int i=0; i<4; i++) {
					advance(lexer);
					if (lexer->lookahead == 0 || strchr(hex, lexer->lookahead) == NULL) {
						return false;
					}
				}
				advance(lexer);
			}
			else{
				return false;
			}
		}
		if(lexer->lookahead == '>') {
			lexer->result_symbol = HAS_GROUP_NAME;
			return true;
		}
	}
	else if (valid_symbols[BEGIN_COUNT_QUANTIFIER] && lexer->lookahead == '{') {
		advance(lexer);
		lexer->mark_end(lexer);
		char digits[] = "0123456789";
		if (lexer->lookahead == 0 || strchr(digits, lexer->lookahead) == NULL) {
			return false;
		}
		while (lexer->lookahead != 0 && strchr(digits, lexer->lookahead) != NULL) {
			advance(lexer);
		}
		if (lexer->lookahead == ',') {
			advance(lexer);
			while (lexer->lookahead != 0 && strchr(digits, lexer->lookahead) != NULL) {
				advance(lexer);
			}
		}
		if (lexer->lookahead == '}') {
			lexer->result_symbol = BEGIN_COUNT_QUANTIFIER;
			return true;
		}
	}
	
	return false;
}
