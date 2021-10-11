#include <stdio.h>
#pragma warn -dup
#define A 10
#define A 20
#define pf printf

void main(void) {
	pf("A = %d\n", A);
}
