#include <stdio.h>

void f1(int *address);
void f2(int *address);

int main() {
	int i = 20, *j = &i;
	f1(j);
	*j += 10;
	f2(j);
	printf("%d %d\n", i, *j);
	return 0;
}

void f1(int *address) {
	*address += 15;
}

void f2(int *address) {
	int m = *address, *n = &m;
	*n += 10;
}
