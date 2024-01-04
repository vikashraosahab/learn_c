#include <stdio.h>

int main (int argv, char *argc[]) {
    int i, nstart, nstop,n; // DECLARE REQUIRED VARIABLE
    // INITAILIZATION OF VARIALES
    nstart = 1;
    nstop = 25;
    printf("Enter a random n number : \n");
    scanf("%d",&n);

    for (i = nstart; i <= nstop; i++) {
        nstart = nstart + i * n;

        printf("iteration %d : nstart %d \n",i,nstart);
    }
    
    return 0; 
}