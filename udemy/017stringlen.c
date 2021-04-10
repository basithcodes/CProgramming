#include <stdio.h>

int strlenFun(char arr[]);

int main(void) {
	char arr[10] = "hello";
	int length = strlenFun(arr);
	printf("Length of array = %d\n", length);
	return 0;
}

int strlenFun(char arr[]) {
	int i, count = 0;
	for (i = 0; arr[i] != '\0'; ++i) {
		++count;
	}
	return count;
}
