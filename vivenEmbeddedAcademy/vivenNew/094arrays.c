#include <stdio.h>

int main(void) {
	long arr[2][4] = {0l, 1l, 2l, 3l, 4l, 5l, 6l, 7l};

	printf("%ld\t", arr[1][2]);
	printf("%ld %ld\t", *(arr[1]+3), 3[arr[1]]);
	printf("%ld %ld %ld\t", *(*(arr+1)+2), *(1[arr]+2), 3[1[arr]]);

	return 0;
}
