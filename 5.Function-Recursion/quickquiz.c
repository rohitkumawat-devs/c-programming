#include <stdio.h>
void GoodMorning();
void Goodafternoon();
void Goodnight();

int main()
{
    printf("Printing 1 , 2 & 3 in the order\n");
    GoodMorning();
    
   
    printf("Here all three are completed in order\n");
    return 0;
}
void GoodMorning()
{

    printf("Good Morning\n");Goodafternoon();//calling good afternoon
}
void Goodafternoon()
{
    printf("Good afternoon\n"); Goodnight();//Calling good night
}
void Goodnight()
{
    printf("Good Night\n");
}