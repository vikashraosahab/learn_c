#include <stdio.h>

int main (void) {
   int i = 0, x = 0;

   for (i = 1; i < 10; ++i) {
       if (i % 2 == 1) {
          x += i;
       }
       else {
        x--;
       }

       printf("%d \t %d ",x,i);
      continue;
   }

   printf("\nx = %d",x);
    return 0;
}