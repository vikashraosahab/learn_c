/*
 UNARY OPERATORS 
 ++ -- SIZEOF !
*/
#include <stdio.h>

int main (void) {
     int a = 5;
     printf("%d\n",a++);
     printf("%d\n",++a);
     printf("%d\n",a--);
     printf("%d",--a);

     printf("\n%d\n",!(a == 5));

     printf("%d\n",sizeof a);
    return 0;
}