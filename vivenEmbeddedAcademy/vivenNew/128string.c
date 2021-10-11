#include <stdio.h>
#include <string.h>

int main(void) {
	int i;
	char str[50] = "abcdef g";
	printf("%ld %ld %ld\n", strlen(str), sizeof(str), sizeof("abc"));
	return 0;
}
