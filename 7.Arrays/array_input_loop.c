#include <stdio.h>

int main()
{
    int value[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter the value of integer %d\n", i+1);
        scanf("%d", &value[i]);
    }
    for (int i = 0; i < 5; i++)
    {
        printf("Value of integer %d is %d\n", i+1, value[i]);
    }

    return 0;
}