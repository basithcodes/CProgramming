/* This program adds all elements of arrays */

/* My logic */
#include <stdio.h>

int main() {
	int arr[5];
	int i, sum = 0;

	printf("Enter 5 elements\n");
	for (i = 0; i < 5; i++) {
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	// Printing the values of i
		printf("%d\n", sum);

	return 0;
}
