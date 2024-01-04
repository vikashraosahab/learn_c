/*
***************** QUADRATIC EQUATION *******************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <math.h>

// HEADING OF THE MAIN () FUNCTION
int main (void) {
     // DECLARATION VARAIBLE
     int a,b,c,X1,X2,root;
     
     // PROMPT STATEMENT
     printf ("NOTICE : "); // PROMPT OUTPUT STATEMENT
     printf ("One quantity must be zero\n"); // PROMPT OUTPUT STATEMENT
     printf ("Enter a : "); // OUTPUT STATEMENT
     scanf ("%d",&a); // INPUT STATEMENT
     printf ("Enter b : "); // OUTPUT SATEMENT
     scanf ("%d",&b); // INPUT STATEMENT
     printf ("Enter c : "); // OUTPUT STATEMENT
     scanf ("%d",&c); // INPUT STATMENT
     
     // CONDITION THAT MUST BE PASSED
     if (a <= 0 || b <= 0 || c <= 0) {
       root = sqrt (b * b - 4 * a * c); // FIND ROOT
      // printf ("%d\n",root); 
      // CHECKING ROOT IS LESS THAN ZERO OR NOT
     if (root <= 0) {
        X1 = (- b + root) / (2 * a);  // X1 VALUE
        X2 = (- b - root) / (2 * a); // X2 VALUE
        printf ("X1 %d\n",X1); // OUTPUT STATEMENT
        printf ("X2 %d\n",X2); // OUTPUT STATEMENT
     }
     else {
        printf ("Sorry ! root value is not equal or less than 0\n"); // ERROR OUTPUT STATEMENT
      }    
     } 
     else {
        printf ("Please enter one quantity 0\n"); // ERROR OUTPUT STATEMENT
     }
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}