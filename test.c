#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char *smash(const char **words, size_t count) {
	int maxsize = 0;
	for (int i = 0; i < count; i++) {
		maxsize += strlen(words[i]);
	}
	maxsize += count;
	/* printf("%d", maxsize); */

	char *v = (char *)malloc(maxsize);
	char s = ' ';
	char e = '\0';
	int i;
	for(i = 0; i < count; i++) {
		strcat(v, words[i]);
		if (*(v + strlen(words[i])) == '\0') {
			*(v + strlen(words[i])) = ' ';
		}
	}
	if (*(v + strlen(words[i])) == ' ') {
		*(v + strlen(words[i])) = '\0';
	}

	return v;
}

int main(void)
{
	const char *words[] = {"hello", "world"};
	char *received = smash(words, sizeof(words)/sizeof(words[0]));
	printf("%s", received);
	printf("\n");
	return 0;
}
