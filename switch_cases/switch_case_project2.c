/*
******************************* SWITCH CASES USING CHARACTERS **********************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN () FUNCTION
int main (void) {
    char color; // VARIABLE DECLARATIONS
    printf("Enter color : "); // PROMPT OUTPUT STATEMENT
    scanf("%c",&color); // INPUT STATEMENT

    // SWITCH CASES
    switch (color) {
        case 'r':
        case 'R':
         printf("Red");
         break;
        case 'b':
        case 'B':
         printf("Blue");
         break;
        case 'g':
        case 'G':
         printf("Green");
         break;
        default :
          printf("Black");
          break;
    }
    return 0;
}