#include<stdio.h>
int avg(int a, int b,int c);

int main(){
    int d;
     d= avg(4,4,16);
    printf("avg of 3 number is %d\n",d);
    return 0;
}
int avg(int a, int b,int c){
    int result;
    result = (a+b+c)/3;
    return  result;
    
}
//we can use float instead of int beacause it will ensure that decimal value are also obeyed