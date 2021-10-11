#include <stdio.h>

#define A 10

int main(void) {
	int i;
	i = A; // A will be replaced with 10(in .i file)
	printf("%d %d", i, A); // A is replaced with 10(in .i file)
}

