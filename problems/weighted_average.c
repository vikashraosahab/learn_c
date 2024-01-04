/*
*** CALCULATE THE WEIGHTED AVERAGE OF A LIST OF N NUMBER, USING THE FORMULA ***
*** Xavg = f1X1 + f1X2 + .... + fnXn **************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
    // VARIABLE DECLARATIONS
    float f,x,WEIGHTED_AVERAGE = 0;
    float fn = 0;
    int count = 0;
    
    while (fn != 1) {
        ++count; // INCREMENT COUNT BY PRE-INCREMENT OPERATOR
        printf ("STEP %d \t",count);
        printf("Enter f value : \n");
        scanf ("%f",&f);
        if (f >= 0 && f <= 9) {
            while (f <= 0 || f >= 1) {
            printf ("Please re-enter f value more than 0 and less than 1 \n");
            scanf ("%f",&f);
         }
        }
        else {
            printf ("Please enter valid - statement \n");
        }
        // PROMPT OUTPUT STATEMENT FOR ASK FOR ORIGINAL VALUE
        printf ("Enter Main value (X) : \n");
        scanf ("%f",&x); // 

        // WEIGHTED AVERAGE
        WEIGHTED_AVERAGE = x * f;
        // OUTPUT DESIRED RESULT 
        printf ("Weighted Average = %.3f\n",WEIGHTED_AVERAGE);

        // INCREMENT fn loop VALUE BY f
        fn += f;
    }
    printf ("\n\n TOTAL STEP TAKEN BY WHILE %d\n",count);
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}