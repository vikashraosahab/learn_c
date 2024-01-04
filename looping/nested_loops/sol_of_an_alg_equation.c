#include <stdio.h>
#include <math.h>

int main (void) {
   float root,guess,test,error;
   int flag = 1,count = 0;
   printf("enter guess number : ");
   scanf("%f",&guess);

   while (flag) {
    ++count;
    test = 10 - 3. * guess * guess;
    if (test > 0) {
        root = pow (test,.2);
        error = fabs(root - guess);

        printf("Iteration %d \t value %f\n",count,error);
    }
  
     if (count == 50) {
        flag = 0;
     }

   }
    return 0;
}