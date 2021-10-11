#include <stdio.h>
#include <string.h>

int main(void) {
	char st[50];
	int i;
	puts("Enter the string: ");
	gets(st);
	i = strlen(st);
	printf("%d\n", i);
	printf("%ld\n", strlen(st));

	return 0;
}

