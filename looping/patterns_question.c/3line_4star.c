/*
 ****
 ****
 ****

 ********** Number of lines are n *************************
 ********** Number of star in each lines are m ************
*/
#include <stdio.h>

int main (void)
{
   int i,j,n,m;
   printf ("Enter number of line : ");
   scanf ("%d",&n);
   printf ("Enter number of star in each lines : ");
   scanf ("%d",&m);
   
   for (i = 0; i < n; i++) {
     for (j = 0; j < m; j++) {
        printf ("* ");
     }
     printf ("\n");
   }
    return 0;
}