#include <stdio.h>
#include <string.h>

int main() {
	char src[10] = "Basith";
	char dst[20] = "Abdul";

	char *ptr = strcat(dst, src);

	fprintf(stdout, "%p - %s\n", ptr, ptr);
	fprintf(stdout, "%p - %s\n", dst, dst);
}
