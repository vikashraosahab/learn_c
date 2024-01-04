/*
********* FIBONACCI SERIES **************
********* USING FUNCTION RECURSION METHOD *********
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// FUNCTION PROTOTYPE
// RECURISON VALUE RETURN BY RECURISON FUNCTION METHOD 
unsigned long long fab_series (int val) {
    // VARIABLE DECLARATION 
    unsigned  long long result;

    // SET RECURSION BASE CASE 
   if (val < 0) return 1;

   if (val == 0) {
    // RETURN RESULT 0 WHEN VAL BECOME 0
       result = 0;
   } 
   else {
    // RETURN FABONACCI SERIES RECURSION METHOD
    result = fab_series (val - 1) + fab_series (val - 2);
   }

   return result;
}

// HEADING OF THE MAIN () FUNCTIONN
int main (void) {
    // VARIABLE DECLARATION
    int n;
    printf ("Enter n : "); // PROMPT STATEMENT
    scanf ("%d",&n); // INPUT STATEMENT

    // START LOOP O TO N
    for (int i = 0; i < n; i++)
        // RESULT OUTPUT SATEMENT
         printf ("%llu ",fab_series(i));
    // PROGRAM SUCCESSFULLY EXECUTE
    return 0;
}