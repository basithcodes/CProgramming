#include <stdio.h>

void display(char *ptr) {
	printf("\n%s", ptr);
	if (*ptr) {
		display(ptr+1);
	}
	printf("\n%s", ptr);
}

int main(void) {
	char str[10] = "Hello";
	display(str);
}
