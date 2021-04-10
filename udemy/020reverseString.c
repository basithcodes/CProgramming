#include <string.h>
#include <stdio.h>

void strReverse(void);

int main(void) {
	strReverse();
	return 0;
}

void strReverse() {
	int i = 0;
	unsigned long size = 0;
	char string[10], temp[10];
	printf("Enter a string: ");
	scanf("%s", string);
	size = strlen(string);
	for (i = 0; i < size/2; ++i) {
		temp[i] = string[i];
		string[i] = string[size - i - 1];
		string[size - i - 1] = temp[i];
	}
	string[size] = '\0';
	printf("%s\n", string);
}
