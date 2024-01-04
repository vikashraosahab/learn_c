/* AVERAGE A LIST OF NONNEGATIVE NUMBER */

#include <stdio.h>

int main (void) {
    int num,X,sum = 0,avg;
    int count = 0;
    printf("Enter value : ");
    scanf("%d",&num);

    for (int i = 0; i < num; i++) {
        printf ("Enter value : ");
        scanf("%d",&X);
        if (X < 0)
            continue;
            sum +=X;
            ++count;

    }
    avg = sum / count;
    printf("Sum %d",avg);
    return 0;
}