/* WAP to accept a word, delete the word from a given string */

#include <stdio.h>

void DeleteWord(char* st, char* del);

int main(void) {
	char st[100], del[20];

	// Accept the string
	printf("Enter the string: ");
	/* scanf("%100[^\n]*c", st); */
	gets(st);

	// Ask which word to delete from the string
	printf("Which word do you want to delete: ");
	/* scanf("%20[^\n]s", del); */
	gets(del);

	// Delete the word
	DeleteWord(st, del);
	printf("New string: %s\n\n", st);
	return 0;
}

void DeleteWord(char* st, char* del) {
	int firstLetter = 0, lastLetter = 0, k = 0, m;
	int temp;
	int letterCount;
	while(*(st+firstLetter) != '\0') {
		while(*(st+lastLetter) != 32 && *(st+lastLetter) != '\0') {
			lastLetter++;
		}
		letterCount = --lastLetter - firstLetter;

		// compare the string words(characters) with del words(characters)
		// if del words and word in string are equal then letterCount will become zero
		// do the comparison till letterCount becomes zero
		// if any letter is not equal then it will exit 
		temp = firstLetter;
		while (letterCount) {
			if (*(st+temp) == *(del+k)) {
				k++;
				--letterCount;
				++temp;
			} else {
				k = 0;
				break;
			}
		}
		// if all compared characters are same then letterCount goes to zero
		// then that word can be deleted(for now im putting zeros)
		if (letterCount == 0) {
			for (m = firstLetter; m <= lastLetter; ++m) {
				*(st+m) = 0;
			}
			break;
		}
		firstLetter = lastLetter+=2;
	}
}
