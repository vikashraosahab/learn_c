/*
***********************  
READ IN A LINE OF MIXED TEXT, STORE IT IN A APPROPRIATE ARRAY, AND THEN WRITE IT WITH ALL
LOWERCASE AND UPPERCASE LETTERS REVERSED, ALL DIGITS REPLACED BY 0S AND ALL OTHER CHARACTER
(NON-LETTERS AND NON-DIGITS) REPLACED BY ASTERISK(*) 
**********************
******************** PROBLEM - 2 *******************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <ctype.h>

// MACROS CONSTANT
#define EOL '\n'

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
    // DECLARATIONS OF VARIABLE 
    int count , length = 0;
    char ch[100];

    // READING CHARACTER FROM USER, UNTIL NOT FOUND NEW LINE ESCAPE SEQUENCES (\n)
    while ((ch[length] = getchar()) != EOL) {
        ++length;
    }
     // ADDING NULL OPERATOR AT THE END OF THE STRING
    // ch[length + 1] = '\0';

   // printf("%s",ch);

   // INITIALIZATION COUNT WITH 0
   count = 0;

   while (count < length) {
     if (ch[count] >= 'a' && ch[count] <= 'z' ||
         ch[count] >= 'A' && ch[count] <= 'Z'
     ) {
        if (ch[count] >='a' && ch[count] <='z') {
            printf("%c",toupper(ch[count]));
        }
        else {
            printf("%c",tolower(ch[count]));
        }
     }
     else if (ch[count] >= 0 && ch[count] <= 9) {
        printf("%c",0);
     }
     else {
        printf("*");
     }
     // INCREMENT OF THE COUNT BY 1
     count++;
   }
   
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}