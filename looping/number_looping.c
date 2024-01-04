#include <stdio.h> // PREPROCESSOR DIRECTIVE HEADER FILE

// HEADING OF THE MAIN() FUNCTION OF THE PROGRAM
int main (void) {
   int i, nstart, n, k, sum; // VARIABLE DECLARATION
   sum = 0; // VALUE INITIALIZATION
   printf("Enter nstart value : "); // OUTPUT STATEMENT
   scanf("%d",&nstart); // INPUT STATEMENT
   printf("Enter n value : "); // OUTPUT STATEMENT
   scanf("%d",&n); // INPUT STATEMENT 
   i = nstart; // VALUE INITIALIZATION
   // LOOPING I TO 100 AND INCREMENT BY N
   for (i; i < 100; i += n){
    sum += nstart + 2 * n; // VALUE CALCUATING AND STORED 
   }
    printf("sum %d\n",sum);
   (sum % n) == 0 ? printf("Even") : printf("ODD");

    return 0;  
}