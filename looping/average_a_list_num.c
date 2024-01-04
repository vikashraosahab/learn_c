#include <stdio.h>

int main (int argc, char *argv[]) {
    float value,sum,average;
    int n ,tag;
    printf("enter average list number : ");
    scanf("%d",&n);
    printf("Number list is :  %d\n",n);
    tag = 0;
    while (tag < n) {
       printf("X = ");
       scanf("%f",&value);
       sum +=value;
       tag++;
    }

    average = (sum) / n;
    printf("average of %d number of %.2f",n,average);
    return 0;
}