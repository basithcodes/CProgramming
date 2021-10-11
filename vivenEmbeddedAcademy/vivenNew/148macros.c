#include <stdio.h>

#define MUL(a,b) a*b

int main(void) {
	int i;
	i = MUL(2, 3);
	printf("i = %d\n", i);

	i = MUL(2+3, 2+3);
	printf("i = %d\n", i);

	return 0;
}
