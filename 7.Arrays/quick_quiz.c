#include <stdio.h>

int main()
{

    // Addition//
    int a = 4;
    int *j = &a;
    printf("The address of a is %d Before\n", j);
    ++j;
    printf("The address of a is %d after\n", j);

    // Substraction//
    int b = 4;
    int *k = &b;
    printf("The address of b is %d Before\n", k);
    --k;
    printf("The address of b is %d after\n", k);

    // Substarction of one pointer from another//
    int l = 4;
    int *m = &l;
    int p = 8;
    int *q = &p;
    printf("Sunstraction of pointer a and b is %d\n", m - q);

    // Comparision of 2 pointers//
    if (j == k)
    {
        printf("Pointer j and k  have equal value\n");
    }
    else
    {
        printf("Pointer j and k  have diff value\n");
    }

    return 0;
}