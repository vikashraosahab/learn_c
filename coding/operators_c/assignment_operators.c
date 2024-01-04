/*
ASSIGNMENT OPERATOR 
********** = ********
*/

#include <stdio.h>

int main (void) {
    int a = 5;
    int b = 5;
      b *=a;
    printf("%d %d %d",a  + 22, b, ((a /= 5) * a % 3));

    return 0;
}