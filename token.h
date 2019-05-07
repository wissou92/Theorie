#ifndef H_TOKEN_H
#define	H_TOKEN_H

struct token {
	int type;						//< Représentation du caractère par un entier (0: int 0 || 1: int 1 || 2: '.' || 3: '(' || 4: ')' || 5:'+' || 6: NON || 7: => || 8: <= || 9: <=>)
	struct token * suivant;			//< Pointeur sur le token suivant
};

typedef struct token liste_token;

// Transforme une chaîne de caractère en liste de token
//\param			string 				chaîne de caractère à transformer
//\return								la liste de token issue de la chaîne de caractère
liste_token string_to_token (char * string);

#endif
