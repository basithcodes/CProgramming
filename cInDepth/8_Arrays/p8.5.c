/* Program to reverse the elements of an array */
/* My logic */

#include <stdio.h>
#define SIZE 10

int main() {
	int arr[SIZE] = {1,2,3,4,58,3,4,5,8,10};
	int i;

	//swapping arrays
	for (i = 0; i < SIZE/2; i++) {
		int temp;
		temp = arr[SIZE - 1 - i];
		arr[SIZE- 1 - i] = arr[i];
		arr[i] = temp;
	}
	// Printing array
	for (i = 0; i < SIZE; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}
