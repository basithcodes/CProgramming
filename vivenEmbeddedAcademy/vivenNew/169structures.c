#include <stdio.h>

struct xxx {
	char a;
	short int b;
};

int main(void) {
	printf("sizeof struct xxx: %ld\n", 
			sizeof(struct xxx));
	return 0;
}
