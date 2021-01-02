/* 51. Write a function to find whether a character is alphanumberic. */

#include <stdio.h>
#include "inc/myfun.h"

int main() {
	char character;
	printf("Enter a character: ");
	scanf("%c", &character);
	if (alphaNumeric(character)) {
		printf("Yes! It's alpha numeric.\n");
	} else {
		printf("No! It's not alpha numeric.\n");
	}
}
