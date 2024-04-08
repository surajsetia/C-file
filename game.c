#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;

    int guess;
    int attempts = 0;

    printf("Welcome to the Guess the Number Game!\n");
    printf("I have selected a random number between 1 and 100. Try to guess it!\n");

    do {
        // Get player's guess
        printf("Enter your guess: ");
        scanf("%d", &guess);

        // Increment attempts
        attempts++;

        // Check if the guess is correct
        if (guess == secretNumber) {
            printf("Congratulations! You guessed the correct number in %d attempts.\n", attempts);
            break;
        } else if (guess < secretNumber) {
            printf("Too low. Try again!\n");
        } else {
            printf("Too high. Try again!\n");
        }

    } while (1); // Infinite loop until the correct guess is made

    return 0;
}
