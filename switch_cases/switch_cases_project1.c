/*
******************************** SWITCH CASE STATEMENT ********************************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN () FUNCITON 
int main (int argv,char *argc[]) {
 // VARIABLES DECLARATIONS 
 int flag;
 printf ("Enter your flag value : "); // OUTPUT STATEMENT (PROMPT)
 scanf("%d",&flag); // INPUT STATEMENT 

 // CONDITIONAL STATEMENT 
 switch (flag) {
    case 1: // CASE 1
     printf("HOT"); // OUTPUT STATEMENT 1
     break; // STOP CASE
    case 2: // CASE 2
      printf("LUKE WARM"); // OUTPUT STATEMENT 2
      break; // BREAK
    case 3: // CASE 3
      printf("COLD"); // OUTPUT STATEMENT 3
      break; // BREAK
    default : // CASE FOR DEFAULT VALUE
      printf("OUT OF RANGE"); // OUTPUT STATEMENT AS RESULT
      break; // BREAK;
 }
 return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY  
}