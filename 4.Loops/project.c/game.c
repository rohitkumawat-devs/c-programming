#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, n=1;
    srand(time(0));
    number = rand() % 100 + 1; // Generate a random number between 1 to 100//

    do
    {
        printf("Guess a no\n");
        scanf("%d", &guess);
        if (guess > number)
        {
            printf("Go for a Smaller no\n");
        }
        else if (guess < number)
        {
            printf("Go for a Greater no\n");
        }
        else
        {
            printf("You guessed it correct\n");
            printf("You guessed in %d  attempts\n", n);
        }
        n++;
    } while (guess != number);
    return 0;
}