#include <stdio.h>
#include <string.h>

char* strCatFun(char* dst, char* src);
int main() {
	char *ptr;
	char src[10] = "Basith";
	char dst[20] = "Abdul";
	ptr = strCatFun(dst, src);
	printf("Returned: %s\n", ptr);
	return 0;
}

char* strCatFun(char* dst, char* src) {
	short int len_dst = strlen(dst);
	int i;
	for (i = 0; src[i] != '\0'; i++) 
		dst[len_dst + i] = src[i];
	return dst;
}
