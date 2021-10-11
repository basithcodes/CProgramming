#include <stdio.h>

int main(void) {
	char s1[50] = "Hello";
	char s2[50] = "Cobol";
	char *s3 = "abdul";
	char *s4;
	/* s1 = s2; // error because strings cannot be equated directly */
	s4 = s3; // this is possible because arrays
	puts(s1);
	puts(s2);
	puts(s4);
	s4 = "hi";
	puts(s4);
	// the problem is strings are still in the memory
	return 0;
}
