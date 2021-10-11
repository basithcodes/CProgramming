#include <string.h>
#include <ctype.h>
#include <stdio.h>

int main(void)
{
	/* Searching a character in a string */
	char text1[] = "The quick brown fox";
	char searchText1 = 'q';
	char *ptext1 = NULL;

	ptext1 = strchr(text1, searchText1);
	if(ptext1 != NULL) {
		printf("Address of text1: %p\n", text1);
		printf("Address of ptext1: %p\n", ptext1);
		printf("Character Found: ");
		printf("%c\n", *ptext1);
	}

	/* Searching a substring in a string */
	char text2[] = "The quick brown fox";
	char searchText2[] = "fox";
	char *ptext2 = NULL;
	ptext2 = strstr(text2, searchText2);
	if(ptext2 != NULL) {
		printf("Address of text2: %p\n", text2);
		printf("Address of ptext2: %p\n", ptext2);
		printf("Fount the sub string: %s\n", ptext2);
	}

	/* Tokenzing a string */
	char str[80] = "Hello my name is abdul basith";
	const char s[2] = " ";
	char *token;
	printf("str address = %p\n", str);

	/* Get the first token */
	token = strtok(str, s);
	printf("Token address = %p\n", token);

	/* Walk through other tokens */
	while (token != NULL) {
		printf("Token address = %p\n", token);
		printf("%s\n", token);
		token = strtok(NULL, s);
	}

	/* Analyzing a string */
	char buf[100];
	int bufIndex = 0;
	int ndigits = 0, nletters = 0, npunctuations = 0;
	int i;
	printf("Enter a string in buffer: ");
	scanf("%s", buf);
	while (buf[bufIndex]) {
		if(isalpha(buf[bufIndex]))
			++nletters;
		else if (isdigit(buf[bufIndex]))
			++ndigits;
		else if (ispunct(buf[bufIndex]))
			++npunctuations;
		++bufIndex;
	}
	printf("Your buffer contains: %d digits, %d letters, %d punctuations.\n", 
			ndigits, nletters, npunctuations);

	return 0;
}
