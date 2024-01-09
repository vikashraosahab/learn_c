#include <stdio.h>

int main (void) {
   int i,j,k,n;
   printf ("Enter number of rows : ");
   scanf ("%d",&n);

   // OUTER LOOP
    int a = 1;
   for (i = 1; i <= n; i++) {
    //int ch = 65
    for (j = 1; j <= n - i; j++) printf (" ");
    for (k = 65; k <= 65 + a - 1; k++) {
        printf ("%c",k);
        if (k == 'z') k == 65;
      //  ++ch; 
    }
    a += 2;
    printf ("\n");
   }
    return 0;
}