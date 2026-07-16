#include<stdio.h>

int sum(int a);

int main(){
    int n;
    printf("Enter the no whose n no sum you want\n ");
    scanf("%d",&n);
    printf("Sum of %d series  is %d\n",n,sum(n));
    return 0;
}

int sum(int a)
{
 if(a==1){
    return 1;
 }
 else{
    return a + sum(a-1);
 }
};