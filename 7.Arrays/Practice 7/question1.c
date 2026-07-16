#include <stdio.h>

int main()
{
    int Num[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter the Value of Num %d  \n", i + 1);
        scanf("%d", &Num[i]);
    }
    int *ptr = &Num[0];
    printf("The Value of ptr is %d\n", *ptr);
    printf("The value of (ptr + 2) is %d\n ", *(ptr + 2));
    
    // Check By if and else loop // 
    int *abc = &Num[2];  
    if (abc = (ptr + 2))
    {
        printf("These point to the same location \n");
    }
    else
    {
        printf("These Not point to the same location \n");
    }
    return 0;
}