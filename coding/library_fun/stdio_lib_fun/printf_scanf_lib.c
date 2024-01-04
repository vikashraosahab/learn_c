/*
printf(control string,parameter) and scanf(control string, parameter) standio library function
printf(control string, parameter) => THIS FUNCTION METHOD USED TO DISPLAY DATA AS OUTPUT 
scanf("data type",parameter) => THIS FUNCTION METHOD USED TO INPUT DATA FROM USER

*/
// PREPROCESSOR DIRECTIVE HEADER FILE 
#include <stdio.h>

int main (void) {
    int val;
    printf("Enter value : ");
    scanf("%d",&val);
    printf("The value is %d",val);
    return 0; // IT INDICATES THAT PROGRAM EXECUTE SUCCESSFULLY
}