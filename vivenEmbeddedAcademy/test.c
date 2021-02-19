/* Write a program to set continuous 3 bits from 4th bit position */
#include <stdio.h>

int main() {
	char mask = 0x07;
	int x = 0x0056;
	int bitposition;

	printf("Enter a bit position from which you want to write 3 bits: ");
	scanf("%d", &bitposition);
	printf("Before changing x: %x\n", x);
	x = x | mask << bitposition;
	printf("After changing x: %x\n", x);
}
