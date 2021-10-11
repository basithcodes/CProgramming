#include <stdio.h>

int main(void) {
	int arr[4][8] = {5, 55, 555};
	printf("%lu", &arr[3][4]-&arr[1][2]);
	return 0;
}

