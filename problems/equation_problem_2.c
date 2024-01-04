/*
************** EQUATION PROBLEMS UPDATED VERSION - 2 **********************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <math.h>

// MACROS CONSTANT
#define TRUE 1
#define FALSE 0

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // VARIABLE DECLARATIONS 
    float guess, error, test, root;
    int count = 0, flag;
    // INITIALIZE FLAG WITH TRUE
    flag = TRUE;
    printf ("Initial Guess number : ");
    scanf("%f",&guess);
    printf ("INITIAL GUESS NUMBER %.3f\n",guess);
    
    // START LOOP 
    do {
        ++count; // INCREMENT COUNT BY 1
        if (count == 50) flag = FALSE;
        test = (10 - guess * guess) / 2;

        if (test > 0) {
            root = pow (test,.5);
            printf ("ITERATION %4d \t",count);
            printf ("ROOT %8.5f\n",root);
            error = fabs (root - guess);

            if (error > .000001) guess = root;
            else {
                flag = FALSE; 
                printf ("Main Root %8.5f\t",root);
                printf ("Main ITERATION %5d",count);
            }
        }
        else {
            flag = FALSE;
            printf("NUMBER IS OUT OF RANGE");
        }
    }
    while (flag);

    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}