#include <ctype.h>
#include <stdio.h>
#include <string.h>

int main(void)
{
	char text[100] = "Hello how are you!";
	char substring[40];
	int i;

	printf("Enter the string to be searched: ");
	scanf("%s", substring);

	printf("Initiallized string: %s\n", text);
	printf("String to be searched: %s\n\n", substring);

	printf("The second string %s found in first string.\n",
			strstr(text, substring) == NULL?("Was not"):("Was"));

	printf("Converting both strings to upper case: \n\n");
	for (i = 0; text[i] != '\0'; ++i) {
		text[i] = (char)toupper(text[i]);
		substring[i] = (char)toupper(substring[i]);
	}

	printf("To uppercase(text): %s\n", text);
	printf("To uppercase(substring): %s\n\n", substring);

	printf("The second string %s found in first string.\n",
			strstr(text, substring) == NULL?("Was not"):("Was"));

	return 0;
}
