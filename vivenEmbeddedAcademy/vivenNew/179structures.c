#include <stdio.h>

struct X {
	int a;
	int h,i,j;
};

struct Y {
	int b;
	int m;
	int n;
	struct X x1;
};

struct Z {
	int c;
	struct Y y1;
};

int main(void) {
	struct Z z1;

	z1.c = 30;
	z1.y1.b = 20;
	z1.y1.x1.a = 10;

	printf("%d %d %d\n", z1.c, z1.y1.b, z1.y1.x1.a);

	printf("%ld\n", sizeof(struct X));
	printf("%ld\n", sizeof(struct Y));
	printf("%ld\n", sizeof(struct Z));

	printf("%ld\n", sizeof(z1));
	printf("%ld\n", sizeof(z1.y1));

	return 0;
}
