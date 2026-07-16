#include<stdio.h>

int main(){
    int b;
    printf("Enter No Table you want\n");
    scanf("%d",&b);
    int a = 1;
    while(a>0 && a<=10){
       
       printf("%d\n",b*a);
        a++;
    }
    return 0;
}