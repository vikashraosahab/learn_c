/*
********************** PROJECT 2 *********************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN() FUNCTION 
int main (void)
{
    int i = 0, x = 0;
     
     do {
        if (i % 5 == 0) {
            x++;
        }
        ++i;
     }
     while (i < 20);

     printf("\nx = %d",x);
    return 0;
}
