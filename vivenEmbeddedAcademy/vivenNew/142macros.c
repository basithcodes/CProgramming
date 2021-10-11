#include <stdio.h>

#define VAX 1
#define SUN 0

int main(void) {
#ifdef VAX
	printf("This is VAX\n");
#endif

#ifdef SUN //???
	printf("This is SUN\n");
#endif

	return 0;
}
