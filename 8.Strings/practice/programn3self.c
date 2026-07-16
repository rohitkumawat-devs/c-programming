#include<stdio.h>
int ringlength(char str[]);
int main(){
    char str1[100];
    printf("Enter the string 1");
    scanf("%s",str1);
    int count= ringlength(str1);
    printf("The length of the string is %d",count);


    return 0;
}
int ringlength(char str[]){
    int count=0;
    while(str[count]!='\0'){
        count++;
        
    }
return count;
};