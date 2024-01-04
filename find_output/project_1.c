/*
*********************** PROJECT - I ****************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE 
#include <stdio.h>

// HEADING OF THE MAIN() FUNCITON
int main (void) {
    int i = 0, x = 0;
    while (i < 20) {
         if (i % 5 == 0) {
            x += i;
         }
         ++i;
    }
    printf("VALUE OF THE %d",x);
    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}