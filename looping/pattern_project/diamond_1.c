/*
   1
  121
 12321
1234321
*/
#include <stdio.h>

int main (void) {
    int i,j,k,l,n;
    printf ("Enter number of rows : ");
    scanf ("%d",&n);
     int a = 1;
    for (i = 1; i <= n; i++) { 
       for (j = 1; j <= n - i; j++) printf (" ");
       for (k = 1; k <= i; k++) printf ("%d",k);
       for (l = 1; l <= i - 1; l++) {
         printf ("%d",a);
        a--;
       }
       a = i;
       printf ("\n");
    }
    return 0;
}