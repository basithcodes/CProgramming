#include <stdio.h>

int fun(int number) {
	if (number == 1) {
		return 1;
	} else {
		return 1 + fun(number-1);
	}
}

int main() {
	int number;
	printf("Enter a number: ");
	scanf("%d", &number);
	printf("%d\n", fun(number));
	return 0;
}
