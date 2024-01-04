#include <stdio.h>

int main (int argc, char *argv[]) {
    float val,sum;
    int n,count;
     printf("How many list : ? ");
     scanf("%d",&n);
     count = 0;

     do {
        printf("X = ");
        scanf("%f",&val);
        sum +=val;
        count++;
     } while (count < n);

    printf("Average number %.2f",(sum/n));
    return 0;
}