#include <stdio.h>
#include <stdio_ext.h>
int main() {
	char x;
	int y;
	printf("Enter a charcter: ");
	scanf("%c", &x); 
	// We dont need fpurge here bcoz we 
	// can access 4 bytes after accessing 1 byte.
	printf("Enter an integer: ");
	scanf("%d", &y);
}

