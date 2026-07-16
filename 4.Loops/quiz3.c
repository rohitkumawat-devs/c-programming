#include<stdio.h>

int main(){
    int n;
    printf("enter value of n \n");
    scanf("%d",&n);
    for( int a=0 ; a<n ; a++ ){
        printf("%d is natural no\n",a+1);
    }
    return 0;
}