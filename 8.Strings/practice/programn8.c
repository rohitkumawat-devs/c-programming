#include<stdio.h>

int main(){
    char str[]="gjghfnfjfkdlhgfdaaaaaaa";
    int count =0;
    char n;
    printf("Enter the value of character want to check\n");
    scanf("%c",&n);
    int i=0;
    
    while(str[i]!='\0'){
        if(str[i]==n){
            count++;
        }
        i++;
    }
    printf("%c repeats %d times in string %s \n",n,count,str);
    return 0;
}