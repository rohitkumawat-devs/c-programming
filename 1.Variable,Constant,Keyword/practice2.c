#include<stdio.h>

int main(){
    int celsius;
    printf("Enter Value in Celsius\n");
    scanf("%d",&celsius);
    printf("The Value in Fahrenheit is %f\n",celsius*1.8 + 32);
    return 0;
}