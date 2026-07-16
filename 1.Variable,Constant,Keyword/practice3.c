#include<stdio.h>

int main(){
    int principal,years,interest;
    printf("Enter the principal\n");
    scanf("%d",&principal);
    printf("Enter the years\n");
    scanf("%d",&years);
    printf("Enter the interest\n");
    scanf("%d",&interest);
    
    printf("The simple interest is %d\n",(principal*years*interest/100));
    return 0;
}