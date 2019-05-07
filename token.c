#include "token.h"
#include <stdio.h>

liste_token string_to_token (char * string) {
	liste_token token_l, token_tmp;
	int i = 0;
	
	while (string [i] != '\0') {
		
		if (string [i] == ' ') {
			
		}
		else if (string [i] == '0') {
			token_tmp .type = 0;
		}
		else if (string [i] == '1') {
			token_tmp .type = 1;
		}
		else if (string [i] == '.') {
			token_tmp .type = 2;
		}
		else if (string [i] == '(') {
			token_tmp .type = 3;
		}
		else if (string [i] == ')') {
			token_tmp .type = 4;
		}
		else if (string [i] == '+') {
			token_tmp .type = 5;
		}		
		else if (string [i] == 'N' && string [i + 1] == 'O' && string [i + 2] == 'N') {
			token_tmp .type = 6;
			i += 2;
		}
		else if (string [i] == '=' && string [i + 1] == '>') {
			token_tmp .type = 7;
			++i;
		}	
		else if (string [i] == '<' && string [i + 1] == '=' && string [i + 2] == '>') {
			token_tmp .type = 9;
			i += 2;
		}
		else if (string [i] == '<' && string [i + 1] == '=') {
			token_tmp .type = 8;
			++i;
		}
		token_l = token_tmp;
		token_tmp = token_l .suivant;
		++i;
	}
	
	return token_l;	
}
