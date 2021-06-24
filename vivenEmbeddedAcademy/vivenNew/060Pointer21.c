#include <stdio.h>

int main(void) {
	printf("Enter the values: ");
	int a;
	scanf("%d:%d", &a, (&a+1));
	printf("%d %d\n", a, *(&a + 1));
	return 0;
}

