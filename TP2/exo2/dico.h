typedef struct dico DICO;
typedef struct definition DEF;

void create_word(DICO* word);

int add_head(DICO* head);
int add_tail(DICO* tail);
int add_index(DICO* tail, DICO* tail);

int del_head(DICO* head);
int del_tail(DICO* tail);
int del_index(DICO* head, DICO* tail);
int del_word(char []);

int find(DICO* head);

int copy(DICO* dico);

int display(DICO* dico);

int menu();

int sort(DICO* dico, int order);
