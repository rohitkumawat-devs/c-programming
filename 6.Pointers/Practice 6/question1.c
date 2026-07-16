#include <stdio.h>

int main()
{
    int a;

    int *b = &a;
    printf("The address of a is %d\n ", b);
    printf("The address of a is %d\n ", &a);

    return 0;
}