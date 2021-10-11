#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[50] = "Pascal";
	char s2[50] = "windows";
	strcpy(s2+4, s1+2);
	puts(s1);
	puts(s2);
	return 0;
}
