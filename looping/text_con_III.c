#include <stdio.h>
#include <ctype.h>

void text_converter (char *ch, int count) {
   int tag = count ;
   count = 0; 
   while (count < tag) {
    putchar(toupper(ch[count]));
    count++;
   }
}

int main (int argc, char *argv[]) {
    char letter[50];
    int tag, count = 0;


    while ((letter[count] = getchar()) != '\n') {
        count++;
    }
    tag = count;
    text_converter(letter,tag);

    return 0;
}