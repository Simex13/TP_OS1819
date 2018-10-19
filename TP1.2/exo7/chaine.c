#include <stdio.h>
#include <string.h>
#include "chaine.h"
#include "reverse.h"

/*Affiche si une chaine de caractères est un palindrome ou non
 *
 *No parameter
 *
 *Return
 *-------
 *      int: 0 si le programme s'est correcterment exécuté, autre chose sinon
 */
int main(void){
        char a[255], b[255];

	//demande un input
        printf("Give me a word: ");
        scanf("%s", a);

	if (estPalindrome(a)) //vérifie si l'input est un palindrome
                printf("La chaine %s est un palindrome\n", a);
        else
                printf("La chaine %s N'est PAS un palindrome\n", a);

	return 0;
}

/*Calcule la longueur d'une chaine de caractères
 *
 *Parameters
 *----------
 *	char string[]: une chaine de caractères (pointeur)
 *Return
 *-------
 *	int: le nombre de caractères de string
 */
int longueur(char string[]){
	int counter = 0;

	while (string[counter++] != '\0');//incrémente le compteur jusqu'à la fin de le string

	return counter -1;//enlève 1 au compteur car il a aussi compté '\0'
}

/*Vérifie si une chaine de caractères est un palindrome ou non
 *
 *Parameters
 *----------
 *	char string[]: une chaine de caractères (pointeur)
 *Return
 *------
 *	int: 1 si string est un palindrome, 0 sinon
 */
int estPalindrome(char string[]){
	char cpy[strlen(string)];

	strcpy(cpy, string);
	reverse(cpy);//inverse le string

	if (strcmp(cpy, string) == 0)//compare le string et le string inversé
		return 1;
	else
		return 0;
}
