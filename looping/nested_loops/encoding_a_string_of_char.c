/* ENCONDING A STRING BY PRINT INT'S NEXT CHARACTER INTEAD IT OF CHARACTER IN C LANGUAGE*/
#include <stdio.h> // PREPROCESSOR DIRECTIVE HEADER FILE

// MAIN() FUNCTION OF THE PROGRAM 
int main (int argv, char *argc) {
    char article[80]; // VARIABLE DECLARATION WITH 80 SIZE
    int count; // VARIABLE DECLARATION
    printf("enter article : \n"); // OUTPUT STATEMENT
   
       for (count = 0; (article[count] = getchar()) != '\n'; count++) {
         if ((article[count] >= 'A' && article[count] < 'Z') || 
             (article[count] >= 'a' && article[count] < 'z' )|| 
             (article[count] >= 0 && article[count] <= 9 )){
                 putchar(article[count] + 1); // INCREMENT BY 1 WITH ENCOUNTER WITH CONDITIONAL CHARACTER
       }
       else if (article[count] == 9) putchar(0); // RETURN 0 WHEN IT ENCOUNTER WITH 9
       else if (article[count] == 'z') putchar('a'); // RETURN a WHEN IT ENCOUNTER WITH z
       else if (article[count] == 'Z') putchar('A'); // RETURN A WHEN IT ENCOUNTER WITH A
       else putchar('.'); // RETURN . WHEN IT ENCOUNTER 
    }
    return 0;
}