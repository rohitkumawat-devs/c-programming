#include<stdio.h>
int address(int*a );
int main(){
    int b=10;
    printf("The value of b is %d \n",b);
    address(&b );
    printf("The value of 10 times of a is %d",b);
    
    return 0;
}
int address(int*a){
   *a = (*a)*10;

return *a; }