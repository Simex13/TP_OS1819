#include <string.h>
#include "reverse.h"

/*Inverse une chaine de caractères
 *
 *Parameters
 *----------
 *      char []: une chaine de caractère (pointeur)
 *
 *No return
 */
void reverse(char string[]){
        int len = strlen(string);
        int last_c = len-1;//initialise last_character sur le dernier élément du string
        char c_cpy;

        int i;
        for (i = 0; i < len/2; i++){//arrête de switcher les caractères à la moitié du string
                //inverse la position du caractère à l'index i avec le caractère à la position opposée
                c_cpy = string[last_c];
                string[last_c] = string[i];
                string[i] = c_cpy;
                last_c--;
        }
}

