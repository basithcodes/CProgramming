#include <stdio.h>

int main(void) {
	int arr[5][8];
	printf("%ld %ld %ld\n", sizeof(arr), sizeof(arr[2]), sizeof(arr[1][0]));
	return 0;
}
