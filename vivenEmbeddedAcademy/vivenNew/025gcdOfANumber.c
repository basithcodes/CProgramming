/* This program finds the GCD of a two numbers */
/* Functions with arguments and no return type */

#include <stdio.h>

void gcd(int num1, int num2);

int main(void) {
	int num1, num2;
	printf("Enter two numbers (num1,num2): ");
	scanf("%d,%d", &num1, &num2);
	gcd(num1, num2);
	return 0;
}

void gcd(int num1, int num2) {
	while (num1 != num2) {
		if (num1 > num2) {
			num1 = num1 - num2;
		} else if(num1 < num2) {
			num2 = num2 - num1;
		} else {
			break;
		}
	}
	printf("gcd is %d\n", num1);
}
