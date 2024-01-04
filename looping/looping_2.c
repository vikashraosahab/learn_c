/*
******** PREPROCESSOR DIRECTIVE HEADER FILE ************
*/
#include <stdio.h>

// HEADING OF THE  MAIN() FUNCTION OF THE PROGRAM
int main (void) {
   int i, sum;
   sum = 0;
   for (i = 2; i < 100; i += 3) {
      sum += i;
   }
   printf("Answer, Sum is = %d\n", sum);
   (sum % 5) == 0 ? printf("Even") : printf("Odd");
   
   printf("\n");

   if ((sum % 5) == 0) printf ("Number is EVEN");
   else printf("Number is ODD");
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}