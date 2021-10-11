#include <stdio.h>
char* stringCopyFun(char *destination, char* source);

int main() {
	char source[10] = "abdul";
	char destination[10];
	char *ptr;

	ptr = stringCopyFun(destination, source);
	printf("After executing string copy function:\nSource: %s\nDestination: %s\n\n", 
			source, destination);
	printf("Source Address: %p\nDestination Address: %p\nPointer Address: %p\n",
			source, destination, ptr);
	return 0;
	
}

char* stringCopyFun(char *destination, char* source) {
	int i;
	// copy all values from source to destination until null character
	for (i = 0; source[i] != '\0'; i++) 
		destination[i] = source[i];
	destination[i] = '\0'; // Adding null character at the end

	// return the address of the destination
	return destination;
}
