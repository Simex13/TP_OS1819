#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <stdbool.h>
#include "pgcd.h"
#include "isnum.h"

/*Affiche le PGCD de 2 entiers
 *
 *Parameters
 *----------
 *	optionnal int: le permier entier
 *	optionnal int: le second entier
 *Return
 *-------
 *	int: 0 si le programme s'est correcterment exécuté, autre chose sinon 
 */
int main(int argc, char* argv[]){
	int nb_1, nb_2;
	char input_1[255], input_2[255];
	bool ok = false;

	if (argc >= 3){//vérifie s'il y a des arguments
		if (!isnum(argv[1]) || !isnum(argv[2]))//vérifie que ce sont des entiers
			//fait demander de nouveaux entiers en laissant `ok` à false
			printf("Give 2 STRICTLY POSITIVE INTERGERS please\n");
		else{
			//cast les inputs en entiers
			nb_1 = atoi(argv[1]);
			nb_2 = atoi(argv[2]);
			ok = true;
		}
	}

	while (!ok){
		//demande des valeurs sur lesquelles travailler
		printf("Give me an integer: ");
		scanf("%s", input_1);
		printf("Give me another integer: ");
		scanf("%s", input_2);

		if (!isnum(input_1) || !isnum(input_2))//vérifie que ce sont des entiers
			printf("Give 2 STRICTLY POSITIVE INTERGERS please\n");
		else{
			ok = true;//sort du while

			//cast est inputs en entiers
			nb_1 = atoi(input_1);
			nb_2 = atoi(input_2);
		}
	}

	printf("Le PGCD de %d et %d est: %d\n", nb_1, nb_2, pgcd(nb_1, nb_2));

	return 0;
}

/*Calcule le PGCD de deux entiers
 *
 *Parameters
 *----------
 *	int a: Le premier entier
 *	int b: le second entier
 *Return
 *-------
 *	int pgcd: le plus grand commun diviseur de a et b
 */
int pgcd(int a, int b){
	//Détermine un minimum et un maximum.
	//Ceci permet d'effectuer moins d'opérations sur des grandes valeurs
        int min, max;

        if (a<b){
                min = a;
                max = b;}
        else{
                min = b;
                max = a;}

	//détermine le PGCD
        int pgcd = 1, i = 2;
        while (i <= min){
                if (min%i == 0 && max%i == 0)//trouve les diviseurs communs
                        pgcd = i;
                i++;

                if (i > min/2 && i < min) //permet de limiter le nombre d'opérations sur des grandes valeurs
                        i = min;
        }

        return pgcd;
}
