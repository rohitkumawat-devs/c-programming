#include<stdio.h>

int main(){
    char i=1;
    char *ptr=&i;
    printf("The value of ptr is %u",ptr);
    ptr++;
    printf("The new value of ptr is %u",ptr);
    return 0;
}