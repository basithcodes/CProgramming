#include <stdio.h>

int main(void) {
	int arr[5] = {6, 16, 26, 36, 46};
	int *ptr;
	ptr = &arr[0];
	++ptr;
	++ptr;
	++*ptr;
	printf("%d\n", *ptr);

	return 0;
}
