#include <stdio.h>
#include <string.h>

int main() {
	char src[10] = "abdul";
	// char src[10] = {'a', 'b', 'd', 'u', 'l', '\0'};
	char dst[10];
	char *ptr = strcpy(dst, src); // copying data from one array to another array
	printf("Source: %s\n", src);
	printf("Destination: %s\n\n", dst);
	printf("Source Address: %p\nDestination Address: %p\nPointer Address: %p\n", 
			src, dst, ptr);
	return 0;
}
