#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[50] = "Hello";
	char s2[50] = "Cobol";

	strcat(s2+3,s1+3);
	puts(s1);
	puts(s2);

	return 0;
}

