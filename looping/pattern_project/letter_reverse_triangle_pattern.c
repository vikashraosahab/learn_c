/*
************************* LETTER REVERSE TRIANGLE PATTERN ***********************
ACE
AC
A
****************************** N IS THE NUMBER OF ROW ****************************
*/
#include <stdio.h>

int main (void) {
    int i,j,n,a;
    printf ("Enter number of rows : ");
    scanf ("%d",&n);

    for (i = n; i >= 1; i--) {
          a = 65;
        for (j = 1; j <= i; j++) {
            printf ("%c",a);
            a += 2;
        }
        printf ("\n");
    }
    return 0;
}