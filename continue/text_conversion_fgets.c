/* CONVERSION TEXT */

#include <stdio.h>
#include <ctype.h>

// DEFINE MACROS
#define MAX_LENGTH 100
#define EOL '\n'
int main (void) {
    int count, tag;
    char letter[MAX_LENGTH];

    while ((letter[0] = getchar()) != '*') {
         for (count = 1; (letter[count] = getchar()) != EOL; ++count);
         
         // REMOVE NULL OPERATOR;
         // printf("%d",count);
         tag = 0;
         while (tag <= count) {
            putchar(toupper(letter[tag]));
            tag++;
         }

         tag = 0; 
         while (tag <= count) {
            ++tag;
            if (letter[tag - 1] == '$' && letter[tag] == '$') {
                printf("Break statement ..... \n");
                goto end;
            }
         }
    }

     end : printf("program is ended okay !\n");

    return 0;
}