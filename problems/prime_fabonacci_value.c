/*
************* A PROGRAM THAT ASK POSITIVE INTEGER AS INPUT ****************
************* FIND VALUE IS FABONACCI OR PRIME NUMBER *********************
*/
// PREPROCESSOR DIRECTIVE HEADER FILE
#include <stdio.h>
#include <string.h>

// HEADING OF THE MAIN () FUNCITON 
int main (void) {
    // VARIABLE DECLARATIONS
    int n, val1,val2,sum,count = 0;
    char choice[10];
    
    // REPEAT READING N UNTIL IT NOT BECAME 0 OR NEGATIVE
    while (n > 0) {
      start :  printf ("Enter n : ");
      scanf ("%d",&n);
      getchar();
      if (n <= 0 ) goto stop;
      if (n >= 0 && n <= 9) {
        // SELECTION OPTION OF TASK BETWEEN FABONACCI SERIES AND PRIME NUMBER
      printf ("What task do you want to perform : \n");
      choiced: printf ("Enter prime for prime and fabonacci for fabonacci series \n");
      scanf ("%s",&choice);
      if (strcmp (choice, "prime") == 0) {
        printf ("We are checking given number is prime or not prime \n");
        for (int i = 1; i <= n; i++) {
            if (n % i == 0) {
                ++count;
            }
        }
        if (count == 2) {
            printf ("Number is prime \n");
        }
        else {
            printf ("Number is not prime \n");
        }
      }
      else if (strcmp (choice, "fabonacci") == 0){
        printf ("We are creating a number Fabonacci Series 0 to n \n");
        val1 = 0;
        val2 = 1;
        for (int i = 0; i < n; i++) {
            if (i == 0) printf (" 0 ");
            else if (i == 1) printf ("1 ");
            else {
            sum = val1 + val2;
            printf ("%d ",sum);
            val1 = val2;
            val2 = sum;
          }
        }
        printf ("\n");
      }
      else {
        printf ("Please enter valid statement \n");
        printf ("Please re-enter valid statement \n");
        goto choiced;
      }
     }
     else {
        printf ("Please enter valid integer value of n : \n");
        goto start;
      }
    }
    stop: printf ("\nGoodbye ! your task is completed \n");
    return 0; // IT INDICATE THAT PROGRAM EXECUTE SUCCESSFULLY
}