/*
***************** FIND OUT VOWELS AND CONSONANTS IN THE TEXT ****************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <string.h>

// HEADING OF THE MAIN() FUNCTION
int main (int argv, char *argc[]) {
    // DECLARATIONS OF VARIABLES
    char name[] = "MY IS VIKASH YADAV AND I'M FROM INDAI. Hey man what's you thing about my position in the college for better";

    // LENGTH OF THE STRING 
    int length = strlen(name);

    for (int i = 0; i < length; i++)
      if (name[i] >= 'A' && name[i] <= 'Z' || name[i] >= 'a' && name[i] <= 'z') {
        if (
            name[i] == 'A' || name[i] == 'E' || name[i] == 'I' || name[i] == 'O' || name[i]== 'U' 
          || name[i] =='a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] =='u'
        ) {
           printf("vowels [ %c ]\n",name[i]);
        }
        else {
           printf("Consonants { %c }\n ",name[i]);
        }
      }
    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}