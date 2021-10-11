#include <stdio.h>

unsigned int gcd(unsigned int num1, unsigned int num2);
float absoluteValue(float number);
float squareRoot(float number);

int main(void) {
	printf("%u\n", gcd(150, 35));
	printf("%u\n", gcd(1026, 405));
	printf("%u\n", gcd(83, 240));
	printf("Absolute Value is %.2f\n", absoluteValue(-24.30));
	printf("Absolute Value is %.2f\n", absoluteValue(-15.5));
	printf("Absolute Value is %.2f\n", absoluteValue(-5.0));
	return 0;
}

/* It finds the gcd of a number */
unsigned int gcd(unsigned int num1, unsigned int num2) {
	int denominator, numerator, remainder = 1, coeff;

	num1>num2?(numerator = num1, denominator = num2):
		(numerator = num2, denominator = num1);

	while (remainder != 0) {
		remainder = numerator % denominator;
		coeff = numerator / denominator;
		numerator = denominator;
		if (remainder != 0) {
			denominator = remainder;
		}
	}
	return denominator;
}

/* It finds the absolute value of a number */
float absoluteValue(float number) {
	number < 0?(number = -number):(number = number);
	return number;
}

/* It finds the square root of a number */
float squareRoot(float number) {
	return 0;
}
