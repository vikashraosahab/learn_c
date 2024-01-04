/* SOLVE PROBLEMS SET 1 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main (int argv, char *argc[]) {
    int val,ans;
    int flag = 1;
    printf("enter value : ");
    scanf("%d",&val);

    switch (val)
    {
    case -1:
        ans = abs (val);
        break;
    case 0:
         ans = pow(val,3);
         break;
    case 1:
         ans = sqrt(val);
         break;
    case 2:
    case 3:
         ans = 2 * (val - 1);
         break;
    default:
          ans = 0;
        break;
    
    }

    printf("Anser %d",ans);
    return 0;

}