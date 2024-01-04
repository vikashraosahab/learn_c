#include <stdio.h>

int main (int argc, char *argv[]) {
    int ary[] = {1,4,5,3,4,5,1,2,3,4,5,9,87,65,4,3,21,2};
    int size = sizeof(ary) / sizeof(int);
    int key = 5;

    for (int i = 0; i < size - 1; i++) {
        if (ary[i] == key) {
            printf("array is at %d",i);
        }
        
    }
    return 0;
}