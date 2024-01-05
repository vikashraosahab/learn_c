#include <stdio.h>

int main (void) {
  // VARIABLE DECLARATIONS
  int i,j,isprime,count = 0;
  int numbers[1000];

  // ASSUME ALL PRIME NUMBER
  for (i = 2; i <= 1000; i++) {
    numbers[i] = 1; // ASSUME THAT ALL NUMBER ARE PRIME NUMBER
  }

  // FIND OUT ALL NUMBERS THAT ARE NOT PRIME NUMBER
  for (i = 2; i * i <= 1000; i++) {
    printf ("i %d ",i);
    if (numbers[i] == 1) {
       for (j = i * i; j <= 1000; j += i) {
        printf ("j %d ",j);
        numbers[j] = 0; // ASSUME THAT NUMBER IS NOT PRIME
       }
    }
  }

  // START A LOOP 2 TO 1000
  for (i = 2; i <= 1000; i++) {
    // WHEN NUMBER IS PRIME
    if (numbers[i] == 1) {
      ++count; // INCREMENT COUNT BY 1
      printf ("%d = %d\n ",count,i); // OUTPUT STATEMENT 
    }
    if (count == 100) break; // STOP LOOP WHEN COUNT REACH 100
  }
  return 0;
}