#include <stdio.h>

int main() {
	char x = 'A';
	char *ptr;
	ptr = &x;
	printf("%c\n", *ptr);
	*ptr = 'B';
	printf("%ld\n", sizeof(*ptr));
	printf("%ld\n", sizeof(ptr));
	printf("%p\n", ptr);
	printf("%c\n", *ptr);
	printf("%p\n", &ptr);
}

