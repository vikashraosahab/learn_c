#include <stdio.h>

int main (int argv, char *argc[]) {
    char text[] = "Hello world";
    
    // for loop
    for (int i = 0; i < sizeof(text) - 1; i++) {
        printf("%d : %c \t",text[i],text[i]);
    }

    // DO WHILE LOOP
    printf("\n");
    int i = 0;
    do {
      printf("%d : %c \t",text[i],text[i]);
      i++;
    }
    while (i < sizeof(text) - 1);

    // WHILE LOOP 
    i = 0;
    printf("\n");
    while (i < sizeof(text) - 1) {
      printf("%d : %c \t",text[i],text[i]);
      i++;
       if (i > sizeof (text) - 1) break;
    }
    return 0;
}