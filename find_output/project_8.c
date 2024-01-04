#include <stdio.h>

int main (void) {
   int i,j, x = 0;

   for (i = 0; i < 5; ++i) {
     for (j = 0; j < i; ++j) {
        x += (i + j - 1);
        printf("%d\t%d \t %d\n",i,j,x);
        break;
     }
     printf("\nx = %d",x);
   }
    return 0;
}