#include <stdio.h>

int main (void) {
    int i,j,isprime, count = 0;
    int numbers[1000];

    for (i = 2; i <= 1000; i++) {
        isprime = 1;

        for (j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isprime = 0;
                break;
            }
        }
      
       if (isprime) {
        printf ("%d ",i);
        ++count;
       }

       if (count == 100) {
        break;
       }
        
    }
    

    return 0;
}