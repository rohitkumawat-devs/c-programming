#include <stdio.h>
int stingcopy(char *str2, char *str1)
{
    int i = 0;

    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        i++;
    }
    str2[i] = '\0';
    return 0;
}
int main()
{
    char str1[] = "Rohit", str2[100];
    stingcopy(str2, str1);
    printf("The value of string1 is %s\nThe value of string2 is %s", str1, str2);

    return 0;
}