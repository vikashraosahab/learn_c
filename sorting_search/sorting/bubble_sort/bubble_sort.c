/*  BUBBLE SORTING IN C LANGUAGE */
#include <stdio.h>

// FUNCTION PROTOTYPE
void swap(int *val1, int *val2) {
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
void bubble_sorting (int *ary,int size){
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ary[j] > ary[j + 1]) {
                swap(&ary[j],&ary[j + 1]);
            }
        }
    }
}

void printf_array (int *ary,int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ",ary[i]);
    }
}
// HEADING OF THE MAIN () FUNCTION 
int main (int argc,char argv []) 
{
   int data[] = {23,33,45,1,4,33,67,90,475,43,45,32,3,2,7,45,553,55};
   int size = sizeof(data) / sizeof(data[0]);

   bubble_sorting(data,size);
    printf_array(data,size);
    return 0;
}