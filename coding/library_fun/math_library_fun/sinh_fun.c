/*
SINH () MATH LIBRARY FUNCTION
******* IT'S RETURN SINEH OF PASSED VALUE WITH IN IT'S PARENTHESIS ******
*/
#include <stdio.h>
#include <math.h>

int main (void) 
{
  int val;
  scanf("%d",&val);
  double result = sinh((double) val);

  printf("%.2lf",result);
    return 0;
}