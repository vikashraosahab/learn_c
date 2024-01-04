/*
ADD TWO NUMBER 
THAT GIVEN BY USER 
************** MATHMATICAL CALCULATIONS ***********
*/
// PREPROCESSOR DIRECTIVE HEADER FILE 
#include <stdio.h>

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
   int num1,num2; // DECLARATION OF THE VARIABLES
   printf("Enter first number : "); // OUTPUT PROMPT STATEMENT
   scanf("%d",&num1); // INPUT STATEMENT
   printf("Enter Second number : "); // OUTPUT PROMPT STATEMENT 
   scanf("%d",&num2); // INPUT STATEMENT
   
   int sum = num1 + num2; // ADDING TWO INTEGER VALUE AND ASSIGN THEM WITHIN SUM VARIABLE

   printf("The sum of %d and %d = %d",num1,num2,sum); // OUTPUT RESULT
    return 0;
}