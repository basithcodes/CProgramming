#include <stdio.h>

struct yyy {
	char a;
	short int b;
	int c;
};

int main(void) {
	printf("sizeof struct yyy: %ld\n", 
			sizeof(struct yyy));
	return 0;
}
