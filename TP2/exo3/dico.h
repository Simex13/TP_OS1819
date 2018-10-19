typedef struct dico DICO;
typedef struct definition DEF;

int add_head(char []);
int add_tail(char []);
int add_index(char []);

int del_head();
int del_tail();
int del_index(int);
int del_word(char []);

int find(char []);

int copy(DICO);

int display(DICO);

int menu();

int sort(DICO, int);
