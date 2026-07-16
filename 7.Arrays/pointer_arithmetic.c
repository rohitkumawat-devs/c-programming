#include <stdio.h>

int main()
{
    int i = 34;
    int *ptr = &i;
    printf("The value of ptr before is %d\n", ptr);
    ptr++;
    printf("The value of ptr after is %d\n", ptr);

    // in int only 4 are added//

    char rohit = 23;
    char *j = &rohit;
    printf("The value of char before is %d\n", j);
    j++;
    printf("The value of rohit after is %d\n", j);

    // in char only 1 are added//

    float k = 3.44;
    float *flt = &k;
    printf("The value of flt before is %d\n", flt);
 flt++;
    printf("The value of flt after is %d\n", flt);

    // in float only 4 are added//

    return 0;
}