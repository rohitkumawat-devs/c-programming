#include <stdio.h>
int main()
{
    int marks[4];
    marks[0] = 23;
    marks[1] = 23;
    marks[2] = 43;

    printf("Enter the value of marks4\n");
    scanf("%d", &marks[3]);
    printf("%d", marks[3]);
    printf("The value of %d %d %d and %d\n",marks[0],marks[1],marks[2],marks[3]);
    
    return 0;
}
