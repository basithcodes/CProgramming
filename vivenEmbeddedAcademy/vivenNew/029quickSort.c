/* This program will sort the list of elements using quick sort technique */

#include <stdio.h>

#define ARRAY_SIZE 50

void printArrayValues(int arr[], int arraySize);
void quickSort(int arrayOfNumbers[], int lowIndex, int highIndex);

int main(void) {
	int arrayOfNumbers[ARRAY_SIZE] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
	int i=0, j=ARRAY_SIZE-1, pivot=0, tempVariable;

	printf("Before Sorting\n");
	printArrayValues(arrayOfNumbers, ARRAY_SIZE);

	/* Sorting elements*/
	quickSort(arrayOfNumbers, i, j);

	printf("After Sorting\n");
	printArrayValues(arrayOfNumbers, ARRAY_SIZE);
	return 0;
}

/* Quick sort technique */
void quickSort(int arrayOfNumbers[], int lowIndex, int highIndex) {
	int i, j, pivot, tempVariable;
	i = pivot = lowIndex; // i and pivot points to first element
	j = highIndex; // j points to last element
	while (i < j) {
		while (arrayOfNumbers[i] <= arrayOfNumbers[pivot]) {
			++i;
		}
		while (arrayOfNumbers[j] > arrayOfNumbers[pivot]) {
			--j;
		}
	} // While continues until i, j cross each other

	/* If i, j cross each other then swap pivot and arrayOfNumbers[i] value */
	if (i < j) {
		tempVariable = arrayOfNumbers[i];
		arrayOfNumbers[i] = arrayOfNumbers[pivot];
		arrayOfNumbers[pivot] = tempVariable;
	} 
	quickSort(arrayOfNumbers, 0, j-1);
	quickSort(arrayOfNumbers, j+1, highIndex);
}

/* This function will print one dimensional array values */
void printArrayValues(int arr[], int arraySize) {
	int index;
	for (index = 0; index < arraySize; index++) {
		printf("%d ", arr[index]);
	}
	printf("\n");
}
