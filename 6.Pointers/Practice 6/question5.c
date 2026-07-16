#include <stdio.h>
int suma(int a, int b,int*sum);

int main()
{
    int a, b,sum;
    printf("Enter the value of Number 1 \n", a);
    scanf("%d", &a);
    printf("Enter the value of Number 2 \n", b);
    scanf("%d", &b);
    suma(a,b,&sum);
    printf("The Sum of Number 1 and Number 2 is %d", sum);
    return 0;
}
int suma(int a, int b, int*sum)
{ *sum=(a + b);
    return sum;
}