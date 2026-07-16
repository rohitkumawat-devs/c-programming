#include<stdio.h>
int occurance(char str[],char c){
    char *ptr=str;
    while(*ptr!='\0'){
        if(c==*ptr){
            printf("%c is present in %s\n",c,str);
        }
        ptr++;
    }
}
int main(){
    char str[]="RohiT";
    occurance(str,'T');
    return 0;
}