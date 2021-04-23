/* Find the smallest element of the array and swap it with zeroth element */

#include <stdio.h>

void findSmallestElementAndSwap(int arr[], int arraySize);
void scanArrayValues(int arr[], int arraySize);
void printArrayValues(int arr[], int arraySize);

int main(void) {
	int arrayOfNumbers[10] = {8, 29, 453, 12, 4, 123, 1243, 98, 988, 87};
	int arraySize = sizeof(arrayOfNumbers)/sizeof(int);

	/* Print array values */
	printf("Before swapping\n");
	printArrayValues(arrayOfNumbers, arraySize);

	/* Swapping 0th element value with the least value in an array */
	findSmallestElementAndSwap(arrayOfNumbers, arraySize);

	/* Print array again to check for swapped values */
	printf("After swapping\n");
	printArrayValues(arrayOfNumbers, arraySize);

	printf("\n");

	return 0;
}

/* This function will find the least value in an array and swap 
 * it with 0the element of an array */
void findSmallestElementAndSwap(int array[], int arraySize) {
	int i, leastValueIndex = 0;
	for (i = 0; i < arraySize; i++) {
		if (array[leastValueIndex] <= array[i]) {
			continue;
		} else
			leastValueIndex = i;
	}

	printf("\n\nSmallest value is at index: %d\n\n", leastValueIndex);

	/* Swapping the smallest value with the 0th element of the array */
	int temp = array[0];
	array[0] = array[leastValueIndex];
	array[leastValueIndex] = temp;
}

/* This function will scan one dimensional array values */
void scanArrayValues(int arr[], int arraySize) {
	int index;
	for (index = 0; index < arraySize; index++) {
		scanf("%d", &arr[index]);
	}
}

/* This function will print one dimensional array values */
void printArrayValues(int arr[], int arraySize) {
	int index;
	for (index = 0; index < arraySize; index++) {
		printf("%d ", arr[index]);
	}
}
