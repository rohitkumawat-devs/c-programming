#include<stdio.h>

int main(){
    int a;
    printf("Enter value of integer\n");
    scanf("%d",&a);

    // one liner
    (a<5)?printf("%d is lesser than 5\n",a):printf("%d is greater than 5",a);

    return 0;
}