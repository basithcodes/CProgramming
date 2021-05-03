/* This uses selection sort technique to sort the given list */

#include <stdio.h>

#define ARRAY_SIZE 10

void printArrayValues(int arr[], int arraySize);

int main(void) {
	int arrayOfNumbers[ARRAY_SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i, j, tempVariable;


	printf("Before Sorting\n");
	printArrayValues(arrayOfNumbers, ARRAY_SIZE);

	/* Selection sort technique */
	for (i = 0; i < ARRAY_SIZE; i++) {
		for (j = i+1; j < ARRAY_SIZE; j++) {
			if (arrayOfNumbers[i] > arrayOfNumbers[j]) {
				tempVariable = arrayOfNumbers[i];
				arrayOfNumbers[i] = arrayOfNumbers[j];
				arrayOfNumbers[j] = tempVariable;
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
