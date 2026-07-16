#include<stdio.h>

int main(){int i=0;
    char str1[100],str2[100];
    printf("Enter the value of string1\n");
    scanf("%s",str1);
    printf("Enter the string2 character by character\n");
    
    char c;
   fflush(stdin);
    while(1){
        scanf("%c",&c);
        if(c=='\n'){
            break;
        }
        str2[i]=c;
        i++;
        fflush(stdin);
        
    }
    str2[i]='\0';
    printf("Value of string 1 %s and %s\n",str1,str2);
    return 0;
}