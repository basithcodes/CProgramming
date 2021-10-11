#include <stdio.h>

struct example0 {
	char x;
	int y;
	char z;
};

struct example1 {
	char x;
	int y;
	char z;
}__attribute__((packed));

int main(void) {
	printf("%ld\n", sizeof(struct example0));
	printf("%ld\n", sizeof(struct example1));
	return 0;
}
