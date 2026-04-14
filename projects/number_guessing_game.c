#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 * Number Guessing Game
 * --------------------
 * The computer picks a random number between 1 and 100.
 * The player has up to 7 attempts to guess it.
 * After each wrong guess the program hints "too high" or "too low".
 */

#define MIN_VAL   1
#define MAX_VAL 100
#define MAX_TRIES   7

int main(void) {
    int secret, guess, tries;

    srand((unsigned int)time(NULL));
    secret = MIN_VAL + rand() % (MAX_VAL - MIN_VAL + 1);

    printf("=== Number Guessing Game ===\n");
    printf("I'm thinking of a number between %d and %d.\n", MIN_VAL, MAX_VAL);
    printf("You have %d attempts.\n\n", MAX_TRIES);

    for (tries = 1; tries <= MAX_TRIES; tries++) {
        printf("Attempt %d/%d: ", tries, MAX_TRIES);
        if (scanf("%d", &guess) != 1) break;

        if (guess == secret) {
            printf("Correct! You guessed it in %d attempt(s).\n", tries);
            return 0;
        } else if (guess < secret) {
            printf("Too low!\n");
        } else {
            printf("Too high!\n");
        }
    }

    printf("Game over! The number was %d.\n", secret);
    return 0;
}
