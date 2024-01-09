#include <stdio.h>

int main (void) {
    int n;
    printf ("enter number of rows : ");
    scanf ("%d",&n);
    
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <=n + n / 2; j++) {
            if (j == 1 || i == n) {
                printf ("*");
            }
            else {
                printf (" ");
            }
        }
        printf ("\n");
    }
    
    printf ("\n\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n + n /2; j++) {
            if (i == 1 || i == n || j == 1 || j == n + n / 2) {
                printf ("*");
            }
            else printf (" ");
        }
        printf ("\n");
    }

    printf ("\n\n");
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= 2 * n - 1; j++) {
            if (j == i || j == 2 * n - i) {
                printf ("*");
            }
            else printf (" ");
        }
        printf ("\n");
    }
    printf ("\n\n");

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (i == 1 || i == n || j == 1 || i ==n/ 2 + 1) {
                printf ("*");
            }
            else printf (" ");
        }
        printf ("\n");
    }
    return 0; 
}