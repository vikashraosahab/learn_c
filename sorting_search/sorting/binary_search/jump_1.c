#include <stdio.h>
#include <math.h>

int main (void) {
  int ary[] = {31,2,23,35,6,7,8,5,20};
  int step,n,low,key,high;
  low = 0;
  n = sizeof(ary) / sizeof(int);
  high = n - 1;
  key =  5;
  step = sqrt(n);
  for (int i = 0; i < n; i++) {
    int j = i - 1;
    while (j > 0 && ary[i] < j) {
        ary[j] = ary[j + 1];
        j--;
    }
  } 
  for (int i = 0; i < step; i++) {
     if (ary[step] > key) {
        high = step - 1;
     }
     else {
        low  = step + 1;
     }
  }

  for (int i = low; i <= high; i++) {
    if (ary[i] == key) {
       return 1;
    }
    return -1;
  }
    return 0;
}