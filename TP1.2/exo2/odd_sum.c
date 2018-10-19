#include <stdio.h>
#include <stdlib.h>
#include "isnum.h"

/*Affiche la somme des impairs plus petits ou égaux à une borne supérieure entière
 *
 *Parameters
 *----------
 *	int: borne supérieure entière
 *Return
 *-------
 *	int: 0 si le programme s'est correcterment exécuté, autre chose sinon
 */
int main(int argc, char *argv[]){
	if (argc > 1 && isnum(argv[1])){ //check s'il y a un paramètre entier
		int a = atoi(argv[1]);
		int result = 0;

		int i;
		for (i = 1; i <= a; i += 2) //incrémente par 2 pour n'avoir que des impairs
			result += i;

		printf("%d\n", result);
	}
	else
		printf("Need an integer as argument to work\n");

	return 0;
}
