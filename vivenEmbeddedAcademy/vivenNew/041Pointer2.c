#include <stdio.h>

int main(void)
{
	int k = 10;
	int * s;

	int * p ;
	s = &k;
	p = &s;

	printf("Value of *p = %p\n", *p); // 10
	printf("Value of k = %d\n", k); // 10
	printf("Address of k = %p\n", &k); // address of k
	printf("Value of k = %d\n", *&k); // value of k

	printf("Value of s = %p\n", s); // value of s
	printf("Address of s = %p\n", &s); // address of s
	printf("Value of s = %p\n", *&s); // value of s
	printf("Value of s = %d\n", *s); // value of k

	return 0;
}
