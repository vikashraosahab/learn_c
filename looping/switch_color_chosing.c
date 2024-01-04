/* FIND COLOR BY USING SWITCH CASE */
#include <stdio.h> // PREPROCESSOR DIRECTIVE HEADER FILE
#include <ctype.h>
// HEADING OF THE MAIN() FUNCTION
int main (int argv,char *argc[]) {
    // VARIABLE DECLARATIONS
    char first_word;
    printf("\nEnter first character of the color : ");

    switch (first_word = getchar()) {
        case 'R':
        case 'r':
        printf("Red");
        break;
        case 'B':
        case 'b':
        printf("Blue");
        break;
        case 'W':
        case 'w':
        printf("White");
        break;
        case 'Y':
        case 'y':
        printf("Yellow");
        case 'P':
        case 'p':
        printf("Pink");
        break;
        default:
        printf("Sorry out of given choice character ");
        break;
    }
    return 0; // SUCCESSFUL EXECUTION OF THE PROGRAM
}