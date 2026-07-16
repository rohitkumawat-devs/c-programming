// #include<stdio.h>
// float temp(float f);
// int main(){
//     float c,f;
//     printf("Enter the Value of Celsius\n");
//     scanf("%f",&c);
//     printf("The temperature in fahrenheit is %f for temp %f in celsius",temp(f),c);
//     return 0;
// }
// float temp(float f){
//     float c;
//     float f = (c*(9/5)) + 32;
// }
#include<stdio.h>
float temp(float c);

int main(){
    float c  ;
    printf("Enter the value of Celsius\n");
    scanf("%f",&c);
    printf("The Temperature in farenheit is %f for temp %f in celsius",temp(c),c);
    //we had to put c value in the formula not f value that why the above one is incorrect//
    return 0;
}
float temp(float c){
 
    return (c*9/5) + 32;
}