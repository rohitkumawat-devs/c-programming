#include <stdio.h>

int main()
{
   int n, i = 2, prime;
   printf("Enter the value of N\n");
   scanf("%d", &n);
//        for( i=2 ;i<n ; i++){
//          if(n%i==0 ){
//             prime=1;
//             break;
//          }

//        }
//        if(prime==1)
//        {
//            printf("This is not a prime no ");
//        }
//        else{
//    printf("This is a prime no ");
//        }
   while (i < n)
   {
      if (n%i == 0)
      {
         prime = 0;
         break;
      }
      i++;
   }
   if (prime==0)
   {
      printf(" Not prime");
   }
   else
   {
      printf("Prime ");
   }
   return 0;
}
