#include<stdio.h>
void display(); // Function prototype

int main(){
    int a;
    printf("from here execution of display function start\n");
    display();
    // Function call
    printf("Display function finished its Work\n");
    return 0;
  
}
// Function definiton
void display(){
    printf("This is display\n");
}