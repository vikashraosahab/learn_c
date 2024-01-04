/* REPEATING COMPOUND INTEREST CALCULATIONS */
#include <stdio.h> // PREPROCESSOR DIRECTIVE HEADER FILES 
#include <math.h>

int main (int argv, char *argc) {  
   float p,r,t,n,i,C_I;
   char encoded_period;
   printf("enter initial amount : ");
   scanf("%f",&p);

   while ((int) p > 0) {
       printf("Enter interest rate : ");
       scanf("%f",&r);
       printf("enter number of years : ");
       scanf("%f",&t);
       getchar();
       printf("This is for time conver in to days months or years : \n");
       printf("Enter y for year, m for month and d for day : ");
       scanf("%c",&encoded_period);

       switch (encoded_period)
       {
       case 'y':
        t = t;
        break;
       case 'm' :
         t = t / 12;
         break;
       case 'd' :
          t = t / 365;
       default:
         printf("enter valid character for respective time");
        break;
       }
       i = r / 100;
       C_I = p * (pow (1 + i, n));
       printf("Compound Interest %.2f\n",C_I);

       printf("enter a value for the principle (p) again : \n");
       printf("\n To end program, enter 0 for the principle : ");
       scanf("%f",&p);
   }
    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}