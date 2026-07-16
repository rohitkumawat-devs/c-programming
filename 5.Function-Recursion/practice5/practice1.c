#include<stdio.h>
float temp(float c );

int main(){
    float result,c,f;
    printf("Enter the value in celsius\n");
    scanf("%f",&c);

    printf("The value of Fahrenheitis %f for %f degree Celsius\n ",temp(f),c);
    
    return 0;
}
float temp(float c ){float f;
    f = (c*(9/5)) + 32;
    return f;}
