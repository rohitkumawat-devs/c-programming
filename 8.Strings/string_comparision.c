#include<stdio.h>
#include<string.h>
int main(){
    char str1[34]="Hero";
    char str2[]="Hero";
    int val = strcmp(str1,str2);
    printf("%d",val);
    return 0;
}