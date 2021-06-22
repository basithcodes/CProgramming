#include <stdio.h>

int main(void) {
	int x = 0x12345678;
	// data is stored in offset address
	printf("Value = %x\n", x);
	printf("%x\n", &x); // Shows offset address
	// %p --> p stands for pointer
	printf("%p\n", &x); // Shows segment and offset address
	return 0;
}
