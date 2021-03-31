#include <stdio.h>

void integerToString(int number, char *ptr);

int main() {
	int number;
	char *ptr;
	printf("Enter a number: ");
	fscanf(stdin, "%d", &number);
	integerToString(number, ptr);
	fprintf(stdout, "%s\n", ptr);
	return 0;
}


void integerToString(int number, char *ptr) {
	int i, remainder, temp = 0;
	// flipping the digits in while
	while (number>0) {
		remainder = number % 10;
		number /= 10;
		temp = temp * 10 + remainder;
	}
	// flipping the digits and converting it to character
	for (i = 0; temp > 0; i++) {
		ptr[i] = temp % 10 + 48;
		temp /= 10;
	}
	ptr[i] = '\0';
}
