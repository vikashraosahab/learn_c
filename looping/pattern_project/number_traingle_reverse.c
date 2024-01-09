#include <stdio.h>

int main (void) {
    int i,j,n;
    printf ("Enter number or rows : ");
    scanf ("%d",&n);
    int a = n;
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= a; j++) {
         printf ("%d",j);// DECREMENT A AT EVERY FOR LOOP STATEMENT
        }
        a--;
        printf ("\n");
    }
    return 0;
}