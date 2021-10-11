#include <stdio.h>

#define pf printf

int main(void) {
	pf("Hello\n");
#if 5 != 5>2
	pf("A\n");
	pf("B\n");
#else
	pf("x");
	pf("y");
#endif
	pf("Welcome\n");
	return 0;
}

