#include<stdio.h>

int value(int*a);
int main(){
    int a;
    printf("The address of a is %d\n",&a);
    value(&a);
    printf("The value of a is %d\n", a);

    
    
    return 0;
}
int value(int*a){
    *a = 4;
    return *a;
}