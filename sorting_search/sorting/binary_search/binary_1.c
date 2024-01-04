#include <stdio.h>

int main (int argc, char *argv[]) {
    int ary[] = {1,2,3,4,5,6,7,8,1,10,11};
    int key,low,high,n,middle;
    n = sizeof(ary) / sizeof(int);
    low = 0;
    high = n - 1;
    key = 4;

    while (low <= high) {
        middle = (low + high) / 2;
        if (ary[middle] == key) {
            printf("%d at the %d",key,middle);
            break;
        }
        else if (ary[middle] < key) {
            low = middle + 1;
        }
        else {
            high = middle - 1;
        }
    }

    if (low > high) {
        printf("Sorry element is not found");
    }
    return 0;
}