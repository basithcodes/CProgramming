#include <stdio.h>

void swap(int *number1, int *number2);

int main() {
	int a, b;
	printf("Enter two values(a:b): ");
	scanf("%d:%d", &a, &b);
	printf("Before Swap:\t\na = %d\tb = %d\n", a,b);
	swap(&a, &b);
	printf("After Swap:\t\na = %d\tb = %d\n", a,b);
	return 0;
}

void swap(int *number1, int *number2) {
	/* *number1 = *number1 + *number2; */
	/* *number2 = *number1 - *number2; */
	/* *number1 = *number1 - *number2; */
	*number1 ^= *number2 ^= *number1 ^= *number2;
}
