/*
LOGICAL OPERATOR 
****** && || **********
*/
#include <stdio.h>

int main (void) {
   int a = 5, b = 6;

   printf("%d\n", a == 5 && b == 5);
   printf("%d\n", a== 5 && b == 6);
   printf("%d\n", a== 5 || b == 6);
   printf("%d\n", a== 5 || b == 5);
    return 0;
}