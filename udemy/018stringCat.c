#include <stdio.h>

void strcatFun(const char str1[], const char str2[], char result[]);

int main(void) {
	char arr1[] = "hello", arr2[] = "hi";
	char result[sizeof(arr1) + sizeof(arr2)];
	int i;
	strcatFun(arr1, arr2, result);
	printf("%s\n", result);
	return 0;
}

void strcatFun(const char str1[], const char str2[], char result[]) {
	int i, j;
	for (i = 0;  str1[i] != '\0'; ++i){
		result[i] = str1[i];
	}

	result[i] = ' ';

	for (j = i + 1, i = 0; str2[i] != '\0'; ++j, ++i) {
		result[j] = str2[i];
	}
	result[j] = '\0';
}
