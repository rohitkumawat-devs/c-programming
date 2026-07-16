#include<stdio.h>
// sum is a function which takr a and b as input and return an integer as an output//
int sum(int a,int b); // function prototype declaration


int main(){
    int c;
    c= sum(2,15); //function call
    printf("The value of c is %d",c);
    return 0;
}

int sum(int a, int b){
    int result;
    result = a + b;
    return result;
}
