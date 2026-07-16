#include <stdio.h>

int main()
{
    int age;
    int vippass = 0;
    vippass = 1;
    printf("Enter your Age\n");
    scanf("%d", &age);
    if (age >= 18 && age <= 70 || !vippass == 1)
    {
        printf("You can drive\n");
    }
    else
    {
        printf("You can't drive\n");
    }

    return 0;
}