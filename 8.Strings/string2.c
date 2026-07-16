#include<stdio.h>

int main(){
    char str[]="Rohit";
    char stri[]={'r','o','h','i','t'};
    int *ptr = stri;
    printf(str);
    while(*ptr=!'\0'){
        printf("%c\n",*ptr);
        ptr++;
    }

    return 0;
}