/* STUDENT'S AVERAGE EXAM MARKS SCORES*/
#include <stdio.h>

int main (void) {
    char *name;
    float math,eng,hindi,phy,che;
    printf("Enter Student name : \n");
    scanf("%[^\n]s",name);
    printf("enter math marks : \n");
    scanf("%f",&math);
    printf("enter eng marks : \n");
    scanf("%f",&eng);
    printf("enter hindi marks : \n");
    scanf("%f",&hindi);
    printf("enter phy marks : \n");
    scanf("%f",&phy);
    printf("enter che marks : \n");
    scanf("%f",&che);

    // find out average of all combined subjects marks
    float avg = (math + eng + hindi + phy + che) / 5;
    
    // output result
    printf("Student name : %s : ",name);
    printf("Math marks is %f\n",math);
    printf("Math marks is %f\n",eng);
    printf("Math marks is %f\n",hindi);
    printf("Math marks is %f\n",phy);
    printf("Math marks is %f\n",che);
    printf("The average of students marks : %.2f out of 100 \n",avg);
    return 0;
}