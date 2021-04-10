#include <stdio.h>

int main(void) {
	int a = 1;
	int e = ++a + ++a + ++a;
	printf("e = %d\na = %d\n", e, a);
	return 0;
}
