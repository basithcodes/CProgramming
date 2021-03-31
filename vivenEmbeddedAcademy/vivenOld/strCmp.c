#include <stdio.h>
#include <string.h>

int main() {
	char s1[15];
	char s2[15];
	int ret;

	printf("Enter string 1: ");
	scanf("%s", s1);

	printf("Enter string 2: ");
	scanf("%s", s2);

	ret = strcmp(s1, s2);
	if (ret == 0) 
		printf("Strings are same\n");
	else
		printf("Strings are not same\n");
	
}
