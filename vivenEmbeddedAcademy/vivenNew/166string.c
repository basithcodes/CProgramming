/* WAP to accept two characters replace the first charater 
 * with second charater from the given string */
#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

int main(void) {

	char str[100];
	char chars[3];
	int lengthOfString;
	int i;
	// 1. Accept the string
	printf("Enter the string: ");
	scanf("%100[^\n]*c", str);
	__fpurge(stdin);

	// 2. Accept two characters
	for (i = 0; i < 2; i++) {
		printf("Enter the chars[%d]: ", i);
		scanf("%c", chars+i);
		__fpurge(stdin);
	}

	// 3. Replace the characters 
	// chars[0] --> replace this with chars[1]
	lengthOfString = strlen(str);
	for (i = 0; i < lengthOfString; ++i) {
		if (*(str+i) == chars[0]) {
			*(str+i) = chars[1];
		}
	}
	printf("%s\n", str);

	return 0;
}
