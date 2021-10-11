/* This program will sort the list of elements using insertion sort */

#include <stdio.h>

#define ARRAY_SIZE 10

void printArrayValues(int arr[], int arraySize);

int main(void) {
	int arrayOfNumbers[ARRAY_SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i, j, tempVariable;

	printf("Before Sorting\n");
	printArrayValues(arrayOfNumbers, ARRAY_SIZE);

	/* Insertion sort technique */
	for (i = 0; i < ARRAY_SIZE-1; i++) {
		if (arrayOfNumbers[i+1] < arrayOfNumbers[i]) {
			tempVariable = arrayOfNumbers[i];
			arrayOfNumbers[i] = arrayOfNumbers[i+1];
			arrayOfNumbers[i+1] = tempVariable;
			for (j = i; j > 0; j--) {
				if (arrayOfNumbers[j] < arrayOfNumbers[j-1]) {
					tempVariable = arrayOfNumbers[j-1];
					arrayOfNumbers[j-1] = arrayOfNumbers[j];
					arrayOfNumbers[j] = tempVariable;
				}
			}
		}
	}
	printf("After Sorting\n");
	printArrayValues(arrayOfNumbers, ARRAY_SIZE);

	return 0;
}

/* This function will print one dimensional array values */
void printArrayValues(int arr[], int arraySize) {
	int index;
	for (index = 0; index < arraySize; index++) {
		printf("%d ", arr[index]);
	}
	printf("\n");
}
