#include <stdio.h>

#define MAX 100

int main(void) {
#if MAX > 99
	printf("Compiled for array greater than 99.\n");
#endif
	return 0;
}
