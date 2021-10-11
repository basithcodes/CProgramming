#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[50] = "Helloabc";
	char s2[50] = "kirabc";
	int i;

	i = strcmp(s1+5, s2+3);
	printf("%d\n", i); // 0

	i = strcmp(s2+5, s1+3);
	printf("%d\n", i); // -9

	return 0;
}
