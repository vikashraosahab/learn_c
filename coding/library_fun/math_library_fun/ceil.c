/*
CEIL() LIBRARY MATH FUNCTION 
*/
#include <stdio.h>
#include <math.h>

int main (void)
{
    int a = 5;    

    double val = ceil((double) a + 4.2);

    printf("%lf",val);
    return 0;
}