/*
******************************  CONTROL STATEMENT PROJECT ************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <ctype.h>

// HEADING OF THE MAIN() FUNCTION
int main (void) {
  // VARIABLE DECLARATIONS 
  float temp;
  printf("Enter temp value : "); // OUTPUT STATEMENT
  scanf("%f",&temp); // INTPUT STATEMENT
  
   printf("Value of the temp = %f\n",temp); // OUTPUT STATEMENT
      if (temp < 0) printf("ICE"); // OUTPUT STATEMENT 
     else if (temp > 0 && temp < 100) printf("WATER"); // OUTPUT STATEMENT
     else if (temp > 100) printf ("STEAM"); // OUTPUT STATEMENT
     else printf("Sorry ! ENTER right INPUT "); // OUTPUT STATEMENT

    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}