#include<stdio.h>
typedef struct employee{
int x;
int y;
}vector;
int main(){
    vector v1,v2;
    v1.x=23;
    v1.y=34;
    printf("The value of x id %d and y is %d \n",v1.x,v1.y);
    return 0;
}