#include <stdio.h>

int main() {
	int a[5] = {11, 22, 33, 44, 55};
	int b[5] = {66, 77};
	b = a;
	printf("%d", b[1]);
	return 0;
}
