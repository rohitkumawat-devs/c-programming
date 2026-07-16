#include <stdio.h>

int main()
{
    int year;
    printf("Enter the day in year \n");
    scanf("%d", &year);
    if (year == 366)
    {
        printf("It's a leap Year\n");
    }
    else
    {
        printf("It's not a leap Year\n");
        printf("Congratulation")
    }

    int year;
    printf("Enter the year \n");
    scanf("%d", &year);
    if(year%4 == 0)
    {
        printf("It's a leap Year\n");
    }
    else
    {
        printf("It's not a leap Year\n");
       
    }

    return 0;
}