/*
**************** PROJECT - 4 *****************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
  int i = 0, x = 0;
  for (i = 1; i < 10; ++i) {
     if (i % 2 == 1) {
        x += i;
     }
     else x--;

     printf("\n%d",x);
  }
  printf("\n\n\n %d",x);
    return 0;
}