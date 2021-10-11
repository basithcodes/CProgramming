#include <stdio.h>
#include <string.h>

int main(void) {
	char s1[50] = "abcd";
	char s2[50] = "abcd";
	/* s2 = "abcd"; // its not possible ??? */
	int i;

	int s3[2] = {1};
	int s4[2] = {1};
	/* printf("s1 = %p s2 = %p abcd = %p\n", s1, s2, "abcd"); ???*/
	i = strcmp(s3, s4);
	printf("%d\n", i);
	i = strcmp(s1, s2);
	printf("%d\n", i);
	return 0;
}
