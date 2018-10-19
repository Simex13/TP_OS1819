#include <stdio.h>
#include <string.h>
#include "dico.h"

struct dico {
	char word[50];
	DEF* def;

	DICO* next;
};

struct definition {
	char def[255];

	DEF* next;
};

int main(void){

}

int add_head(char word[]){
}

int add_tail(char word[]){
}

int add_index(char word[]){
}

int del_head(){
}

int del_tail(){
}

int del_index(int index){
}

int del_word(char word[]){
}

int find(char word[]){
}

int copy(DICO dico){
}

int display(DICO dico){
}

int menu(){
}

int sort(DICO dico, int order){
}

void get_word(char word[]){
	printf("Give me the word: ");
	scanf("%s", word);
}
