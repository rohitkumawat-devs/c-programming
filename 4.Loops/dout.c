#include<stdio.h>

int main(){
    int a=1, i , sum=0, total;
    printf("Enter the no table you want\n");
    scanf("%d",&i);
    while(a<=10){
        printf("%d X %d = %d\n",i,a,i*a);
        sum+=a;
        a++;
        
        total=sum*i;

    }
    printf("%d",total);
    return 0;
}