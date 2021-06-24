//Compile it with 16 bit compiler
#include <stdio.h>

int main() {
	int a = 300*300/300;
	printf("Value: %d\n", a);
	int *iptr = &a;
	printf("Address: %p\n", iptr);
	/* printf("Address: %p\n", iptr+iptr); */
	return 0;
}
