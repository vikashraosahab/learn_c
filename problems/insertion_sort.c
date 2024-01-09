#include <stdio.h>

int main (void) {
    int array[] = {1,4,2,3,5,6,8,43,33,2,3};
    int n = sizeof (array) / sizeof(int);

    for (int i = 0; i < n; i++) {
        int key = array[i];
        int j = i - 1;
        while (j >= 0 && key < array[j]) {
            array[j + 1] = array[j];
           // printf ("ss %d ",array[j + 1]);
            j--;
            array[j + 1] = key;
           // printf (" %d ",array[j + 1]);
        }
    }

    for (int i = 0; i < n; i++) printf ("%d ",array[i]);
    return 0;
}