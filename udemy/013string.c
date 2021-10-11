#include <stdio.h>
#include <string.h>

int main(void) {
	int i;
	printf("strcmp(\"A\" , \"A\") is ");
	printf("%d\n", strcmp("A", "A")); // 0

	printf("strcmp(\"A\" , \"B\") is ");
	printf("%d\n", strcmp("A", "B")); // -1

	printf("strcmp(\"B\" , \"A\") is ");
	printf("%d\n", strcmp("B", "A")); // 1

	printf("strcmp(\"C\" , \"A\") is ");
	printf("%d\n", strcmp("C", "A")); // 1

	printf("strcmp(\"Z\" , \"a\") is ");
	printf("%d\n", strcmp("Z", "a")); // 1

	printf("strcmp(\"apples\" , \"apple\") is ");
	printf("%d\n", strcmp("apples", "apple")); // 1

	return 0;
}
