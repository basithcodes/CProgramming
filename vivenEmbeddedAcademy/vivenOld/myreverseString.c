#include <stdio.h>
#include <string.h>

void reverse(char *ptr);

int main() {
	char str[10] = "hardware";
	reverse(str);
	return 0;
}

void reverse(char *ptr) {
	short int len = strlen(ptr);
	char temp;
	int i, j = 1;
	printf("Before:%s\n", ptr);
	printf("%i\n", len);
	for (i = 0; i < len/2; i++) {
		temp = ptr[i];
		ptr[i] = ptr[len - j];
		ptr[len - j] = temp;
		j++;
	}
	/* ptr[i+1] = '\0'; */
	printf("%s\n", ptr);
}
