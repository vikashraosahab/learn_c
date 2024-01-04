/*
******************** SOLVE EQUATION X = ROOT[(10 - X POWER 5) / 3] *****************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// HEADING OF THE MAIN() FUNCTION 
int main (int argc, char *argv) {
     // VARIABLE DECLARATIONS
     float guess, root, error, test;
     int flag = true, count = 0;
     
     // PROMPT OUTPUT STATEMENT 
     printf ("Initial guess number : ");
     scanf ("%f",&guess); // PROMPT INPUT STATEMENT
     printf ("INITIAL GUESS NUMBER IS : %f \n",guess);
     while (flag) {
        ++count; // INCREMENT COUNT BY 1
        if (count == 50) flag = false; // STOP LOOP WHEN COUNT ENCOUNTERE WITH 50 
        test = (10. - pow (guess, 5)) / 3;
        if (test > 0) {
            root = pow (test, 0.2);
            printf ("Iteration = %d \t",count);
            printf ("ROOT = %7.5f\n",root);
            error = fabs (root - guess);
            // CHECK ERROR 
            if (error > 0.00001) guess = root;
            else {
                flag = false;
                printf ("MAIN ROOT = %8.5f \t",root);
                printf ("MAIN INTERATION = %d \n",count);
            }
        } 
        else {
            flag = false;
            printf ("\n NUMBER OUT OF RANGE - TRY ANOTHER INITIAL GUESS");
        }
     } 
     if (count == 50 && error > 0.00001) 
      printf ("\n\n CONVERAGENCE NOT OBTAINED AFTER 50 ITERATIONS\n");
    // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
    return 0;
}