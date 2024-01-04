/*
************************************** PROBLME 3 ********************************
****************************** AVERAGE OF N NUMBER ******************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
    // DECLARATIONS OF VARAIBLES 
    int n,count = 1;
    float sum,avg,values;
    printf("Enter n value : "); // PROMPT AS OUTPUT
    scanf("%d",&n); // INPUT PROMPT FROM USER
    
    while (count <= n) {
        printf ("Enter value : ");
        scanf("%f",&values);
        sum += values;
        // INCREMENT OF THE COUNT BY 1
        count++;
    }
    // FIND OUT AVGERAGE OF ALL NUMBERS
    avg = (sum) / n;
    printf("Average of %d number = %.2f",n,avg);
    return 0;
}