#include<stdio.h>

int main(){
    int rate;
    printf("Rate us on scale of (1--->5)\n");
    scanf("%d", &rate);
    switch(rate)
    {
        case 1:
        printf("Your Rating is 1\n");
        break;
          case 2:
        printf("Your Rating is 2\n");
        break;
          case 3:
        printf("Your Rating is 3\n");
        break;
          
          case 5:
        printf("Your Rating is 5\n");
        break;
        case 4:
        printf("Your Rating is 4\n");
        break;
          default:
        printf("Your Rating is Invalid!\n");
        break;
    }
    return 0;
}