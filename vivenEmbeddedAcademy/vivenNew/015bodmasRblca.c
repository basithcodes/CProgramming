#include <stdio.h>

int main(void)
{
	int a = 10, b = 9, c = 8, d = 7, e = 6, f = 5, g;
	g = a * b - e + f > d - c % a + d < a;
	printf("g = %d\n", g); // 1
	g = a * e + c && d > e == e + d - b & 4 + a;
	printf("g = %d\n", g); // 0
	g = e * a - b & c + e & d | a < f;
	printf("g = %d\n", g); // 2
	return 0;
}
