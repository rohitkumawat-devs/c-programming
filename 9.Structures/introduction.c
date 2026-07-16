#include<stdio.h>
#include<string.h>
struct employee{
    int code;
    float salary;
    char name[10];
     
};
int main(){
    struct employee e1;
    e1.code =49;
    e1.salary = 34.7;
    strcpy(e1.name,"Rohit");//--->we cant set it like e1.name="Rohit"//
    printf("%d",e1.code);
    
    return 0;
}