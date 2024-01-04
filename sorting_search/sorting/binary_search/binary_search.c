#include <stdio.h>

int main (void)
{
   int ary[] = {5,4,3,2,1};
   int mid,key = 2,beg,end,size;
   beg = 0;
   size = sizeof(ary) / sizeof(int);
   end = size - 1;

   while (beg <= end) {
     mid = (beg + end) / 2; 

     if (ary[mid] == key) {
        printf("%d %d",key,mid);
        break;
     }
     else if (ary[mid] < key) {
        end = mid - 1;
        printf("%d",end);
     }
     else {
        beg = mid + 1;
        printf("%d   ",beg);
     }
   }

   if (beg > end) {
    printf("array is not allowed");
   }
    return 0;
}