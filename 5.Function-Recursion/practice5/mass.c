#include<stdio.h>

float mass(float m);

int main(){
    float m ;
    printf("Enter the value of mass\n");
    scanf("%f",&m);
     
    printf("The Value of Weight is %.2f\n",mass(m));
    return 0;
}
float mass(float m){
    float weight;
    weight = 9.8 * m;
    return weight;
}