/*
****************** ADDITION SIGN IN C *****************
  *
  * 
*****
  *
  * 

********** N IS ODD NUMBER ************************
*/
#include <stdio.h>

int main (void) {
    int i,j,n,m;
    again: printf ("Enter number of rows in odd number and (n must be greater than 2) n : ");
    scanf ("%d",&n);
    if (n % 2 == 0 && n >= 3) {
       printf ("Enter n in odd number system....\n");
       printf ("Re-enter your n again : \n");
       goto again;
    }
   again2: printf ("Enter number of columns : ");
    scanf ("%d",&m);
    if (m % 2 == 0) {
     printf ("Enter m in odd number system....\n");
     printf ("Re-enter your m again : \n");
     goto again2;
    }

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= m; j++) {
            if (i == n / 2 + 1|| j == m / 2 + 1) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    return 0;
}