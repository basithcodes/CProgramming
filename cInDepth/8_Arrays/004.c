/* Program to find the largest and smallest number in an array */
/* My logic */
#include <stdio.h>
#define SIZE 11

int main() {
	int arr[SIZE];
	int i;
	int largest, smallest;

	/* First scan for the values of array */
	for (i = 0; i < SIZE-1; i++) {
		printf("Enter a value in arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}
	arr[i] = '\0';

	largest = arr[0];
	smallest = arr[0];

	/* Write a logic to find the largest and smallest */
	for (i = 0; arr[i+1] != '\0'; i++) {
		if ((largest < arr[i+1]))
			largest = arr[i+1];

		if ((smallest > arr[i+1]))
			smallest = arr[i+1];
	}
		printf("Largest = %d\nSmallest = %d\n", largest, smallest);
	return 0;
}

