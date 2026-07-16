#include<stdio.h>

int main(){
    char str[]= "Rohit";
    char a;
    printf("Enter the Character you want to check\n");
    scanf("%c",&a);
    int i=0;
    while(str[i]!='\0'){
        if (a==str[i]){
            printf("%c is present in string %s\n",a,str);
            break;
        }
        i++;
    }

    return 0;
}