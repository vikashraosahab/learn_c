/*
************************ NUMBER TRIANGLE **************************
1
23
456
78910
*/
#include <stdio.h>

int main (void) {
    int i,j,n,a;
    printf ("Enter number of rows : ");
    scanf ("%d",&n);
     a = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= i; j++) {
            printf ("%d",a);
            a++;
        }
        printf ("\n");
    }
    return 0;
}