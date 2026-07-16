#include<stdio.h>

int main(){
    int i , n;
    i = 0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    do{
        printf("%d\n",++i);
    }
    while(i<n);

    return 0;
}