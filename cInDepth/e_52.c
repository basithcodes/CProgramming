/* 52. Write a function that accepts a charcter, if the character is a lower case */
/*     alphabet its upper case equivalent is returned otherwise the unchanged */
/*     character is returned.  */
#include <stdio.h>
#include "inc/myfun.h"

int main() {
	char character;
	printf("Enter a character: ");
	scanf("%c", &character);
	printf("%c\n", sendUpperCaseCharacter(character));
}
