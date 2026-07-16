#include<stdio.h>
typedef struct  complex{
int real;
int complex;
}comp;

void display(comp c){
    printf("The value of real part is %d\n",c.real);
    printf("The value of complex part is %d\n",c.complex);
}
int main(){
comp complex[5];
for(int i=0;i<5;i++){
    printf("Enter the complex part of complex no %d\n",i+1);
    scanf("%d",&complex[i].complex);
    printf("Enter the real part of real no %d\n",i+1);
    scanf("%d",&complex[i].real);

}    
for (int i=0;i<5;i++){
    display(complex[i]);
}
    return 0;
}