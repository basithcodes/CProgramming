/* WAP to determine if the given word/string is palindrome or not */
#include <stdio.h>
#include <string.h>

_Bool PalindromeString(char* word, int sizeOfWord);

int main(void) {
	char word[20];
	int wordSize;
	int k;
	printf("Enter the string: ");
	fgets(word, 20, stdin); // it is also storing enter character

	wordSize = strlen(word)-2;
	printf("sizeOfWord = %d\n", wordSize);

	k = PalindromeString(word, wordSize);

	if (k == 0) {
		printf("Its not a palindrome\n");
	} else {
		printf("Its a palindrome\n");
	}
	return 0;
}

// It checks whether the word is palindrome or not
// by comparing two characters starting from extreme 
// corners 
_Bool PalindromeString(char *word, int sizeOfWord) {
	int i, j;

	int comparison = sizeOfWord/2;
	for(i = 0, j = sizeOfWord; i < comparison; ++i, --j) {
		if (*(word+i) == *(word+j)) {
			continue;
		} else {
			break;
		}
	}

	if (i == comparison) {
		return 1;
	}

	return 0;
}
