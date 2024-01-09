#include <stdio.h>

int main (void) {
   int i,j,n,m;
   printf ("Enter number of line : ");
   scanf ("%d",&n);

   for (i = n; i >= 0; i--) {
    for (j = 0; j <= i; j++) {
        printf ("* ");
    }
     printf ("\n");
   }
    return 0;
}