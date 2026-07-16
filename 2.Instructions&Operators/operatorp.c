#include<stdio.h>

int main(){
    int x =3;
    int y = 4;

    printf("The value of 3*x - 8*y is %d\n", 3*x - 8*y );
    printf("The value of 8*x / 3*y is %d \n", 8*x/3*y);
    // 8*x / 3*y = 24/12 will give wrong answer//
    // real method in same priority go from left to right (8*3)/3*4 = (24/3)*4 = 8 * 4 = 32
    return 0;
}