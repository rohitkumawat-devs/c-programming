#include<stdio.h>

int main(){
    int i=0;
    do{
        printf("Enter the value of i is %d\n",i++);
        if(i==5){break;}
    }while(i<20);
    
    return 0;
}