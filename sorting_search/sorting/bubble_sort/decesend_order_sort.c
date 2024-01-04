/* DESCENDING ORDER VALUE SORTING*/
#include <stdio.h>
void swap(char *val1, char *val2) {
    char temp = *val1;
    *val1= *val2;
    *val2 = temp;
}

void bubble_sort (char *ch,int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (ch[j] < ch [j + 1]) {
                swap(&ch[j],&ch[j + 1]);
            }
        }
    }
}


void display (char *ch, int size) {
    for (int i = 0; i < size; i++) {
        printf("%c ",ch[i]);
    }
}
int main (void) {
    char ch[] = {'a','d','c','z','y','m','n','p','b','e','f'};
    int size = sizeof(ch) / sizeof(ch[0]);

    bubble_sort(ch,size);
    display(ch,size);
    return 0;
}