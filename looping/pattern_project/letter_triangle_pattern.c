/*
********************* LETTER TRIANGLE PATTERN *********************
*/
#include <stdio.h>

int main (void) {
    int i,j,n,a;
    printf ("enter number of rows : ");
    scanf ("%d",&n);

    for (i = 1; i <= n; i += 1) {
        a = 65;
        for (j = 1;j <= i; j++){
            printf ("%c",a);
            a += 2;
        }
        printf ("\n");
    }
    return 0;
}