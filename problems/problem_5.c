/*
AVERAGE OF LIST OF NUMBER AND EVERY NUMBER HAVE IT N NUMBER 
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>

int main (void) {
    // DECLARATION OF VARIABLES
    int n,val_list;
    float value,sum,avg;
    printf ("Enter n number : "); // PROMPT OUTPUT STATEMENT
    scanf("%d",&n); // INPUT PROMPT STATEMENT
    printf("LIST OF %d NUMBER ARE : \n",n); // OUTPUT PROMPT STATEMENT

    for (int i = 0; i < n; i++) {
      printf("How many values : "); // PROMPT OUTPUT STATEMENT
      scanf("%d",&val_list); // PROMPT INPUT STATEMENT
       for (int j = 1; j <= val_list; j++) {
         printf ("Enter value %d  = ",j); // PROMPT OUTPUT STATEMENT
         scanf("%f",&value); // PROMPT INPUT STATEMENT 
         // STORE VALUE WITHIN SUM VARIABLE
         sum += value;
       }
       // FIND OUT AVERAGE BY DIVIDING SUM BY TOTAL NUMBER
       avg = sum / val_list;
       printf("Average : %.2f\n",avg);

       // INITIALIZE 0 WITH SUM VARIABLE AFTER COMPLETE THAT AVERAGE TASK
       sum = 0;
    }
    return 0;
}