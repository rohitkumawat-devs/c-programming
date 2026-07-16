#include<stdio.h>
#include<string.h>
int main(){
    char str[23];
    char str1[34];
    char c;
    printf("Enter the String 1\n");
    scanf("%s",str);
    printf("Enter the 2nd string character by charcter");
    int i=0;
    while(c!='\n'){
        fflush(stdin);
        scanf("%c",&c);
        str1[i]=c;
        i++;
    }
    str1[i-1]='\0';
    printf("The string1 is =%s \nThe string2 is =%s\n",str,str1);
    printf("%d",strcmp(str,str1));
    return 0;
} 