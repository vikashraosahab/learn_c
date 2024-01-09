/*
********************** ODD NUMBER TRIANGLE ********************
1
13
135
1357
*/
#include <stdio.h>

int main (void) {
     int i,j,n,a;
     printf ("enter now of rows : "); // PROMPT OUTPUT STATEMENT
     scanf ("%d",&n); // PROMPT INPUT STATEMENT

     // PRINTING ODD NUMBER TRIANGLE 
     for (i = 1; i <= n; i++) {
       a = 1; // INITILIZE A BY 1
        for (j = 1; j <= i; j++) {
            printf ("%d ",a); // OUTPUT STATEMENT
            a += 2; // INCREMENT A BY 2
        }
        printf ("\n");
     }
    return 0;
}