#include<stdio.h>
#include<string.h>

int main(){
    char str[23]="Rohit";
    char str2[23]="Kumawat";
    strcat(str,str2);
    printf("Your name is %s",str);
    return 0;
}