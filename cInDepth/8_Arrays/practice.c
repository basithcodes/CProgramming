#include <stdio.h>
int main(void) {
	char string[10];
	printf("Enter a string: ");
	gets(string);
	printf("string var = %s", string);
	return 0;
}
