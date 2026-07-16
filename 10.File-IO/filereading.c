#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("rohit.txt", "r");
    int num, num1;

    fscanf(ptr, "%d", &num);
    printf(" %d\n", num);
    fscanf(ptr, "%d", &num1);
    printf(" %d\n", num1);
    fclose(ptr);
    return 0;
}