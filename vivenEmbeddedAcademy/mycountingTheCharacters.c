#include <stdio.h>

void countingSimilarCharacters(char *ptr);

int main() {
	char string[100];
	fprintf(stdout, "Enter the string: ");
	fscanf(stdin, "%s", string);
	countingSimilarCharacters(string);
	return 0;
}

void countingSimilarCharacters(char *ptr) {
	int count = 0, i, j;
	for (i = 0; ptr[i] != '\0'; i++) {
		count = 1;
		if (ptr[i] == '@')
			continue;
		for (j = i + 1; ptr[j] != '\0'; j++) {
			if (ptr[i] == ptr[j]) {
				count++;
				ptr[j] = '@';
			}
		}
		fprintf(stdout, "%c-%d\n", ptr[i], count);
	}
}
