#include<stdio.h>

int main(){
    int a,sum =1;
    printf("enter the value of a \n",a);
    scanf("%d",&a);
    while(a>0){
       sum *= a;
       a--;
    }
    printf("factorial of a is %d\n",sum);
    return 0;
}