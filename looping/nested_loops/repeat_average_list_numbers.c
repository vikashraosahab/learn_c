#include <stdio.h>

int main (int argv, char *argc) {
    int first_list,second_list,val,sum = 0,avg = 0;
    printf ("How many values : ");
    scanf("%d",&first_list);

    for (int i = 1; i <= first_list; i++) {
       printf("How many nubmer %d: ",i);
       scanf("%d",&second_list);
        for (int j = 1; j <= second_list; j++) {
            printf ("X %d: ",j);
            scanf("%d",&val);
            sum += val;

        }
        avg = (sum / second_list);
        printf("Average of is %d\n",second_list,avg);
    }
    return 0;
}