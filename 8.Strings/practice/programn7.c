#include<stdio.h>
char decrypt(char *c ){
    char*ptr=c;
    while(*ptr!='\0'){
        *ptr=*ptr - 1;
        ptr++;
    }


}

int main(){
    char str1[]="ifmmp";
    decrypt(str1);
    printf("%s",str1);
    return 0;
}