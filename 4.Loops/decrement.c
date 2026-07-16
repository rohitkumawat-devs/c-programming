#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value of a \n ");
    scanf("%d", &a);

    if (a > 5)
    {
        printf("Value of a-1 = %d\n", --a);
        printf("Value of a-1 = %d\n", --a);
        printf("Value of a-1 = %d\n", --a);
    }
    else
    {
        printf("Value of a+1 = %d\n", ++a);
        printf("Value of a+1 = %d\n", ++a);
        printf("Value of a+1 = %d\n", ++a);
        a += 10;
        printf("Value of a+1 = %d\n", a);
    }
    return 0;
}