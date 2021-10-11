#include <stdio.h>
#include <string.h>

int stringToInteger(char *ptr);

int main() {
	char ptr[10] = "345";
	/* printf("Integer: %d", stringToInteger(ptr)); */
	fprintf(stdout, "Integer: %d\n", stringToInteger(ptr));

	return 0;
}

int stringToInteger(char *ptr) {
	short int digit;
	int sum = 0, multiple = 1;
	int len = strlen(ptr) - 1;
	for (int i = 0; ptr[i] != '\0'; i++) {
		digit = ptr[len - i] - 48;
		sum = sum + digit*multiple;
		multiple = multiple*10;
	}
	return sum;
}
