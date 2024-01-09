/*
**************** DIAMOND VERSION 2 ********************
  A
 ABA
ABCBA
*/
#include <stdio.h>

int main (void) {
    int i,j,k,l,n;
    printf ("enter number of rows : ");
    scanf ("%d",&n);

    // OUTER LOOP
    for (i = 1; i <= n; i++) {
        int ch = 65;
        for (j = 1; j <= n - i; j++) printf ("#");
        for (k = 1; k <= i; k++) {
            printf ("%c",ch);
            ch++;
        }
        for (l = 1; l <= i - 1; l++) {
            printf ("*");
            //c--;
        }
        //c = 65 + i;
        printf ("\n");
    }
    return 0;
}