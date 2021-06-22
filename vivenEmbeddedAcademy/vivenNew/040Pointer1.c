#include <stdio.h>

int main(void)
{
	int a = 10;
	printf("Value of a = %d\n", a); // 10
	printf("Address of a = %u\n", &a); // address of a
	printf("Address of a = %u\n", *a); // It gives error
	printf("Address of a = %d\n", *&a); // It gives 
	return 0;
}
