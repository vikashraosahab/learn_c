/*
log() math library function
*/

#include <stdio.h>
#include <math.h>

int main (void) {
    double logx = 30;

    printf("%lf",log10(logx));
    printf("\t%lf",log(logx));
    return 0;
}