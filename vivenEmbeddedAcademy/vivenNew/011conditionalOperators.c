/* Write a c program to find the biggest of three numbers using conditional operators */
#include <stdio.h>

int main(void)
{
	int a, b, c, d;
	printf("Enter a three numbers (a:b:c): ");
	scanf("%d:%d:%d", &a, &b, &c);
	d = a>b?(a>c?a:c):(b>c?b:c);
	printf("Biggest Number: %d\n", d);
	return 0;
}
