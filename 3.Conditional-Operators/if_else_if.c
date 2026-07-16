#include<stdio.h>

int main(){
    int age;
    printf("Enter your age \n");
    scanf("%d",&age);

    if(age<=1){
        printf("You are a infant\n");
    }

    else if(age >=2 && age <=4){
        printf("You are a Toddler\n");
    }

    else if(age >=5 && age <=12){
        printf("You are a Child\n");
    }

    else if(age >=13 && age <=19){
        printf("You are a Teen\n");
    }
    else if(age >=20 && age <=39){
        printf("You are a Adult\n");
    }
    else if(age >=39 ){
        printf("You are a Senior\n");
    }
    return 0;
}