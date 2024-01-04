/*
tan() math library function 
******* IT'S RETURN TANGENT OF GIVEN VALUE ********
*/
#include <stdio.h>
#include <math.h>

int main (void) {
    int value = 15;
    double tan_val = tan((double) value);
    double tanh_val = tanh((double) value);

    printf("%lf\n %lf",tan_val,tanh_val);

    return 0;
}