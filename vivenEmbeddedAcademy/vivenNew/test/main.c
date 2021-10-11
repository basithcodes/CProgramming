#include <stdio.h>
#include "header.h"

int main(void) {
	int a = 2,b = 3, res;
	res = add(a, b);
	printf("Addition of a and b = %d", res);
	hello();
	return 0;
}
