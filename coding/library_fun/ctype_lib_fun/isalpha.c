#include <stdio.h>
#include <ctype.h>

int main (void)
{
    char val;
    printf("enter value : ");
    scanf("%c",&val);
    int a = 5;
    printf("%c",toascii(a));
    if (iscntrl(val)) {
        printf("Yes");
        printf("%c",toupper(val));
    }
    else {
        printf("No");
        printf("%c",tolower(val));
    }
    return 0;
}