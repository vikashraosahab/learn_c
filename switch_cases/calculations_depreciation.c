/*
CALCUATION DEPRECATION METHODS
************ STRAIGHT LINE METHOD ********
value = value / number of years
************ DOUBLE DECLINING BALANCE METHOD *******
VALUE = 2 * VALUE / NUMBER OF YEARS
************ SUM OF YEARS DIGITS *******************
VALUE = (N - YEAR + 1) * VALUE / (N * (N + 1) / 2);
*/
#include <stdio.h>

int main (int argv, char *argc[]) 
{
   int  choice = 0, count = 0, num_of_year;
   float val,deprece;
   
   while (choice != 4) {
     printf("Enter value : ");
     scanf("%f",&val);
     printf("Enter choice : ");
     scanf("%d",&choice);
     printf ("Enter number of year :");
     scanf("%d",&num_of_year);
     // CHOSE WAY OF DEPRECIATION METHOD
     switch (choice) {
        case 1 : 
         deprece = val / num_of_year;
         val -= deprece;
         printf("End of the 2 year %d\n",num_of_year);
         printf("Drepreciation %d",deprece);
         printf("Value %f",val);
        break;
        case 2 :
        printf("double declining balance \n\n");
        for (int i = 1; i <= num_of_year; i++) {
            deprece = 2 * val / num_of_year;
            val -= deprece;
            printf("End of the year %d\n",i);
            printf("Depreciation %f \n",deprece);
            printf("value %f\n",val);
        }
        break;
        case 3 :
        printf("Sum of the year digit");
        for (int i = 0; i < num_of_year; i++) {
          deprece = (num_of_year - ( i + 1)) * val / (num_of_year * (num_of_year + 1))/2;
          val -= deprece;

          printf("End of the year %d\n",num_of_year);
          printf("Depreciation %f\n",deprece);
          printf("Value %f\n",val);
        }
        break;
        default : 
        printf("\n\n EORROR PLEASE ENTER VALID NUMBER\n");
     }
   }
    return 0;
}