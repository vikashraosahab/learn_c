/*
********************* CUMULATIVE PRODUCT ********************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
    // VARIABLE DECLARATIONS
    int count,total_length;
    float val [] = {6.2, 12.3, 5.0, 18.8, 7.1, 12.8};
    // SIZE OF VAL ARRAY
    total_length = sizeof (val) / sizeof (float);
    // DECLARRE N ARRAY WITH TOTAL_LENGTH AS SIZE, CUMULATIVE FLOAT VARIABLE BY 1
    float n[total_length], cumulative = 1; 

    count = 0; // INITIALIZE COUNT BY 0

    while (count < total_length) {
        cumulative *= val[count];
        n[count] = cumulative; // INITIALIZE N ARRAY BY CUMULATIVE VALUES
        ++count; // INCREMENT COUNT BY USING PRE-INCREMENT OPERATOR
    }

    count = 0; // INITIALIZE COUNT BY 0 AGAIN
    // PRINT N ARRAY ELEMENTS BY USING WHILE LOOP
    while (count < total_length) {
        printf ("%.1f ",n[count]); // PRINT N ARRAY
        ++count; // INCREMENT BY USING PRE-INCREMENT OPERATOR
    }
    return 0; // IT INIDCATES THAT PROGRAM EXECUTE SUCCESSFULLY
}