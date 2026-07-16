#include<stdio.h>
void change(int a);
int main(){
    int b=344;
    printf("The value of b before change is %d\n",b);
    change(b);
    printf("The value of b after change is %d\n",b);
    return 0;
}
void change(int a){
    a=77;
}
//There is no change in b before and after application of change function 