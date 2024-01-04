/*
*** AVERAGE A LIST OF NUMBER UNITL NOT GET ZERO 0 ***
*/
// PREPROCESSOR DIRECTIVE HEADER FILE 
#include <stdio.h>

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
    // VARIABLE DECLARATIONS 
    int count = 0;
    float val = 0,sum,avg;

   while (1) {
    printf("Enter value : "); // PROMPT OUTPUT STATEMENT
    scanf("%f",&val); // PROMPT INTPUT STATEMENT
     if (val == 0) {
        goto stop; // STOP LOOPING WHEN IT ENCOUNTER WITH 0
        count--; // NOT COUNT WHEN IT FOUND 0
     }

     sum += val; // STORE ALL VALUE WITHIN SUM VARIABLE
    // INCREMENT COUNT BY 1
    count++;
    
   }
   stop: printf ("okay get your average\n"); // LABLE USE FOR CLOSE LOOP
   avg = sum / count; // FINDING OUT AVERAGE 

   printf("Average of %d = %.2f",count,avg); // OUTPUT RESULT
   
    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}