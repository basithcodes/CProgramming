#include <stdio.h>

int main(void)
{
	int k = 10;
	int * s;

	s = &k;

	printf("Value of k = %d", k); // 10
	printf("Address of k = %x", &k); // address of k
	printf("Value of k = %d", *&k); // value of k

	printf("Value of s = %u", s); // value of s
	printf("Address of s = %u", &s); // address of s
	printf("Value of s = %d", *&s); // value of s
	printf("Value of s = %d", *s); // value of k

	return 0;
}
