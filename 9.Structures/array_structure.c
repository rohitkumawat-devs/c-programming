#include<stdio.h>
#include<string.h>
struct employee{
    int roll_no;
    char name[10];
    float salary;

};
int main(){
    struct employee array[100];

    array[0].roll_no=25;
    array[0].salary=3456;
    strcpy(array[0].name,"Rohit");
    
    printf("%s",array[0].name);
    return 0;
}