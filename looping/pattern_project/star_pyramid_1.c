#include <stdio.h>

int main (void) {
    int i,j,n;
    printf ("Enter number of rows : ");
    scanf ("%d",&n);
    int a = 1;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= a; j++) {
           printf ("*");
        }
        a +=2;
        printf ("\n");
    }
    return 0;
}