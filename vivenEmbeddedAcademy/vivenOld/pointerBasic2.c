#include <stdio.h>

void readFun(int* num1, int* num2);
void swap(int* num1, int* num2);
void displayFun(int* num1, int* num2);

int main() {
	int x, y;
	int i = 3;

	/* readFun(&x, &y); */
	/* swap(&x, &y); */
	/* displayFun(&x, &y); */
	return 0;
}

void readFun(int* num1, int* num2) {
	printf("Enter two numbers: ");
	scanf("%d %d", num1, num2);
}

void swap(int* num1, int* num2) {
	int temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

void displayFun(int* num1, int* num2) {
	printf("num1: %d\nnum2: %d\n", *num1, *num2);
}

