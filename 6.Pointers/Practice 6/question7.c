#include <stdio.h>

int callbyvalue(int *a);

int main()
{
    int b = 10;
    printf("The value of a before function application is %d\n", b);
    callbyvalue(&b);
    printf("The value of a after function application is %d\n", b);

    return 0;
}
int callbyvalue(int *a)
{

    // return  ((*a)*10);
    // //why is this not running but

    *a = ((*a) * 10);
    return *a;
    //But this is Running//
}
