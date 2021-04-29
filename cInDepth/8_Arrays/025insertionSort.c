/* This program uses insertion sort technique to sort the unsorted number list */
/* This logic is according to the explantion provided in c in depth book */
/* C in depth book logic is better than this logic, explantion and logic 
 * implimentation are different in the book */

#include <stdio.h>

#define MAX 10

void moveElementsToRight(int arr[], int leastIndex, int highIndex);
void printArrayValues(int arr[], int arraySize);

int main(void) {
	int i, j, temp;
	int arrayOfNumbers[MAX] = {1, 6, 2, 9 ,20, 12, 89, 29, 21, 33};
	printf("Before Sorting\n");
	printArrayValues(arrayOfNumbers, MAX);
	printf("\n");

	/* Insertion Sort Technique */
	for (i = 1; i < MAX; i++) {
		for (j = 0; j != i; j++) {
			if (arrayOfNumbers[i] < arrayOfNumbers[j]) {
				temp = arrayOfNumbers[i];
				moveElementsToRight(arrayOfNumbers, j, i);
				arrayOfNumbers[j] = temp;
				break;
			}
		}
	}
	printf("\n");
	printf("After Sorting\n");
	printArrayValues(arrayOfNumbers, MAX);
	return 0;
}

void moveElementsToRight(int arr[], int leastIndex, int highIndex) {
	int i = highIndex, j = leastIndex;
	while (i > j) {
		arr[i] = arr[i-1];
		--i;
	}
}

/* This function will print one dimensional array values */
void printArrayValues(int arr[], int arraySize) {
	int index;
	for (index = 0; index < arraySize; index++) {
		printf("%d ", arr[index]);
	}
	printf("\n");
}
