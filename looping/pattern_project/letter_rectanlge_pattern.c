/*
****************** LETTER RECTANGLE PATTERN ********************
ABCD
ABCD
ABCD
ABCD
*/
#include <stdio.h>

int main (void) {
   int i,j,n;
   printf ("Enter number of rows : ");
   scanf ("%d",&n);

   for (i = 1; i <= n; i++) {
     for (j = 65; j < 65 + n; j++) {
        printf ("%c",j);
     }
     printf ("\n");
   }

    return 0;
}