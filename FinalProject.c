#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int random, guess;
    int tries = 5;

    srand(time(NULL));

    printf("\nWELCOME TO THE GAME OF GUESSING NUMBERS\n\n");

    random = rand() % 100 + 1;

    while (tries > 0) {
        printf("Guess a number between 1-100: ");
        scanf("%d", &guess);
        printf("You have %d attempt(s) remaining.\n\n", tries);

        if (guess < 1 || guess > 100) {
            printf("Invalid Number. Please guess a number between 1-100\n\n");
            continue;
        }
        tries--;

        if (guess > random) {
            printf("The number you are trying to guess is smaller than that.\n\n");
        } else if (guess < random) {
            printf("The number you are trying to guess is larger than that.\n\n");
        } else {
            printf("CONGRATULATIONS !!! You have guessed the correct number in %d attempt(s)\n", 5 - tries);
            printf("Thank you for playing. Visit us again\n");
            printf("Developed by: Shayan Bhowmik\n");
            return 0;
        }
    }

    printf("You have used all your tries.\n");
    printf("The correct number was %d.\n", random);
    printf("Thank you for playing. Visit us again\n");
    printf("Developed by: Shayan Bhowmik\n");

    return 0;
}
