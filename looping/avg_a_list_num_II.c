#include <stdio.h>

int sum (int n) {
   float value;
   int tap = n;
   n = 0; 
   float sum;
   while (n < tap) {
    printf("X : ");
    scanf("%f",&value);
    sum +=value;
    n++;
   }

   return sum;
}

int main (int argc , char *argv[]) {
    float average;
    int n;
    printf("Enter how many number are : ? ");
    scanf("%d",&n);
    float sum_val = sum(n);
    average = sum_val / n;
    printf("Average number is %.2f",average);
    return 0;
    
}