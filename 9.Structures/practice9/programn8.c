#include <stdio.h>
#include <string.h>

typedef struct accou
{
    char Name[10];
    int Year;
    float money;
}account;

int main()
{
    account e1, e2;
    strcpy(e1.Name, "Rohit");
    e1.Year = 2134;
    e1.money = 1000000000;

    strcpy(e2.Name, "Mon");
    e2.Year = 2104;
    e2.money = 10000;

    printf("The money in account of %s is %f started account in %d\n",e1.Name,e1.money,e1.Year);
    printf("The money in account of %s is %f started account in %d\n",e2.Name,e2.money,e2.Year);
    return 0;
}