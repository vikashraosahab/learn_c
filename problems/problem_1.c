/*
********************* READ IN A LINE OF UPPERCASE TEXT, STORE IT IN AN APPROPRIATE ARRAY,
ADN THEN WRITE IT IN LOWERCASE *****************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <ctype.h>

// HEADING OF THE MAIN () FUNCITON 
int main (void) {
   // VARIABLE DECLARATIONS
   char ch[60];
   int count , length = 0;
   printf("Enter your characters : ");
   // READING CHARACTER UNTILL IT NOT GET NEWLINE ESCAPE SEQUENCES
   while ((ch[length] = getchar()) != '\n') {
      length++;
   }

   // INITIALIZATION OF THE COUNT 
   count = 0;
   while (count < length) {
     printf("%c",tolower(ch[count]));
     count++;
   }

    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}