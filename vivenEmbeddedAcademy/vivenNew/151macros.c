#include <stdio.h>
#define pf printf 

int main(void) {
	pf("A\n");

#if 7>11
	pf("B");
	pf("C");
#endif

pf("Hello\n");
	return 0;
}
