/* WAP to reverse letters in words  */

#include <stdio.h>

int main(void) {
	int firstLetter = 0, lastLetter = 0, i = 0, j = 0, k = 0;
	char userBuffer[50] = "This is a data 123 ";

	for(i = 0; userBuffer[i] != '\0'; i++) {

		// Know the position of last letter
		while(userBuffer[j] != ' ' && userBuffer[j] != '\0') {
			++j;
		}
		lastLetter = --j;

		// reverse the letter in words 
		k = (lastLetter-firstLetter+1)/2;
		while(k) {
			userBuffer[firstLetter] ^= userBuffer[lastLetter] ^= userBuffer[firstLetter] ^= userBuffer[lastLetter];
			--k;
			++firstLetter;
			--lastLetter;
		}

		i = j;
		j = j + 2;
		firstLetter = lastLetter = j;
	}

	printf("%s\n", userBuffer);
	return 0;
}
