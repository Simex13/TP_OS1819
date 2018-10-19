#include <stdio.h>
#include <string.h>
#include "reverse.h"

/*Affiche si une chaine de caractères est un palindrome ou non
 *
 *No parameter
 *
 *Return
 *-------
 *	int: 0 si le programme s'est correcterment exécuté, autre chose sinon
 */
int main(int argc, char *argv[]){
	char input[255], reversed[255];

	printf("Give me a word: ");
	scanf("%s", input);

	strcpy(reversed, input);//fait une copie de l'input
	reverse(reversed);//inverse le string

	if (strcmp(input, reversed) == 0)//vérifie si les 2 strings sont identiques
		printf("La chaine %s est un palindrome\n", input);
	else
		printf("La chaine %s N'est PAS un palindrome\n", input);

	return 0;
}

/*Inverse une chaine de caractères
 *
 *Parameters
 *----------
 *	char string[]: une chaine de caractère (pointeur)
 *
 *No return
 */
void reverse(char string[]){
        int len = strlen(string);
        int last_c = len-1;//initialise last_character sur le dernier élément du string
        char c_cpy;

        int i;
        for (i = 0; i < len/2; i++){//arrête de switcher les caractères à la moitié du string
                //inverse la position du caractère à l'index i avec le caractère à la position opposée
                c_cpy = string[last_c];
                string[last_c] = string[i];
                string[i] = c_cpy;
                last_c--;
        }
}

