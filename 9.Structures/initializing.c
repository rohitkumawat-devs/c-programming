#include <stdio.h>
struct employee
{
    char Name[10];
    int roll_no;
    float salary;
};
int main()
{
    struct employee rohit = {"Rohit", 23, 34.5};
    printf("%s\n", rohit.Name);
    printf("%f\n", rohit.salary);
    printf("%d\n", rohit.roll_no);
    return 0;
}