#include<stdio.h>
#include<string.h>
struct employee {
    char Name[10];
    float salary;
};
void show(struct employee emp){
    printf("%s\n", emp.Name);
    printf("%f\n", emp.salary); 
};

int main(){
    struct employee e1;
    e1.salary = 34.7;
    strcpy(e1.Name,"Rohit");
    show (e1);
    return 0;
}