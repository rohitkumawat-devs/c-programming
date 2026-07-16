#include<stdio.h>
#include<math.h>

int main(){
    int side  ;
    printf("Enter the value of Side\n");
    scanf("%d",&side);
  
    
    printf("The area of the Square is %f\n", pow(side,2));
    //pow is a double function so we takedecimal value not int so we use float %d istead of int %d// 

    return 0;
}

