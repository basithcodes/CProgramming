#include <stdio.h>

int main() {
	char str[10] = "basith";
	printf("Size: %ld\n", sizeof(str));
	printf("Array's Content: %s\n", str); // giving the address of str to %s
	printf("Address: %p\n", str); 
}
