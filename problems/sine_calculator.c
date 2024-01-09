/*
****************** SINE CALCULATOR *************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <math.h>

// MACROS SYMBOLIC CONSTANT
#define TRUE 1
#define FALSE 0

// FUNCTION PROTOTYPE
int fac_fun (int val) {
    if (val == 0) {
        return 1;  // MEANS VALUE NOT LESS 1
    }
    else {
        return val * fac_fun (val - 1);
    }
}

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
   // VARIABLE DECLARATIONS
   int n,count,stop,flag,power;
   double sine,term,x;
   // VARIABLE INITILIZING
   flag = TRUE;
   sine = 0.0;
   count = 0;
   
   printf ("Enter n : "); // OUTPUT STATEMENT
   scanf ("%d",&n); // INPUT STATEMENT

   while (flag) {

    // INCREMENT COUNT BY 1
     printf ("Enter x : "); // PROMPT OUTPUT STATEMENT
     scanf ("%lf",&x); // PROMPT INPUT STATEMENT
     power = 2 * count + 1;
     term = pow (-1, count) * pow (x,power) / fac_fun (power);
     sine += term;
     // CHECK THAT COUNT IS EQUAL TO N VALUE OR NOT
    if (count == n - 1) flag = FALSE;
    ++count;
   }

   // DESIRED OUTPUT STATEMENT
   printf ("SINE OF X IN N NUMBER SERIES ARE : %.4lf",sin(sine));
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}