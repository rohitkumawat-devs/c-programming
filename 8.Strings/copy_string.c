#include<stdio.h>
#include<string.h>
int main(){
    char s[34]="Rohit";
    char s3[98];
    strcpy(s3,s);
    printf("The value of s3 is %s",s3);
    return 0;
}