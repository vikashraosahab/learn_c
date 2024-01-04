// BUBBLE SORTING METHOD
#include <stdio.h>

int main (void) {
    char name[3] = {"Vikas","Akash","Aman"};
 
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3 - i - 1; j++) {
            if (name[j] < name[j + 1]) {
                char temp = name[j + 1];
                name[j + 1] = name[j];
                name[j] = temp;
            }
        }
    }

    for (int i = 0; i < 3; i++)
      printf("%s\n",name[i]);
}