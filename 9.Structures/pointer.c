#include<stdio.h>
#include<string.h>
struct employee{
    char Name[10];
    float salary;
};
int main(){
  struct employee e1;
  struct employee *ptr;
  ptr=&e1;
  strcpy((*ptr).Name,"Rohit");
  (*ptr).salary=234;
  printf("%s has salary of %f",e1.Name,e1.salary);

    return 0;
}