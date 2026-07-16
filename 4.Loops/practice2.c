#include<stdio.h>

int main(){int i=1 , sum=0 , n=10;
    // while(a<=10 && a>0){
    //     printf("%d natural no is %d\n", a,a );
    //     a++;
    // }
    //   for( i=1;  i<=n;  i++ ){
    //     sum += i;
    //   }
    //   while(i<=n){
    //     sum += i;
    //     i++;
    //   }

    do{
       sum += i;
       i++;

    }while(i<=n);
      printf("sum of first 10 natural no is %d\n",sum);
    return 0;
}