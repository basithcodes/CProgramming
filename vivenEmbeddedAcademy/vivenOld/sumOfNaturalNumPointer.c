#include <stdio.h>

unsigned long int sumOfNaturalNum(unsigned long int *ptrNumber);

int main() {
	unsigned long int number;
	printf("Enter a number to find the sum of numbers to that given number: ");
	scanf("%ld", &number);
	printf("%ld\n", sumOfNaturalNum(&number));
	return 0;
}

unsigned long int sumOfNaturalNum(unsigned long int *ptrNumber) {
	unsigned long int sum = 0;
	for (unsigned long int i = 0; i <= *ptrNumber; i++) 
		sum = sum + i;
	return sum;
}
