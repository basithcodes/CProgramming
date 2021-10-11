#include <stdio.h>

#define A 10
#define pf printf
int main(void) {
	pf("A = %d\n", A);

#undef A
#define A 20
	pf("A = %d\n", A);
#undef A
	/* pf("A = %d\n", A); //error */
	return 0;
}
