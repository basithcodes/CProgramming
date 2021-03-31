#include <stdio.h>

int main(void)
{
	int a;
	a = 5/2;
	printf("a = %d\n", a); // 2
	float b;
	b = 5/2;
	printf("b = %f\n", b); // 2.000000
	float c;
	c = (float)5/2;
	printf("c = %f\n", c); // 2.500000
	float p = 5, q = 2;
	p = (float)p/q;
	printf("p = %f\n", p); // 2.500000
	float m = 5, n = 2, o;
	o = m/n; // 2.500000
	printf("o = %f\n", o);
	return 0;
}
