#include <stdio.h>

unsigned long int factFun(unsigned long int *ptrNumber);

int main() {
	unsigned long int fact;
	printf("Enter a number to find its factorial: ");
	scanf("%ld", &fact);
	printf("%ld\n", factFun(&fact));

}

unsigned long int factFun(unsigned long int *ptrNumber) {
	int temp = *ptrNumber;
	int fact = 1;
	while (temp > 0) {
		fact = fact * temp;
		temp--;
	}
	return fact;
}
