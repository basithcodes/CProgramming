#include <stdio.h>

int main(void)
{
	unsigned int x = 1;

	char *cptr = (char*)&x;

	if(*cptr) {
		printf("Little Endian Machine\n");
	} else {
		printf("Big Endian Machine\n");
	}
	return 0;
}
