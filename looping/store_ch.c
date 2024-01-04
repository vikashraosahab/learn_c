#include <stdio.h>

int main (int argv , char *argc[]) {
    char ch;
    int count = 0;
    while ((ch = getchar()) != '*') {
        if (ch  == '*') count--;
       count++;
       
    }

    printf("%d",count);
    return 0;
}