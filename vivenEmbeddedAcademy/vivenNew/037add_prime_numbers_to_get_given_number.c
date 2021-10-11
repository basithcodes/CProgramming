#include <stdio.h>

int GeneratePrimeNumbers(int initialValue, int finalValue, int *);
void displayNumber(int *, int numberOfValuesInMemory);

int main(void)
{
	int initialValue, finalValue;
	int *primeNumbers;
	int response;

	printf("Enter initial and final value of prime number(num1:num2)\n");
	scanf("%d:%d", &initialValue, &finalValue);

	response = GeneratePrimeNumbers(initialValue, finalValue, primeNumbers);

	if (response < 0) {
		return -1;
	}

	displayNumber(primeNumbers, response);

	return 0;
}

int GeneratePrimeNumbers(int initialValue, int finalValue, int *iptr) {
	int count = 0, j = 0, value = 0;
	if (initialValue == 0 || initialValue == 1 || initialValue == 2) {
		initialValue = 3;
		*iptr = 2;
		value++;
	}

	if(iptr==NULL) {
		printf("Address is incorrect\n");
		return -1;
	} else if (initialValue < 0 || finalValue < 0) {
		printf("Value cannot be negative\n");
		return -1;
	}

	while (initialValue <= finalValue) {
		if (initialValue / 2 == 0) {
			initialValue++;
			continue;
		}

		for (int i = 3; i < initialValue && !count; i++) {
			if (initialValue/i == 0)  {
				count++;
				initialValue++;
			}
		}

		// Store the value in the memory
		// Count how many values are stored
		if (count == 0) {
			*(iptr + (++j)) = initialValue;
			initialValue++;
			count = 0;
			value++;
		}
	}
	return value;
}

void displayNumber(int *number, int numberOfValuesInMemory) {
	int i;
	for (i = 0; i < numberOfValuesInMemory; i++) {
		printf("%d ", *(number+i));
	}
	printf("\n");
}
