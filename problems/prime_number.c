/*
************** PRIME NUMBER *****************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <math.h>

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // DECLARATION VARIABLE
    int val,count;
    printf ("Enter value : "); // PROMPT OUTPUT STATEMENT
    scanf ("%d",&val); // INPUT STATEMENT

    // INITIALIZE COUNT BY 0
    count = 0;

    for (int i = 1; i <= val; i++)
    // VAL HAVE REMAINDER OR NOT WHEN IT'S DIVIDE BY LOOP ITERATION vvalue
      if (val % i == 0 ) {
        // INCREMENT COUNT BY 1
         ++count;
      }

      // CHECK COUNT IS EQUAL TO 2 OR NOT 
      if (count == 2) printf ("Yes given number %d is prime number ",val);
      else printf ("No given number %d is not prime number ",val);
   
    // OUTPUT 100 PRIME NUMBER 
    return 0; // MEANS SUCCESSFULLY EXECUTION OF PROGRAM
}