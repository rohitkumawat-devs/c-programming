#include<stdio.h>
int positive(int arr[],int n);
int main(){
    int marks[10]={2,-3,4,-4,5,-6,7,-8,8,-9};
    int r=positive(marks,10);
    printf("There are %d positve number\n",r);
    return 0;
}
int positive(int arr[],int n){
    int count=0;
    for(int i=0;i<n;i++){
        if(arr[i]>0){
            count=count+1;
        }
    }


    return count;
}