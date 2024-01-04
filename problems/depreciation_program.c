/*
****************** DEPRECIATION PROGRAM ********************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

// HEADING OF THE MAIN () FUNCTION 
int main (void) {
   // DECLARATIONS OF VARIABLES
   int n, choice = 0;
   float value, depre;

   // PROMPT OUTPU STATEMENT
   printf("\n STM - 1, DM - 2, SYD - 3, END MORE < 3 (4 TO INFINITY)\n");

   // LOOPING 
   while (choice != 4) {
     printf("Enter choice value : ");
     scanf("%d",&choice);
      
      if (choice >= 1 && choice < 4) {
          printf ("Enter number of year : ");
          scanf("%d",&n);
          printf ("Enter original value : ");
          scanf("%f",&value);

          // CONDITIONALS 
          if (choice == 1) {
              printf("\n STRAIGHT LINE METHOD TO FIND OUT DEPRECIATION ... \n");
              // DEPRECIATE VALUE
            //  for (int i = 1; i <= n; i++) {
             for (int i = 0; i < n; i++) {
              depre = value / n;
              value -= depre;
              printf("End OF YEAR %2d \t\n",i);
              printf ("DEPRECIATE %8.4f\n",depre);
              printf ("Original value %10.4f\n",value);
             
             }
             goto end;
              break;
          }
          else if (choice == 2) {
            printf ("\n DOUBLE-DECLINING BALANCE METHOD \n");
            for (int i = 1; i <= n; i++) {
                depre = 2 * value / n;
                value -= depre;
                printf ("End of year %2d\n",i);
                printf ("Depreciate %4.5f\n",depre);
                printf ("Original value %10.5f\n",value);
            }
            goto end;
            break;
          }
          else if (choice == 3) {
             printf ("\n SUM-OF-THE-YEAR's DIGITS METHOD\n");
             int original_value = value;
             for (int i = 0; i < n; i++) {
                depre = (n - i + 1) * original_value / (n * (n + 1) / 2);
                value -= depre;
                printf ("END OF YEAR %2d\n",i);
                printf ("DEPRECIATION %7.6f\n",depre);
                printf ("Current Value %8.5f",value);
             }
             goto end;
             break;
          }
          else {
            printf("PLEASE ENTER CHOICE NUMBER BETWEEN 1 TO 3 - LIKE (1,2,3)\n");
            break;
          }
      } 
      else {
        printf ("PLEASE ENTER CHOICE VALUE MORE THAN 1 AND LESS THAN 4 MEANS (1,2,3)......\n");
        printf ("\n START AGAIN \n");
      }
      end : printf ("\n\n\n GOODBYE HAVE A NICE DAY \n START AGAIN\n");

   } 
    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}