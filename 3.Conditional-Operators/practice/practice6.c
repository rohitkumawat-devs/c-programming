#include<stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter value of a\n");
    scanf("%d",&a);
    printf("Enter value of b\n");
    scanf("%d",&b);
    printf("Enter value of c\n");
    scanf("%d",&c);
    printf("Enter value of d\n");
    scanf("%d",&d);

    if(a>b && a>c && a>d)
    {
        printf("%d is the greatest value\n",a);
    }
     if(a<b && b>c && b>d)
    {
        printf("%d is the greatest value\n",b);
    }
     if(c>b && a<c && c>d)
    {
        printf("%d is the greatest value\n",c);
    }
     if(d>b && d>c && a<d)
    {
        printf("%d is the greatest value\n",d);
    }
    return 0;
}