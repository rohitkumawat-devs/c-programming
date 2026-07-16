#include<stdio.h>
int slice(char *str,int m,int n){
    int i=0;
    while(i+m<n){
        str[i]=str[i+m];
        i++;
    }
str[i]='\0';
}

int main(){
    char str1[]="Rohit";
    slice(str1,1,3);
    printf("%s",str1);
    return 0;
}