/* Whats the output for the below program */
#include <stdio.h>

int main(void) {
	char str[10] = "abcdef";
	printf("\n%s", str+3);

	str[3] = 'b';
	printf("\n%s", str);

	str[3] = 100;
	printf("\n%s", str);

	str[3] = '\0';
	printf("\n%s", str);

	str[3] = '0';
	printf("\n%s", str);

	str[3] = 97;
	printf("\n%s", str);

	str[3] = 0;
	printf("\n%s", str);

	str[3] = 'd';
	printf("\n%s", str);

	return 0;
}
