#include <stdio.h>

int main() {
	int i;
	unsigned int x = 384;

	printf("%x\n", (unsigned char)0xffffffff);
	printf("%d\n", (unsigned char)0xffffffff);
	printf("%d\n", (char)0xffffffff);
	printf("%d\n", (char)x);
	printf("%d\n", (unsigned char)x);

}
