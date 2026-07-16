#include <stdio.h>
int sum(int a, int b);
int main()
{
    int x = 4, y = 3;
    printf("%d is value of x and %d is value of b\n", x, y);
    printf("The Sum of a+b is %d\n", sum(x, y));
    printf("The valueof a and b after function call is %d and %d\n", x, y);
    return 0;
    //this is original 
}
int sum(int a, int b)
{
    int c;
    c = a + b;
    a = 2345;
    b =3456;
    return c;
    //These are copy --(Xerox)--  value not effect the original value of a & b// 
}