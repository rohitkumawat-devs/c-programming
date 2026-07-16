#include <stdio.h>
#include <math.h>

int main()
{
    int a = 4;
    int b = 4;
    printf("The value of a+b is %d\n", a + b);
    printf("The value of a-b is %d\n", a - b);
    printf("The value of a*b is %d\n", a * b);
    printf("The value of a/b is %d\n", a / b);

    int z;
    z= a*b;//legal
    //b*a = z; is illegal//
    printf("The value of z is %d\n",z);

    printf("Remainder when 5 is divided by 2 is %d\n",5%2);
    printf("remainder when 5 is divided by -2 is %d\n",5%-2);
    printf("remainder when -5 is divided by 2 is %d\n",-5%2);
    
    // No operator is asumed to be present
    // printf("The value of 4*5 is %d\n",4.5);
    // printf("The value of 4*5 is %d\n",(4)(5)); --> will not return 20 /wong!!//

    printf("The value of 4*5 is %d\n",(4)*(5));

    // There is no operator to perform Exponential in c //
    printf("The value of 4^5 is %d\n",4^5);
    //-- > will not produce 4 to power 5//

    printf("The value of 4 to the power 5 is %f\n",pow(4,5));


printf("The value of 4*5 is %d\n",4*5);
printf("The value of 4.2*5 is %f\n",4.2*5);
printf("The value of 4.3*5.4 is %f\n",4.3*5.4);

    return 0;
}