/*
getchar() and putchar () stdio library function
******* getchar() is used to input single character from user keyboard *********
******* putchar() is used to display single character ***************
*/
#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char ch;
    
    while ((ch = getchar()) != EOF) {
        ch = getchar();
    }
    while ((ch = getchar()) != EOF) {
        putchar(toupper(ch));
    }
    return 0;
}