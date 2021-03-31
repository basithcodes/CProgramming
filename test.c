#include<stdio.h>
struct test {
	char b;
	int a;
	float c;
	struct test *r;
};

int main() {
	int x = 10, y = 20;
	int z;
	z = x * y + 3.0/2 * 4;
	x++;
	char m;
	short int n;
	int *ptr_int;
	char *ptr_char;

	printf("char %ld\n", sizeof(m));
	printf("int %ld\n", sizeof(x));
	printf("ptr_int %ld\n", sizeof(ptr_int));
	printf("ptr_char %ld\n", sizeof(ptr_char));
	printf("short int %ld\n", sizeof(n));
	printf("short int %ld\n", sizeof(short int));
	printf("structure test %ld\n", sizeof(struct test));
	return 0;
}
