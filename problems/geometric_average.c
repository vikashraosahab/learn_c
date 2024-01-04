/*
************************* PROBLEM **************************
******************** GEOMETRIC AVERAGE *********************
****************** FORMUL OF GEOMETRIC AVERAGE *************
****************** X = [X1,X2,XN] 1/ N *********************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <math.h>

// HEADING OF THE MAIN() FUNCTION 
int main (int argc, char *argv[]) {
    // VARIABLES DECLARATIONS
    float avg, x,product = 1,sum = 0;
    int n,count;
    printf ("Enter n : "); // PROMPT OUTPUT STATEMENT
    scanf ("%d",&n); // INPUT STATMENT
    count = 0; // COUNT INITIALIZE BY 0
    while (count < n) {
        printf ("Enter x : "); // OUTPUT STATMENT
        scanf("%f",&x); // INPUT STATEMENT
        product *= x; // PRODUCT STORE X CALCUALTED VALUE USING MULTIPLE UNARY OPERATOR
        sum += x; // STORE X VALUE BY ADDING AND USE 
        ++count; // INCREMENT COUNT BY 1
    }
    printf ("%f \%f\n",product,sum);
    // printf ("%f \n",1/ (float) n);
    avg = pow (product, 1.0 /  n ); // AVGERAGE OF GEOMETERIC 

    float sum_avg = pow (sum , 1.0 / n); // AVERAGE OF SUM VALUE
    printf ("Average of geometric value %.2f \n",avg); // OUTPUT STATEMENT
    printf ("Sum Average of geometric value %.2f\n",sum_avg); // OUTPUT STATEMENT

    if (avg > sum_avg) {
        printf ("Product average greater than sum average \n");
    }
    else if (avg == sum_avg) printf ("Product average & sum average are equal \n");
    else printf ("Sum average is greater than product average \n");
    return 0; // MEANS PROGRAM EXECUTE SUCCESSFULLY
}