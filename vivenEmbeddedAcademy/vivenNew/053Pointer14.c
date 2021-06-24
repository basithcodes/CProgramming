#include <stdio.h>

int main(void)
{
	short int a = 10;
	float b = 25.8;

	short int * iptr = &a;
	float* fptr = &b;

	printf("\nFloat + 0: %p\n", fptr);
	printf("\nFloat + 1: %p\n", fptr+1);
	printf("\nFloat + 2: %p\n", fptr+2);

	return 0;
}
