/*
 DECLARE A SYMBOLIC CONSTANT OF PI WITH VALUE 3.14
 *********** MACROS CONSTANT ***********
 *********** MACROS FUNCTION ***********
 FIND AREA OF CIRICLE  && CIRCUMFERENCES
*/

#include <stdio.h>
#define PI 3.14


int main (void) {
    float radius; // DECLARE A variable
    printf("Enter radius : "); // OUTPUT STATEMENT
    scanf("%f",&radius);
    float area_circle = PI * radius * radius;

    printf("AREA OF CIRCLE %.2f", area_circle);
    return 0;
}