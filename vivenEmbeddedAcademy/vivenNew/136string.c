#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[50] = "";
	char s2[50] = "abcd";
	int i;

	i = strcmp(s1, s2);
	printf("%d\n", i); // 97

	i = strcmp(s2, s1);
	printf("%d\n", i); // -97

	return 0;
}
