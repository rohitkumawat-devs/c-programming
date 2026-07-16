#include <stdio.h>
#include<string.h>
typedef struct employee
{
    char Name[10];
    float salary;
}emp;

void show(struct employee emp){
    printf("%s\n", emp.Name);
    printf("%f\n", emp.salary); 
};

int main()
{
    emp e1;
    emp *ptr;
    ptr = &e1;


    e1.salary = 34.7;
    strcpy(e1.Name, "Rohit");
    show(e1);
    return 0;
}