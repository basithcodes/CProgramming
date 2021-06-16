#include <stdio.h>
int main() {
	int a = 1, b;
	b = a, ++a, ++a;
	printf("\n%d %d", a,b);
	a = 1;
	b = a++, ++a, ++a;
	printf("\n%d %d", a,b);
	a = 1;
	b = ++a, ++a, ++a;
	printf("\n%d %d", a,b);
	a = 1;
	b = (++a, ++a, ++a);
	printf("\n%d %d", a,b);

	return 0;
}
