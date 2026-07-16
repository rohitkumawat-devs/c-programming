#include<stdio.h>

int main(){
    char str1[100];
    printf("Enter the string 1");
    gets(str1);
    int m,n;
    printf("Enter the valur of m");
    scanf("%d",&m);
    printf("Enter the valur of n");
    scanf("%d",&n);
    char str2[100];
    int i=n,j=0;
    while (i<m)
    {
    str2[j]=str1[i];
    i++;
    j++;
    }
    str2[j]='\0';
printf("%s",str2);
    
    return 0;
}
