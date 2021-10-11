/* WAP to reverse the letters in words and reverse the words 
 * positions as well 
 * Input: hello hi abdul 
 * output: ludba ih olleh
 * output: abdul hi hello */

#include <stdio.h>
#include <string.h>

void reverseLettersInString(char*);
void reverseTheString(char*);

int main(void) {
	char userBuffer[50] = "Hello hi abdul";

	reverseTheString(userBuffer);
	printf("%s\n\n", userBuffer); 
	reverseLettersInString(userBuffer);
	printf("%s\n\n", userBuffer);

	return 0;
}

void reverseLettersInString(char*userBuffer) {

	int i = 0, j = 0, firstLetter = 0, lastLetter = 0, k = 0;

	// Reverse the letters in words
	for(i = 0; userBuffer[i] != '\0'; i++) {
		// know the last letter
		while (userBuffer[j] != ' ' && userBuffer[j] != '\0') {
			++j;
		}
		lastLetter = --j;

		k = (lastLetter-firstLetter+1)/2;

		while(k) {
			userBuffer[firstLetter] ^= userBuffer[lastLetter] ^= userBuffer[firstLetter] ^= userBuffer[lastLetter];
			++firstLetter;
			--lastLetter;
			--k;
		}

		i = j;
		j += 2;
		firstLetter = lastLetter = j;
	}

}

void reverseTheString(char* userBuffer) {
	int numberOfCharacters, i, j;
	char temp;

	// Store the string in reverse order
	numberOfCharacters = strlen(userBuffer);

	int loopTill = (numberOfCharacters)/2;

	for(i = 0, j = numberOfCharacters-1; j >= loopTill;i++, j--) {
		temp = *(userBuffer+i);
		*(userBuffer+i) = *(userBuffer+j);
		*(userBuffer+j) = temp;
	}
}
