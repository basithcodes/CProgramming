#include <stdio.h>
#include <stdio_ext.h>

int main(void) {
	char st[100];
	printf("Enter a string: ");
	scanf("%s\n", st);// it cannot read if space is encounterd
	printf("Ouput when string is scanned using scanf: ");
	puts(st);

	__fpurge(stdin); // clear the stdin buffer
	printf("Enter a string: ");
	gets(st); // its a dangerous function (see man page)
	printf("Ouput when string is scanned using gets: ");
	puts(st);
}
