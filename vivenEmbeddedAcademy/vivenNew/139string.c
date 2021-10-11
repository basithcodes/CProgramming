/* WAP to accept a string of paragraph and find the number of words in a given string */
#include <stdio.h>

int main(void) {
	char *str = "hello hi abdul basith im doing c programming";
	int i = 0;
	int wordsCount = 0;

	while (*(str+i)) {
		if(*(str+i) == 32) {
			wordsCount++;
		}
		i++;
	}
	printf("Words = %d\n", wordsCount+1);

	return 0;
}
