#include <stdio.h>

int main()
{
    FILE *ptr;
    int n1, n2, n3;
    ptr = fopen("integersfile.txt", "r");
    fscanf(ptr, "%d", &n1);
    fscanf(ptr, "%d", &n2);
    fscanf(ptr, "%d", &n3);
    printf("%d\n", n1);
    printf("%d\n", n2);
    printf("%d\n", n3);
    return 0;
}
