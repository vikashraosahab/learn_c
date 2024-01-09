/*
********** NUMBER WITH LETTER ***************
1
AB
123
ABCD
12345
*/
#include <stdio.h>

int main (void) {
   int i,j,n,a;
   printf ("Enter number of rows : ");
   scanf ("%d",&n);

   for (i = 1; i <= n; i++) {
    a = 65;
    for (j = 1; j <= i; j++) {
      if (i % 2 == 1) {
        printf ("%d",j);
      }
      else {
        printf ("%c",a);
      }
      a += 1;
    }
    printf ("\n");
   }
    return 0;
}