#include <stdio.h>

int main (void) {
    FILE *ptr;
    
    if ((ptr = fopen ("mybook.txt","w")) != NULL) {
        char data[100];
        printf("Enter name : ");
        scanf("%[^\n]",&data);
        fprintf(ptr,"%s",data);
        rewind(ptr);
        fclose(ptr);
     }
    // rewind(ptr);
    if ((ptr = fopen ("mybook.txt","r")) != NULL){
        char ch;
       while (!feof(ptr)) {
        fseek(ptr,1,SEEK_CUR);
        fscanf(ptr,"%c",&ch);
        printf("%c",ch);
       }
      fclose(ptr);
    } 

    return 0;
}