#include <stdio.h>
#include <string.h>

short int mystringCompareFun(char *source1, char *source2);

int main() {
	char s1[20];
	char s2[20];
	int ret;

	printf("Enter string 1: ");
	scanf("%s", s1);

	printf("Enter string 2: ");
	scanf("%s", s2);

	ret = mystringCompareFun(s1, s2);

	if (ret == 0) 
		printf("Strings are same\n");
	else
		printf("Strings are not same\n");
}

short int mystringCompareFun(char *source1, char *source2) {
	short int len1, len2;
	len1 = strlen(source1);
	len2 = strlen(source1);

	if(len1 != len2)
		return len1-len2;
	else {
		for (int i = 0; source1[i] != '\0'; i++) {
			if (source1[i] != source2[i])
				return source1[i] - source2[i];
		}
		return 0;
	}
}
