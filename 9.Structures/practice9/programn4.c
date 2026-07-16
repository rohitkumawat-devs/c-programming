#include <stdio.h>
#include<string.h>
typedef struct employee
{
    char Name[10];
    int id_no;
    float salary;
}emp;
int main()
{
emp e1;
emp *ptr;
ptr =&e1;
strcpy(ptr->Name,"Rohit");
ptr->id_no=23;
ptr->salary=234;
printf("The Name is %s\n",e1.Name);

printf("The ID no is %d\n",e1.id_no);
printf("The salary is %f\n",e1.salary);
    return 0;
}