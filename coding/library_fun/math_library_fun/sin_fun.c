/*
SIN() MATH LIBRARY FUNCTION 
****** IT'S RETURN SINE OF VALUE THAT PASSED WITHIN IT'S PARENTHESIS ******
*/

#include <stdio.h>
#include <math.h>

int main (void) 
{
   int sine;
   printf("Enter sine value : ");
   sine = getchar();
   double result = sin((double) sine);

   printf("%lf",result);
    return 0;
}