#include <stdio.h>
#include <math.h>

int main (int argv, char *argc[]) {
    // VARIABLES DECLARATIONS
    int flag = 1, count = 0;
    float val,root,test,error;
    
    printf("\n enter value : ");
    scanf("%f",&val);

    while (flag) {
        ++count;
        if (count == 50) flag = 0;
        test = 10. - 3. *val *val;
        if (test > 0) {
            root = pow (test,.2);

            printf("\n Iteration : %d\t",count);
            printf("x = %7.5f",root);
            error = fabs (root - val);

            if (error > 0.000001) val = root;
        }
        else {
            flag = 0;
            printf("Number is out of range ");
            printf("\n\nroot %7.5f",root);
        }

        if ((count == 50) && (error > 0.00001))  {
            printf("\n\n Convergence not obtained after 50 iterations");
        }
    }
    return 0;
}