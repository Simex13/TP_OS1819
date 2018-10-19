#include <stdio.h>
#include <string.h>

/*Affiche la longueure d'une chaine de caractères
 *
 *Parameters
 *----------
 *	char []: une chaine de caractères
 *Return
 *-------
 *	int: 0 si le programme s'est correcterment exécuté, autre chose sinon
 */
int main(int argc, char *argv[]){
	if (argc > 1) //vérifie s'il y a un argument
		printf("%zd\n", strlen(argv[1])); //utilise la fct strlen pour avoir la longueur du string
	else
		printf("Need an argument to work\n");
	
	return 0;
}
