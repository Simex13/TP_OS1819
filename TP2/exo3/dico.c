#include <stdio.h>
#include <string.h>
#include "dico.h"

struct dico {
	char word[50];
	DEF* def;

	DICO* next;
	DICO* previous;
};

struct definition {
	char def[255];

	DEF* next;
};

int main(void){
	DICO* dico;
	int input = -1;

	dico = (DICO*) malloc(sizeof(DICO));

	printf("Hello! Welcome to your dictionnaries manager\n");

	while (input)
		menu();

	printf("Goodbye\n");

	return 0;
}

void create_word(DICO* word){
	int c, index = 0;
	DEF* def;

	word->def = def;

	printf("Write the word to add (no more than 50 characters): ");
	scanf("%s", (*word).word); //demande le mot à créer

	printf("Write the definition of the word (only one paragraph): ");

	def = (DEF*) malloc(sizeof(DEF)); //alloue la mémoire
	def->next = NULL;

	while((c = getchar()) != '\n'){
		/*vérifie s'il reste de la place dans le string et crée une seconde
		 structure de donnée definition au besoin */
		if (index == 254){
			DEF* next;
			next = (DEF*) malloc(sizeof(DEF));

			next->next = NULL;
			def->next = next;

			def = next;
			index = 0;
		{

		(*def).def[index++] = c; //insère les caractère dans le string et passe à l'index suivant
	}
}

int add_head(DICO* head){
}

int add_tail(DICO* tail){
}

int add_index(DICO* head, DICO* tail){
}

int del_head(DICO* head){
}

int del_tail(DICO* tail){
}

int del_index(DICO* head, DICO* tail){
}

int del_word(DICO* head){
}

int find(DICO* head){
}

int copy(DICO* dico){
}

int display(DICO* dico){
}

int menu(){
}

int sort(DICO* dico, int order){
}
