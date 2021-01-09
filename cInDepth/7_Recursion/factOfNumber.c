#include <stdio.h>

unsigned int fact(unsigned int number) {
	if (number == 1) {
		return 1;
	} else {
		return number * fact(number-1);
	}
}

int main() {
	unsigned int number;
	printf("Enter a number to find it's factorial: ");
	scanf("%u", &number);
	printf("%u\n", fact(number));
	return 0;
}
