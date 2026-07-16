#include<stdio.h>

int main(){
    FILE *ptr;
    ptr =fopen("writing.txt","w");
    int number =34;
    fprintf(ptr,"%d is the number\n",number);
    fprintf(ptr,"Thanks for using fprintf\n");
    fclose(ptr);
    return 0;
}