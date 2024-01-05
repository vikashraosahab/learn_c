#include <stdio.h>

// MAIN () FUNCTION
int main (void) {
   // VARIABLE DECLARATIONS
   int n,first_value,last_value;
   n = 100;
   first_value = 1;
   last_value = 199;

   // DIRECT MEHTOD
   int sum = n * (first_value + last_value) / 2;

   printf ("\n \n \n");
   sum = 0;
   // BY USING LOOP
   for (int i = 1; i <= n * 2; i += 2) {
     sum +=i;
   }
   printf ("SUM OF FIRST 100 ODD NUMBER ARE : %d ",sum);
    return 0;
}