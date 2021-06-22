#include <stdio.h>

int countDigitsInNumber(int number);
int isNumberArmstrong(int number);
int raisedToPower(int number, int power);

int main(void) {
	int number, compareWithOriginalNumber;
	printf("Enter a number: ");
	scanf("%d", &number);
	compareWithOriginalNumber = isNumberArmstrong(number);
	if(compareWithOriginalNumber == number) {
		printf("Number is armstrong\n");
	} else {
		printf("Number is not an armstrong\n");
	}
	return 0;
}

int countDigitsInNumber(int number) {
	if (number == 0) {
		return 1;
	}

	int count = 0;
	while (number != 0) {
		number /= 10;
		count++;
	}
	printf("Number of digits = %d", count);
	return count;
}

int isNumberArmstrong(int number) {
	int power = countDigitsInNumber(number);
	int i, remainder, tempNumber = number, sum = 0;

	while(tempNumber != 0) {
		remainder = tempNumber % 10;
		sum = sum + raisedToPower(remainder, power);
		tempNumber = tempNumber/10;
	}
	printf("Sum of all calculated numbers = %d\n", sum);
	return sum;
}

int raisedToPower(int number, int power) {
	int product = 1, i, loopTill = power;
	while (loopTill) {
		product = product * number;
		loopTill--;
	}
	printf("\nproduct of individual number = %d\n", product);
	return product;
}
