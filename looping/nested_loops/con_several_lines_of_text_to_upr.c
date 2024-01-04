/* CONVERTING SEVERAL LINES OF TEXT TO UPPERCASE */

#include <stdio.h>
#include <ctype.h>

int main (int argv, char *argc) {
    char letter[20];
    int count;
    printf("enter letters : ");

    while ((letter[0] = getchar()) != '*') {
        for (int i = 1; (letter[i] = getchar()) != '\n'; ++i) {
          count = i;
        }
        for (int j = 0; j <= count; j++) {
            putchar(toupper(letter[j]));
        }
    }
    return 0;
}