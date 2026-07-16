#include <stdio.h>

void wrong_swap(int a, int b);
void swap(int *a, int *b);

// int main(){
//      int x = 4, y = 3;
//     printf("The value of x and y before swapping is %d and %d\n", x, y);
//     wrong_swap(x,y);// will not work due to call by value//
//     printf("The value of x and y after swapping is %d and %d\n", x, y);
//     return 0;
// }
// void wrong_swap(int a , int b){
//     int temp;
//     temp =a;
//     a= b ;
//     b = temp;
// }





int main()
{
    int x=4, y=5;
    printf("The value of x and y before swapping is %d and %d\n", x, y);
    swap(&x, &y); // will not work due to call by value//
    printf("The value of x and y after swapping is %d and %d\n", x, y);
    return 0;
}
void swap(int *a, int *b)//int*a and int*b are adress //
{
    int temp;
    temp = *a;
    *a = *b;//*a and *b are value at that address//
    *b = temp;
}
