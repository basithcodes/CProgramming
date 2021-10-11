#include <stdio.h>

#define pf printf
#define TEST

int main(void) {
	pf("Hello\n");

#ifdef TEST // if test is not defined then 
	          // this wont be included in .i file
	pf("A\n");
	pf("B\n");
#endif

	pf("Welcome\n");
	return 0;
}
