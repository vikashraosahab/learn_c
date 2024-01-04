/*
********************************* TEXT TRANSFORMATION ********************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <string.h>

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
   char text[] = "MY NAME IS VIKASH YADAV, I AM FROM INDIA SO PLEASE DISTURB ME";
   // LENGTH OF THE TEXT
   int length = strlen(text);
   printf("%s\n",text);
   char backtext[length];
    backtext[length] = '\0';
   int j = 0;

   for (int i = length, j = 0; i >= 0 , j <= length; --i, ++j) {
     backtext[j] = text[i];
     printf("%c ",backtext[j]);
   }
   
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}