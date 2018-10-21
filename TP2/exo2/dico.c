#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dico_manager.h"

struct dictionary{
    char name[50];
    int lenght;
    WORD* head;
    WORD* tail;
    DICO* next;
};
struct word{
    char word[50];
    DEF* def;
    WORD* next;
};
struct definition{
    char partition[255];
    DEF* next;
};

int main(int argc, char* argv[]){
    int input;
    DICO* dictionary;
    dictionary = (DICO*)malloc(sizeof(DICO));

    dictionary->lenght = 0;
    dictionary->head = NULL;
    dictionary->tail = NULL;
    dictionary->next = NULL;

    printf("Hello, welcome to your dictionary manager!\n");
    while (input = display_menu()){
        switch (input){
            case 1: create_dico(dictionary);
                break;
            case 2: select_dico(dictionary);
                break;
            case 3: create_word(dictionary);
                break;
            case 4:
                break;
            default: return EXIT_FAILURE;
        }
    }

    printf("Thanks for using our dictionary manager!\nNow all your dictionaries will be suppressed\n");

    return del_all(dictionary);
}

int display_menu(){return 0;}
void select_dico(DICO* dic){}
int del_all(DICO* dic){
    DICO* tmp;
    int result = 0;

    do {
        tmp = dic->next;
        result = del_all_w(dic);
        free(dic);
        dic = tmp;
    } while (dic != NULL && !result);

    if (result != 0) return EXIT_FAILURE;

    return 0;
}
int del_all_w(DICO* dic){
    while (!isempty(dic))
        del_head(dic);

    return 0;
}
int del_def(DEF* def){}
void create_dico(DICO* dic){}
void create_word(DICO* dic){}
void create_def(WORD* word){}
int isempty(DICO* dic){return 1;}
void del_head(DICO* dic){}
