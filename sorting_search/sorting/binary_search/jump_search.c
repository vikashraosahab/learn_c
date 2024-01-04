#include <stdio.h>
#include <math.h>

int main (void) {
   int ary[] = {1,3,4,5,6,7,8,9,10};
   int step,key,size,low,high;
    size = sizeof(ary) / sizeof(int);
    key = 3;
    low = 0;
    high = size - 1;
    step = sqrt(size);
    for (int i = 0; i < step; i++) {
        if (ary[step] == key) {
           printf("%d",key);
        }
        if (key < ary[step]) {
            high = step - 1;
        }
        else {
            low = step + 1;
        }
    }

    for (i = low; i <= high; i++) {
        if (ary[i] == key) {
            printf("value at %d",i);
        }
    }
    return 0;
}