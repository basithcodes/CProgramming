#include <stdio.h>
int main(void) {
	int a[] = {10, 20, 30, 40, 50};
	int i = 3, x;
	x = 1*a[--i] + 2*a[--i] + 3*a[--i];
	printf("%d\n", x);
	return 0;
}
