typedef struct dictionary DICO;
typedef struct word WORD;
typedef struct definition DEF;

int display_menu();
void select_dico(DICO*);
int del_all(DICO*);
int del_all_w(DICO*);
int del_def(DEF*);
void create_dico(DICO*);
void create_word(DICO*);
void create_def(WORD*);
int isempty(DICO*);
void del_head(DICO*);
