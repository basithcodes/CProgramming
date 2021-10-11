#include <stdio.h>

int main(void) {
	char *ptr;
	char test = 'a';
	ptr = &test;

	printf("%p ", ptr);
	printf("%p ", &ptr);
	printf("%p ", &test);
	printf("%c \n", *ptr);

	return 0;
}
