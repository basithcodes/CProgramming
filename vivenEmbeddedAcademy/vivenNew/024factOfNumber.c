/* This program will find the factorial of a given number */

/* Functions with arguments and no return type */

#include <stdio.h>

void factOfNumber(int number);

int main(void) {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);

	factOfNumber(number);
	return 0;
}

void factOfNumber(int number) {
	int fact = 1;
	for (int i = number; i >= 2; i--) {
		fact = fact * i;
	}
	printf("fact of %d is %d\n",number, fact);
}
