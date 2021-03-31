#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	time_t t;
	int guess = 0;
	int numberOfTries = 5, tries;
	int gameContinue;

	srand((unsigned) time(&t));
	int randomNumber; 
	randomNumber = rand() % 21;

	printf("Guessing Game:\n");
	printf("Random Number = %d\n", randomNumber);

	while (1) {
		printf("Please enter a valid number (0 - 20): ");
		for (tries = 1; tries <= numberOfTries; ++tries) {
			while (scanf("%d", &guess) == 1) {
				if (guess < 0 || guess > 20) {
					printf("Please enter a valid number (0 - 20): ");
					continue;
				}
				break;
			}
			if (randomNumber == guess) {
				printf("Congratulations! Your guess is correct.\n");
				break;
			}

			if (randomNumber < guess) {
				printf("Guessed number is more than my number\n");
				printf("Tries left = %d\n", numberOfTries-tries);
				if (tries == 5) {
					break;
				}
			} else if (randomNumber > guess) {
				printf("Guessed number is less than my number.\n");
				printf("Tries left = %d\n", numberOfTries-tries);
				if (tries == 5) {
					break;
				}
			} 
		}

		if (tries == 5 && randomNumber != guess) {
			printf("Better luck next time.\n");
			printf("wanna try again? y or n: ");
			scanf("%d", &gameContinue);
			if (gameContinue) {
				printf("Guessing Game:\n");
				randomNumber = rand() % 21;
				printf("Random Number = %d\n", randomNumber);
				continue;
			}
			break;
		}

		if (randomNumber == guess) {
			break;
		}
	}
	return 0;
}
