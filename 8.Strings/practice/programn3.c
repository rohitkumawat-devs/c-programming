#include<stdio.h>

int main(){
    char str[30];
    char c;
    int i=0;
    printf("Enter your string\n");
    scanf("%s",str);
    while(c!='\0'){
        c=str[i];
        i++;
    }
    printf("Length of the string is %d",i);

    return 0;
}