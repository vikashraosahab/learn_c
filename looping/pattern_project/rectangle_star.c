/*
 ************** PATTERN ****************
   *****
  ***** 
 *****
*/
#include <stdio.h>

int main (void) {
   int i,j,k,n;
   printf ("Enter number of rows : ");
   scanf ("%d",&n);

   for (i = 1; i <= n; i++) {
    for (j = 1; j <= n - i; j++) printf (" ");
    for (k = 1; k <=n; k++) printf ("*");
    printf ("\n");
   }
    return  0;
}