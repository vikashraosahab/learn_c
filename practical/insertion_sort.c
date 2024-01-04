/*
INSERTION SORT 
********* SORTING ARRAY ************
*/
#include <stdio.h>

int main (void) {
    int ary[] = {3,4,5,3,5,5,3,5,5,3,5,35,6,645,3,55,35,435,35,52,53,55,5,5,456,1,2,2,23,4,24,1,2,3,45,34,535,5,5,535,34,4,34,55,857,58575,49485,};
    int size = sizeof(ary) / sizeof(ary[1]);
    
    for (int i = 0; i < size; i++) {
      int j = i + 1;

       while (j >= 0 && ary[i] > j) {
           j = ary[i];
           j--;
       }
       j++;
    }


    for (int i = 0; i < size; i++) {
       printf("%d ",ary[i]);
    }
    
    
    return 0;
}
