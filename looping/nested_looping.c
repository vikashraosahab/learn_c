#include <stdio.h>

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
  int i,j,sum;
   sum = 0;
   for (j = 2; j < 13; ++j) {
    i = 2;
    while (i < 100) {
      sum += i;
      i += j;
    }
    printf("Sum of the %d \n", sum);
   }
  return 0;
}