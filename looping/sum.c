#include <stdio.h>


// FUNCTION PROTOTYPE
int do_while (void);
int while_loop (void);

int main (void) {
    int i  = 2;
    int sum = 0;
    while (i < 9) { 
        sum +=i;
        i += 3;
    }
    printf ("SUM %d",sum);

    i = 2;
    sum = 0;

    do {
        sum += i;
        i += 3;
    }
    while (i < 9);

    printf("Sum %d",sum);
    return 0;
}
