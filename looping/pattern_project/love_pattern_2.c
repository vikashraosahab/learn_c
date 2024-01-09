#include <stdio.h>

int main(void) {
    // Horizontal Love Pattern
    printf("Horizontal Love Pattern:\n");

    for (int i = 1; i <= 7; i++) {
        for (int j = 1; j <= 21; j++) {
            if ((i == 1 && (j % 4 == 0 || j % 5 == 0 || j % 6 == 0)) ||
                (i == 2 && (j % 3 == 0 || j % 7 == 0)) ||
                (i >= 3 && i <= 5 && j % 2 == 0) ||
                (i == 6 && (j % 3 == 0 || j % 7 == 0)) ||
                (i == 7 && (j % 4 == 0 || j % 5 == 0 || j % 6 == 0))) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
