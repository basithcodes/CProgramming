#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define SIZE 50
#define FINDPRIMETILL 100
int main(int argc, char *argv[])
{
	int i, j = 4, p;
	bool isPrime;
	int primeNumbers[SIZE] = {2,3};
	int primeNumbersIndex = 2;
	for (p = 5; p <= FINDPRIMETILL; p = p + 2) {

		isPrime = true;

		for (i = 1; isPrime && p/primeNumbers[i] >= primeNumbers[i]; ++i) {
			if (p % primeNumbers[i] == 0) {
				isPrime = false;
			}
		}
		if (isPrime == true) {
			primeNumbers[primeNumbersIndex] = p;
			++primeNumbersIndex;
		}
	}

	for (i = 0; i < primeNumbersIndex; ++i) {
		printf("%i ", primeNumbers[i]);
	}
	printf("\n");
	return 0;
}
