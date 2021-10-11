#include <stdio.h>

void printUpto(int i);
void factOfNumber(int i);

int main(void) {
	int i = 1;
	printUpto(5);
	factOfNumber(5);

	return 0;
}

void printUpto(int i) {
	int max = i, min = 1;
repeat:
	printf("%d ", min);
	min++;
	if (min <= max) {
		goto repeat;
	}
	printf("\n");
}

void factOfNumber(int i) {
	int fa = 1;
	int max = i, min = 2;
fact:
	fa = fa*min;
	++min;
	if (min <= max) {
		goto fact;
	}
	printf("fact = %d\n", fa);
}
