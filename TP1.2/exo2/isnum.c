#include <ctype.h>
#include <string.h>
#include "isnum.h"

/*Vérifie si le paramètre est un nombre entier
 *
 *Parameters
 *-----------
 *      char string[]: une chaine de caractères
 *Return
 *--------
 *      int ok: 1 si le paramètre est un nombre entier, 0 sinon
 */
int isnum(char string[]){
	int ok = 1;
	int index = strlen(string)-1;//initialise l'index sur le dernier élément du string

	while (ok > 0 && index >= 0){
		if (!isdigit(string[index])) ok = 0;//sort de la boucle si un caractère n'est pas un entier
		index--;
	}

	return ok; 
}
