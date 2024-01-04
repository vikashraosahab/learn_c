/*
*********** DEPRECIATION PROGRAM UPDATED ****************
****** ADDING ERROR TRACING METHOD AND RE-ENTER DATA *****
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <string.h>

// HEADING OF THE MAIN() FUNCTION 
int main (void) {
   // VARIABLE DECLARATION
   int choice,n;
   float value,depre,tag;
   char flag[5];

   // PROMPT OUTPUT STATEMENT
   printf ("CHOICE 1 (STM) - CHOICE 2 (DDBM) - CHOICE 3 (SOYDM) \n");
   printf ("Enter choice value: ");
   scanf ("%d",&choice);

   // CHECK THAT CHOICE NOT LESS THAN 1 OR NOT GREATER THAN 3
   while (choice < 0 || choice > 3) {
     printf ("\n Sorry ! Please enter valid value...... \n");
     printf ("Re-enter your choice  again .. \n");
     printf ("Enter Choice : ");
     scanf ("%d",&choice);
   }

   while (choice != 4) {
     printf ("Enter original value : ");
     scanf("%f",&value);
     while (value <= 1) {
          printf ("Please enter original value more than 1 \n");
          printf ("Re-enter again : \n");
          scanf ("%f",&value);
     }
     printf ("Enter number of year : ");
     scanf("%d",&n);
     
     while (n < 1) {
        printf ("Please enter number of year more than 1\n");
        printf ("Re-enter number of year : \n");
        scanf("%d",&n);
     }
     switch (choice)
     {
     case 1:
       printf ("THIS STRAIGHT DEPRECIATION METHOD \n");
         for (int i = 1; i <= n; i++) {
            depre = value / n;
            value -= depre;
            printf ("END OF YEAR %d\t",i);
            printf ("DEPRECIATE : %.2f\t",depre);
            printf ("Original Value : %.3f\n",value);
         }
        break;
     case 2:
       printf ("DOUBLE - DECLINING BALANCE METHOD \n");
        for (int i = 1; i <= n; i++) {
          depre = 2 * value / n;
          value -= depre;
          printf ("END OF YEAR %d\t",i);
          printf ("DEPRECIATE : %.2f\t",depre);
          printf ("Original Value : %.2f\n",value);
        }  
        break;
      case 3: 
        printf ("SUM OF YEAR DIGITS METHODS \n");
        // STORE INITIAL ORIGINAL VALUE
        tag = value;

        for (int year = 1; year <= n; year++) {
            depre = (n - year + 1) * tag / (n * (n + 1) / 2);
            value -= depre;
            printf ("END OF YEAR %d\t",year);
            printf ("Depreciation : %.3f\t",depre);
            printf ("Original Value : %.3f\n",value);
        }
        
     }
     printf ("\n ARE YOU WANT TO EXIT THE PROGRAM \n");
     printf ("\nEnter 'yes' for exit and 'no' for not exit\n");
     again : // again allow re-enter flag statement
     scanf("%s",&flag); // INPUT STATEMENT 
     // COMPARE FLAG WITH YES OR NO
      if (strcmp(flag,"yes") == 0) {
        goto stop; // STOP WHOLE STATEMENT WHEN IT ENCOUNTERD WITH YES
      }
      else if (strcmp (flag,"no") == 0) {
        printf ("\n Re-enter value again ....\n");
      }
      else {
        printf ("\n Sorry ! you have entered in-valid statement !\n");
        printf ("\n\n Re-enter again 'yes' or 'no' : ");
        goto again; // GOTO AGAIN MEANS ALLOW FLAG INPUT STATEMENT AGAIN
      }
   }
   
   stop : printf ("\n GOODBYE YOUR PROGRAM IS CLOSED NOW!\n"); // LAST STATEMENT OF THE PROGRAM TO EXIT
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}