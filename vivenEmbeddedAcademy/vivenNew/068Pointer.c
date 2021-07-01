#include <stdio.h>

int main(void) {
	int arr[5] = {6, 16, 26, 36, 46};

	printf("%d %d %d %d\n", 
			arr[2], *(arr+2), *(2+arr), 2[arr]);

	return 0;
}
