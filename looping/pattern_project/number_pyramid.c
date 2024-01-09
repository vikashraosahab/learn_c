#include <stdio.h>

int main (void) {
    int i,j,k,n;
    printf ("Enter number of rows : ");
    scanf ("%d",&n);

 // OUTER LOOP
  int a = 1;
 for (i = 1; i <= n; i++) {
    for (j = 1; j <= n - i; j++) printf (" ");
    for (k = 1; k <= a; k++) {
        printf ("%d",k);
    }
    a +=2;
    printf ("\n");
 }
    return 0;
}