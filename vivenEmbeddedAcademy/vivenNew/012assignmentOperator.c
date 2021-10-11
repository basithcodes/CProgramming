#include <stdio.h>

int main(void)
{
	int a = 8;
	printf("%d\n", a); // 8
	a += 2;
	printf("%d\n", a); // 10
	a -= 2;
	printf("%d\n", a); // 8
	a *= 2;
	printf("%d\n", a); // 16 
	a /= 2;
	printf("%d\n", a); // 8
	a %= 2;
	printf("%d\n", a); // 0
	a = 8;
	a &= 2;
	printf("%d\n", a); // 0
	a = 8;
	a |= 2;
	printf("%d\n", a); // 10
	a <<= 2;
	printf("%d\n", a); // 40
	a >>= 3;
	printf("%d\n", a); // 5
	
	return 0;
}
