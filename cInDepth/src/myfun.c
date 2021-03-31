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

void twinPrimes(int limit) {
	int i, j, count = 0, previousPrime = 1, currentPrime;
	for (i = 2; i <= limit; i++) { // generate numbers
		for (j = 1; j <= i; j++) { // loop through to find factors
			if (i%j == 0) { // condition to check for the factors
				count++;
				if (count > 2) { // factors  are more than two increse the number
					continue;
				}
			}
		}
		if (count == 2) { // if it is prime(factors == 2)
			currentPrime = i;
			if (currentPrime - previousPrime == 2) { // if difference b/w them is 
				// two then print them as pairs
				printf("(%d, %d)\n", previousPrime, currentPrime);
			}
			previousPrime = currentPrime; // I'm doing this bcoz I want to compare 
			// with next prime when i calculate it
		}
		count = 0; 
	}
}

/* Function55 */
/* This function finds if year given is leap year or not. */

int isLeap(int year) {
	if (year % 100 == 0) {
		if (year % 400 == 0) {
			return 1;
		} else {
			return 0;
		}
	} else {
		if (year % 4 == 0) {
			return 1;
		} else {
			return 0;
		}
	}
}

/* Fucntion 56 */
/* This funciton verifies if a date enter is valid */
void isValid(short int day, short int month, short int year) {
	int flag, isleap;
	if (year % 100 != 0 && year % 4 == 0 || year % 400 == 0) {
		isleap = 1;
	}	
	
	if (year < 1850 || year > 2050 || month < 1 || month > 12 || day < 1 || day > 31) {
		flag = 0;
	} else if (month == 2) {
		if (day == 30 || day == 31 || (day == 29 && !isleap)) {
			flag = 0;
		}
	} else if (month == 4 || month == 6 || month == 9 || month == 11) {
		if (day == 31) {
			flag = 0;
		}
	}

	if (flag == 0) {
		printf("Not a valid date\n");
	} else {
		printf("It's a valid date\n");
	}
}

/* Fucntion 57 */
/* This function compares two dates and if date 1 is before date 2 */
/* it return 1 else it returns -1 */

int cmpDate(int date1_day, int date1_month, int date1_year, int date2_day, int date2_month, int date2_year) {
	int day, month, year;
	year = date2_year - date1_year;
	month = date2_month - date1_month;
	day = date2_day - date1_day;
	

	// Check if dates are valid
	// If they are valid then subtract years, months and days.
	// return 1 if date1 is before date2 else -1
	
	/* if (year < 1) { */ 
	/*    return -1; */
	/* }  */
	return 0;

}
