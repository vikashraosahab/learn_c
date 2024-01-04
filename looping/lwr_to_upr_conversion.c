#include <stdio.h>
#include <ctype.h>

int main () {
   char ch;
// WHILE LOOP IS USE WHEN PASS THROUGH THE LOOP IS NOT KNOW IN ADVANCE 
  while ((ch = getchar()) != EOF) {
    printf("%c",toupper(ch));
  }


    return 0;
}