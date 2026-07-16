



//Eroor in percentage//



#include<stdio.h>

int main(){
    int math , english , hindi  ;
    float total; 
    total = ( math + english + hindi   ) /3;

    printf("Enter your Marks in English\n");
    scanf("%d",&english);

    printf("Enter your Marks in Hindi\n");
    scanf("%d",&hindi);

    printf("Enter your Marks in math\n");
    scanf("%d",&math);

    

    if(math >=33 && english >=33  && hindi >=33  && total >=40)
    {
        printf("You are Pass\n");
        printf("%f is your total Percentage\n",total);
    }
    else{
        printf("You are Fail\n");
        printf("Try again Next time\n");
    }
    return 0;
}