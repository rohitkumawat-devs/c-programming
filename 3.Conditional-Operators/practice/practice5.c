#include<stdio.h>

int main(){
    //97 -122//
    char ch;
    printf("Enter the character\n ");
    scanf("%c",&ch);
    
    if(ch>=97 && ch<=122){
        printf("It is a lowercase");
    }

else{printf("It is not a lowercase");}
    


    return 0;
}