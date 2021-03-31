#include <stdio.h>
int main() {
	int a = 7,b = 2;
	float c;
	/* scanf("%d", &b); */
	printf("%d\n", a/b); // 3
	printf("%f\n", (float)a/b); // 3
	c = a/b;
	printf("%f\n", c); // 3.000000
}
