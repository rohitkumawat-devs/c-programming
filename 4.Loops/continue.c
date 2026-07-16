#include <stdio.h>

int main()
{
    int skip = 5;
    int i = 0;
    while (i < 10)
    {
        if (i == skip)
        {
            i++;
            continue; // skip the rest of the loop for i==5//
        }
        else
        {
            printf("%d\n", i);
            i++;
        }
    }
    return 0;
}