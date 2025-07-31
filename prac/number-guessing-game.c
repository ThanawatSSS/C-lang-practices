#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    srand(time(NULL));                   // Seed the random number generator with the current time
    int secretNumber = rand() % 100 + 1; // Generate a random number between 1 and 100
    int guess, attempts = 0;

    printf("Welcome to the Number Guessing Game!\n");
    printf("I'm thinking of a number between 1 and 100. Can you guess it?\n");

    do
    {
        printf("Enter your guess: ");
        scanf("%d", &guess);
        attempts++;

        if (guess < secretNumber)
        {
            printf("Too low! Try again.\n");
        }
        else if (guess > secretNumber)
        {
            printf("Too high! Try again.\n");
        }
    } while (guess != secretNumber);

    printf("Congratulations! You guessed the number in %d attempts.\n", attempts);

    return 0;
}