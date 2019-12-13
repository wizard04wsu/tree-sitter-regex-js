#include <tree_sitter/parser.h>
#include <string.h>

enum TokenType {
	NULL_CHAR,
	HAS_BACKREFERENCE_NAME,
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
			if (zeroCount < 3) {
				int nextCharCode = (int)(lexer->lookahead);
				if (nextCharCode>=49 && nextCharCode<=55) {	//1-7
					return false;
				}
			}
			lexer->result_symbol = NULL_CHAR;
			return true;
		}
	}
	else if(valid_symbols[HAS_BACKREFERENCE_NAME] && lexer->lookahead == '<') {
		lexer->mark_end(lexer);
		advance(lexer);
		if (lexer->lookahead == '>') {
			return false;	// <>
		}
		int nextCharCode;
		while (lexer->lookahead != '>' && lexer->get_column(lexer) > 0) {
			nextCharCode = (int)(lexer->lookahead);
			if ((nextCharCode>=48 && nextCharCode<=57)	// 0-9
			 || (nextCharCode>=65 && nextCharCode<=90)	// A-Z
			 || (nextCharCode>=97 && nextCharCode<=122)	// a-z
			 || nextCharCode==36						// $
			 || nextCharCode==95) {						// _
				 advance(lexer);
			}
			else if ((int)lexer->lookahead == 92) {		// backslash
				advance(lexer);
				if((int)lexer->lookahead != 117) {		//not u
					return false;
				}
				for (int i=0; i<4; i++) {
					advance(lexer);
					nextCharCode = (int)(lexer->lookahead);
					if (!((nextCharCode>=48 && nextCharCode<=57)	// 0-9
					   || (nextCharCode>=65 && nextCharCode<=70)	// A-F
					   || (nextCharCode>=97 && nextCharCode<=102)))	// a-f
					{
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
			lexer->result_symbol = HAS_BACKREFERENCE_NAME;
			return true;
		}
	}
	
	return false;
}
