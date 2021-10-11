#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[50] = "Kiran Srinivas";
	char s2[50] = "Kiran srinivas";
	int i;

	i = strcmp(s1, s2);
	printf("%d\n", i); // -32

	return 0;
}
