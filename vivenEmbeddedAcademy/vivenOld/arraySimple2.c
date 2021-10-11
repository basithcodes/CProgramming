#include <stdio.h>
#include <stdio_ext.h>
int main() {
	char x;
	int y;
	printf("Enter an integer: ");
	scanf("%d", &y);
	__fpurge(stdin); // clearing the descriptor buffer or Resetting the buffer.
	printf("Enter a charcter: ");
	scanf("%c", &x);

}
