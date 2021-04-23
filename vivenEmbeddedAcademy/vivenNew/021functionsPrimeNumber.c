/* This program will find whether a given number is prime or not */
/* Function without argument and return type */

#include <stdio.h>

void prime(void);

int main(void) {
	prime();
	return 0;
}
void prime(void) {
	int number, count = 0;

	printf("Enter a number: ");
	scanf("%d", &number);

	/* Prime number is divisible by 1 and itself */
	for (int i = 1; i <= number; i++) {
		if(number % i == 0)
			count++;
	}

	if (count == 2)
		printf("%d is a prime\n", number);
	else
		printf("%d is not a prime\n", number);

}
