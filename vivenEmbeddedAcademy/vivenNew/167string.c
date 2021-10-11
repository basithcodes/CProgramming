/* WAP to search a word and replace it with the specified word */

#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void ReplaceWord(char* str, char* deleteWord, char* insertWord);

int main(void) {
	char str[200];
	char deleteWord[20];
	char insertWord[20];

	printf("Enter a string: ");
	/* scanf("%200[^\n]s", str); */
	gets(str);

	printf("Which words you want to replace: ");
	gets(deleteWord);
	/* scanf("%20[^\n]s", deleteWord); */

	printf("Replace %s with ", deleteWord);
	gets(insertWord);
	/* scanf("%20[^\n]s", insertWord); */

	ReplaceWord(str, deleteWord, insertWord);
	printf("%s\n", str);

}

void ReplaceWord(char* str, char* deleteWord, char* insertWord) {
	int i, j;
	int wordCount, k;
	bool flag = 1;

	for(i = 0; str[i] != '\0'; i++) {
		for(j = i; str[j] != ' '; j++) {
			if (str[j] == deleteWord[j] && flag) {
				flag = 1;
				continue;
			} 
			else {
				flag = 0;
			}
		}
		if (flag) {
			// replace the word 
			wordCount = strlen(insertWord);
			for (k = 0; k < wordCount; k++, i++) {
				str[i] = insertWord[k];
			}
			break;
		} else {
			i = j;
			flag = 1;
		}
	}
}
