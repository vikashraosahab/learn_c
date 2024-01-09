/*
   A
  AB
 ABC
ABCD
*/
#include <stdio.h>

int main (void) {
   int i,j,k,n;
   printf ("Enter number of rows : ");
   scanf ("%d",&n);
   for (i = 1; i <= n; i++) {
     int a = 65;
     for (j = 1; j <= n - i; j++) printf (" ");
     for (k = 1; k <= i; k++) {
        printf ("%c",a);
        a +=1;
     }
     printf ("\n");
   }
    return 0;
}