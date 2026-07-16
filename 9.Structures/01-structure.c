#include<stdio.h>
struct employee{
    char name[10];
    float salary;
    int roll_no;
};
int main(){
    struct employee e1,e2,e3;
    printf("Enter the Name of e1\n");
    scanf("%s",e1.name);
    printf("Enter salaray of e1\n");
    scanf("%f",&e1.salary);
    printf("Enter the Roll_no e1\n");
    scanf("%d",&e1.roll_no);

    printf("Enter the Name of e2\n");
    scanf("%s",e2.name);
    printf("Enter salaray of e2\n");
    scanf("%f",&e2.salary);
    printf("Enter the Roll_no e2\n");
    scanf("%d",&e2.roll_no);

    printf("Enter the Name of e3\n");
    scanf("%s",e3.name);
    printf("Enter salaray of e3\n");
    scanf("%f",&e3.salary);
    printf("Enter the Roll_no e3\n");
    scanf("%d",&e3.roll_no);



    return 0;
}