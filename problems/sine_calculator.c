/*
****************** SINE CALCULATOR *************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <math.h>

// MACROS SYMBOLIC CONSTANT
#define TRUE 1
#define FALSE 0

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
   // VARIABLE DECLARATIONS
   int n,count,stop,flag,power;
   double sine,x;
   // VARIABLE INITILIZING
   flag = TRUE;
   count = 0;
   stop = 1;
   power = 1;
   
   printf ("Enter n : "); // OUTPUT STATEMENT
   scanf ("%d",&n); // INPUT STATEMENT

   while (flag) {
    ++count;
     printf ("Enter x : ");
     scanf ("%lf",&x);
     
     sine += (count % 2 == 1) ? pow(x,power) / (power *= power) : - pow(x,power) / (power *= power);

    if (stop == n) flag = FALSE;
    ++stop;
     power += 2;
   }

   // DESIRED OUTPUT STATEMENT
   printf ("SINE OF X IN N NUMBER SERIES ARE : %lf",sin(sine));
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}