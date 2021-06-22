#include <stdio.h>

int main(void) {
	int *p1, *p2;

	p1 = &p2; // Invalid
	p1 = p2; // Valid

	int *p = 100; // Invalid

	int *ip = (int *)100; // Valid

	return 0;
}
