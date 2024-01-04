/*
************ PROGRAM THAT COUNT 
LETTERS, DIGITS, WHITE-SPACE, OTHER CHARACTERS (PUNCTUATION)
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <string.h>

// HEADING OF THE MAIN () FUNCTION 
int main (int argv, char *argc[]) {
    // STRING INITIALIZATION 
    char name[] = "My Name Is , Vikas' a' && Yadav From Azamgarh Utter Pradesh";
    // VARIABLE DECLARATIONS
    int letter_count, sym_count,digit_count,space_count,punchuation_count;
    // INITIALIZATION VALUE IN VARIABLE
    letter_count = sym_count = digit_count= space_count = punchuation_count = 0;
    // LENGTH OF THE STRING
    int length = strlen(name);
    
    for (int i = 0; i < length; i++) {
        if (name[i] >= 'A' && name[i] <= 'Z' ||
            name[i] >= 'a' && name[i] <= 'z'
           ) {
            ++letter_count;
        }
        else if (name[i] >= 0 && name[i] <= 9) {
            ++digit_count;
        }
        else if (name[i] == ' ') {
            ++space_count;
        } 
        else {
            ++punchuation_count;
        }
    }

    printf("TOTAL LETTER IN THE CHARACTERS %d\n",letter_count);
    printf("TOTAL DIGITAL NUMBER IS %d\n",digit_count);
    printf("TOTAL SPACE IN THE CHARACTER %d\n",space_count);
    printf("OTHER SYMBOLS %d\n",punchuation_count);
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}