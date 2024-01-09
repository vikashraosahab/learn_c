/*
 ************** PRINT THE GIVEN PATTERN ************
 *******
 *******
 *******
 *******
 *********** N MEANS NUMBER OF ROWS ***********
 *********** M MENAS NUMBER OF COLUMNS ********
*/
#include <stdio.h>

int main (void) {
   int i,j,n,m;
   printf ("Enter number of rows : ");
   scanf ("%d",&n);
   printf ("Enter number of columns : ");
   scanf ("%d",&m);

   // PRINTING THE GIVEN PATTERN
   for (i = 1; i <= n; i++) { // OUTPUT LOOP
     for (j = 1; j <= m; j++) { // INNER LOOP
         printf ("* ");
     }
     printf ("\n");
   }
    return 0;
}