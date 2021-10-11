#include <stdio.h>

typedef union {
	short int a;
	short int b;
	int c;
}yyy;

int main(void) {
	yyy p;
	p.a = 125;
	p.b = 200;
	p.c = 498;

	printf("Value: %d %d %d\n", p.a, p.b, p.c);
	printf("Sizes: %ld %ld %ld\n", sizeof(p.a), sizeof(p.b), sizeof(p.c));

	return 0;
}
