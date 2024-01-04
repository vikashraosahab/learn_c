/*
******************* FIBONACCI SERIES *********************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
     // VARIABLE DECLARATIONS
     unsigned long long sum,val1,val2;
     int n;
     printf ("Enter n : "); // PROMPT OUTPUT STATEMENT
     scanf ("%d",&n); // INPUT STATEMENT

     // CHECK VALUE OF N 
     printf ("0 ");
     // VARIABLE INITILIZATION
     sum = 0;
     val1 = 0;
     val2 = 1;

     // CONTROL STATEMENT 
     for (int i = 0; i < n - 1; i++) {
        sum = val1 + val2;
        printf ("%llu ",sum);
        val1 = val2;
        val2 = sum;
     }
    return 0;
}