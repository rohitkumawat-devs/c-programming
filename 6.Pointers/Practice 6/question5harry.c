#include <stdio.h>

int sumandavg(int a, int b, int *sum, float *avg);

int main()
{
    int a, b, sum;
    float avg;
    printf("Enter the value of Number 1 \n", a);
    scanf("%d", &a);
    printf("Enter the value of Number 2 \n", b);
    scanf("%d", &b);
    sumandavg(a, b, &sum, &avg);
    printf("The sum of a and b is %d\n", sum);
    printf("The avg of a and b is %f\n", avg);
    return 0;
}
int sumandavg(int a, int b, int *sum, float *avg)
{
    *sum = a + b;
    *avg = (float)*sum / 2;
    // to covert int sum to float or decimal we had to apply a decimal typecast before it//
    return 0;
}