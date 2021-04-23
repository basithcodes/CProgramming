/* This program converts any decimal number to binary, octal and hex depending */
/* on the user choice */

void decimalToBinary(int number);
void decimalToOctal(int number);
void decimalToHexadecimal(int number);

#include <stdio.h>
#include <string.h>

int main(void) {
	decimalToBinary(32);
	decimalToOctal(500);
	decimalToHexadecimal(15);
	return 0;
}

void decimalToBinary(int number) {
	char binary[64];
	int remainder, temp, i, count = 0, length;

	temp = number;

	for (i = 0; temp > 0; i++) {
		remainder = temp % 2;
		temp = temp / 2;
		binary[i] = (char)remainder;
		count++;
	}

	for (i = count-1; i >= 0; --i) {
		printf("%d", binary[i]);
	}
	printf("\n");
}

void decimalToOctal(int number) {
	char binary[64];
	int remainder, temp, i, count = 0, length;

	temp = number;

	for (i = 0; temp != 0; i++) {
		remainder = temp % 8;
		temp = temp / 8;
		binary[i] = (char)remainder;
		count++;
	}
	for (i = count-1; i >= 0; --i) {
		printf("%d", binary[i]);
	}
	printf("\n");
}

void decimalToHexadecimal(int number) {
	char binary[64];
	int remainder, temp, i, count = 0, length;

	temp = number;

	for (i = 0; temp > 0; i++) {
		remainder = temp % 16;
		temp = temp / 16;
		binary[i] = (char)remainder;
		count++;
	}

	for (i = count-1; i >= 0; --i) {
		printf("%x", binary[i]);
	}
	printf("\n");
}
