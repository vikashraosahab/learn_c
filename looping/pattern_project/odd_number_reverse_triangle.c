/*
********************** ODD NUMBER REVERSE TRIANGLE *********************
***********
13579
1357
135
13
1
***********
*/
#include <stdio.h>

int main (void) {
   int i,j,n,a;
   printf ("Enter number of rows : "); // OUTPUT STATEMENT
   scanf ("%d",&n); // INPUT STATEMENT

   // PRINTING REVERSE TRIANGLE NUMBER
   for (i = n; i >= 1; i--) {
    a = 1;
     for (j = 1; j <= i; j++) {
        printf ("%d",a);
        a += 2;
     }
     printf ("\n");
   }
    return 0;
}