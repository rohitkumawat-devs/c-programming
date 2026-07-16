#include<stdio.h>

void printarray( int*ptr , int n){
    for(int i=0;i<n;i++){
        printf("The value of element %d is %d\n",i+1,*(ptr+i));
    }
    ptr[2]= 55; //This value will be changes in arr aray og main as well// 
}
int main(){
    int arr[] = {1,2,3,4,5,6,7};
    printarray(arr,7);
    //more than 7 it will print value automatically by itself
    printf("%d",arr[2]);
    return 0;
}