#include <stdio.h>
#include <ctype.h>

#define eof '\n'

int main (int argc, char *argv[]) {
    char letter[40];
    int tag,count = 0;

    while ((letter[count] = getchar()) != eof) {
        count++;
    }
    tag = count;

    count = 0;

    while (count < tag) {
        printf("%c",toupper(letter[count]));
        ++count;
    }
    return 0;
}