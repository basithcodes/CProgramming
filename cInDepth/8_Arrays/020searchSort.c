/* This program will search the values in a one dimensional array and 
 * sort it using search sort technique*/

#include <stdio.h>
void searchSort(int arrayOfNumbers[], int arraySize);
void printArrayValues(int arrayOfNumbers[], int arraySize);

int main(void) {
	int arrayOfNumbers[10] = {4, 2, 5, 6, 1, 8, 9, 10, 0, 21};
	int arraySize = sizeof(arrayOfNumbers)/sizeof(int);

	/* Sort the array and print the values */
	printf("Before Sorting\n");
	printArrayValues(arrayOfNumbers, arraySize);

	searchSort(arrayOfNumbers, arraySize);

	printf("\nAfter Sorting\n");
	printArrayValues(arrayOfNumbers, arraySize);

	return 0;
}

/* Search and Sort Technique */
void searchSort(int arrayOfNumbers[], int arraySize) {
	int j, index, smallestNumber, lastElement = arraySize - 1, temp, smallestNumberPosition;
	for (index = 0; index <= lastElement; index++) {
		smallestNumber = arrayOfNumbers[index];
		smallestNumberPosition = index;
		for (j = index; j <= lastElement; j++) {
			if (arrayOfNumbers[j] <= smallestNumber) {
				smallestNumber = arrayOfNumbers[j];
				smallestNumberPosition = j;
			/* } else if(arrayOfNumbers[j] >= smallestNumber) { */
			/*   continue; */
			}
		}

		/* Swapping the values */
		temp = arrayOfNumbers[index];
		arrayOfNumbers[index] = smallestNumber;
		arrayOfNumbers[smallestNumberPosition] = temp;
	}
}

/* This function will print one dimensional array values */
void printArrayValues(int arrayOfNumbers[], int arraySize) {
	int index;
	for (index = 0; index < arraySize; index++) {
		printf("%d ", arrayOfNumbers[index]);
	}
	printf("\n");
}
