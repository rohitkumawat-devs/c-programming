#include <stdio.h>

int main()
{
    int n1, n2, n3;
    printf("Enter the no 1 \n");
    scanf("%d", &n1);
    printf("Enter the no 2 \n");
    scanf("%d", &n2);
    printf("Enter the no 3 \n");
    scanf("%d", &n3);
    int table[3][10];
        for (int i = 0; i < 10; i++)
        {
            printf("%d X %d = %d\n", n1, (i + 1), n1 * (i + 1));
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d X %d = %d\n", n2, (i + 1), n2 * (i + 1));
        }
        for (int i = 0; i < 10; i++)
        {
            printf("%d X %d = %d\n", n3, (i + 1), n3 * (i + 1));
        }

    return 0;
}