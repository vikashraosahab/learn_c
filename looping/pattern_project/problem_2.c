/*
 ******************* PATTHERN PRINT ***********
 1234
 1234
 1234
 1234
*/
#include <stdio.h>

int main (void) {
    int i,j,n,m;
    printf ("Enter number of rows : ");
    scanf ("%d",&n);
    printf ("Enter number of columns : ");
    scanf ("%d",&m);

    // PRINTING THE PATTERN 
    for (i = 1; i <= n; i++) { // OUTER LOOP
      for (j = 1; j <= m; j++) {
        printf ("%d",j);
      }
      printf ("\n"); // ENTER EVERY FIRST STEP OF OUTER LOOP
    }
    return 0;
}