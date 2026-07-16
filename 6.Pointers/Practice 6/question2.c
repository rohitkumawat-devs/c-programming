// #include <stdio.h>
// int fun(int a,int b);

// int main()
// {
//     int a, b;
//     printf("Enter the value of a\n");
//     scanf("%d", &a);
//     printf("The address of a is %u\n", &a);
//     int fun(a,b);
//     printf("The address of b is %u\n", b);

//     return 0;
// }

// int fun(int a,int b )
// {   int*b=&a ;
//     return  b;
// };

#include<stdio.h>
void variable(int a){
    printf("The Address of a is %u\n",&a);
}
int main(){
    int a=4;
    printf("The Value of a is %d\n");
    variable(a);
    printf("The address of a is %u\n,&a");
    //Both the address are different because we did not take address so copy and the original have diff Address and not the same //
    
    return 0;
}