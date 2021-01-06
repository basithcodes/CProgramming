#include "../inc/myfun.h"
#include <stdio.h>

/* Function1 */
/* sumPrDivisors function finds the sum of proper divisors 
 * and returns that sum*/

int sumPrDivisors(int number) {
	int sum = 0, i;
	for (i = 1; i <= number/2; i++) {
		if (number%i == 0) {
			sum = sum + i;
		}
	}
	return sum;
}

/* Function2 */
/* convert() converts inches to cms and vice versa */

float convert(float number, char units) {
	switch (units) {
		case 'i':
			return number*2.54;
		case 'c':
			return number/2.54;
	}
	return 1;
}

/* Fucntion3 */
int Product(int number1, int number2) {
	int sum = 0;
	for (int i = 1; i <= number2; i++) {
		sum = sum + number1;
	}
	return sum;
}

/* Function4 */
/* division is continuous subtraction (product and sum analogy) */
int Quotient(int divident, int divisor) {
	if (divisor == 0) {
		printf("Dividing by zero is invalid:");
		return -1;
	}
	int sub = divident, count = 0;
	while (divisor <= sub) {
		sub = sub - divisor;
		count++;
	}
	return count;
}

/* Function5 */
/* After subtracting divident from divisor the remaining is remainder */
int Remainder(int divident, int divisor) {
	if (divisor == 0) {
		printf("Dividing by zero is invalid: ");
		return -1;
	}
	int sub = divident, count = 0;
	while (divisor <= sub) {
		sub = sub - divisor;
	}
	return sub;
}

/* Fucntion6 */
/* It finds if a character is alpha numeric */
int alphaNumeric(char character) {
	printf("Value: %d\n", character);
	if ((character > 47 && character < 58) || (character > 64 && character < 91) 
				|| (character > 96 && character < 123)) {
		return 1;
	} 
	return 0;
}

/* Function7 */
/* This function returns uppercase alphabet, if it receives lower case alphabet */
/* else it returns the same character */
char sendUpperCaseCharacter(char character) {
	if (character >= 'a' && character <= 'z') {
		return character-32;
	}
	return character;
}

/* Function53 */
/* This function find the sum of series 1 + 1/4 + 1/9 + 1/16 + ... */
float sumOfSeries(int limit) {
	float sum = 0, x;
	for (x = 1; x <= limit; x++) {
		sum = sum + 1/(x * x);
	}

	return sum;
}
