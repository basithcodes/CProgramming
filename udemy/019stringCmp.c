#include <stdio.h>
#include <string.h>

_Bool stringCmp(const char str1[], const char str2[]);

int main(void) {
	char arr1[10] = "hello";
	char arr2[10] = "hllo";
	short int stringComaparisonValue = stringCmp(arr1, arr2);
	printf("stringComaparisonValue = %d\n", stringComaparisonValue);
	switch (stringComaparisonValue) {
		case 0:
			printf("Strings are equal\n");
			break;
		case 1:
			printf("Strings are not same\n");
			break;
		default:
			printf("Invalid Value\n");
	}
	return 0;
}

_Bool stringCmp(const char str1[], const char str2[]) {
	int i;
	for (i = 0; str1[i] != '\0' || str2[i] != '\0'; ++i) {
		if(str1[i] == str2[i]) {
			continue;
		}
		else 
			return 1;
	}
	return 0;
}
