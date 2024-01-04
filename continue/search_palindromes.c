/* PALINDROMES PROGRAM*/

// PREPROCESSOR DIRECTIVE HEADER FILES
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>
#include <string.h>

// SYMBOLIC CONSTANT
#define ENDOFFILE '\n'
#define Max_length 100

// HEADING OF THE MAIN() FUNCTION
int main (int argv, char *argc[]) {
    int count, countback, tag;
    char letter[Max_length];
    char choice[20];
    bool flag,loop;
    loop = true;
    while (loop) {
      flag = true; 
      printf("\nEnter sentence words or phrases...... \n");
      fgets(letter,Max_length,stdin);
      letter[strcspn(letter,"\n")] = '\0';
      if (toupper(letter[0]) == 'E' && toupper(letter[1]) == 'N' && toupper(letter[2]) == 'D') break;
      tag = strlen(letter) - 1;
      
      for (count = 0, countback = tag; count <= tag/2; ++count,--countback) {
        // printf("%c \t %c \n",letter[count],letter[countback]);
        if (letter[count] != letter[countback]){
            flag = false;
        }
      }

      for (count = 0; count <= tag; count++) {
        printf("%c",letter[count]);
      }

      if (flag) printf(" Yes it's palindromes\n");
      else printf(" No it's not palindromes\n");


      printf("Enter Yes if you want to quit.... and No if you don't \n");
      fgets(choice,sizeof(choice),stdin);
      choice[strcspn(choice,"\n")] = '\0';
       
       if (strcmp(choice,"yes") == 0) {
          loop = false;
       
    }
    return 0; // IT INDICATE THAT THE PROGRAM EXECUTE SUCCESSFULLY
}