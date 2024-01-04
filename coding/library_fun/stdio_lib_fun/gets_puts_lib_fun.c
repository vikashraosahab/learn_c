/*
puts() and gets() library function of stadio 
******** puts() function return data that passed within it's parenthesis it can read space as character *****
******** gets() function used intput data it read space as character ********
*/

#include <stdio.h>

int main (void)
{
    char *name;
    gets(name);
    puts(name);
    return 0;
}