/* Program to convert decimal number to binary */
#include <stdio.h>

#define SIZE 32

int main() {
	int bin[SIZE];
	int decimalNumber;
	int i,j;

	printf("Enter an integer: ");
	scanf("%d", &decimalNumber);

	for (i = 0; decimalNumber != 0; i++) {
		bin[i] = decimalNumber%2;
		decimalNumber /= 2;
	}
	j = i;
	for (i = j-1; i >= 0; i--) {
		printf("%d",bin[i]);
	}
	printf("\n");
	return 0;
}
