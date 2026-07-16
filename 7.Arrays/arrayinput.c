#include <stdio.h>

int main()
{
    int mark[4];
    printf("Enter the value of Number 1\n");
    scanf("%d", &mark[0]);
    printf("Enter the value of Number 2\n");
    scanf("%d", &mark[1]);
    printf("Enter the value of Number 3\n");
    scanf("%d", &mark[2]);
    printf("Enter the value of Number 4\n");
    scanf("%d", &mark[3]);

    printf("The marks are %d,%d,%d and %d\n", mark[0], mark[1], mark[2], mark[3]);
    return 0;
}