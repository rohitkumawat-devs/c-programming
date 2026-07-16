#include <stdio.h>

int main()
{
    int table[] = {2, 3, 4};
    int j =0;
    while( j<3){
        for (int i=0; i < 10; i++)
        {
            printf("%d X %d = %d\n", table[j],i+1,(table[j])*(i+1));
        }

      ++j; 
    }
    return 0;
}