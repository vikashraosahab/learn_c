/*
***** CALCULATE SUM OF FIRST 100 ODD INTEGERS NUMBER *************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // VARIABLE DECLARATIONS
    int n = 0, count = 1, stop = 0;
    while (1) {
        ++stop;
        n += count;
        printf ("%d \n",count);
        count += 2;

        if (stop == 100) break;
    }

    printf ("SUM OF FIRST 100 ODD NUMBER %d\n",n);
    return 0; 
}