#include<stdio.h>

int main(){
    int mul[10];
    int j ;
    printf("Enter the Number whose table you want\n");
    scanf("%d", &j);
    for( int i =0 ; i < 10 ; i++){
        mul[i] = (i+1)*j;
        printf("%d X %d = %d\n", j , i+1 , mul[i]);
    }
    return 0;
}