#include <stdio.h>

void arrangeCharInAscending(char *ptr);

int main() {
	char string[100]; 
	fprintf(stdout, "Enter the string: ");
	fscanf(stdin, "%s", string);
	arrangeCharInAscending(string);
	return 0;
}

void arrangeCharInAscending(char *ptr) {
	int i, j;
	char temp;
	for (i = 0; i < ptr[i]; i++) {
		for (j = i + 1; j < ptr[j]; j++) {
			if (ptr[i] > ptr[j]) {
				temp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = temp;
			}
		}
	}
	fprintf(stdout, "%s\n", ptr);
}
