/* This program will insert the elements in an already sorted array list. */

#include <stdio.h>

#define MAX 10

void printArrayValues(int arr[], int arraySize);

int main(void) {
	int arrayOfNumbers[MAX] = {1, 2, 4, 5, 6, 7, 8, 9, 10};
	int valueToInsert, i;

	/* Show the user array list */
	printArrayValues(arrayOfNumbers, MAX);

	printf("Value to insert: ");
	scanf("%d", &valueToInsert);

	/* Compare from maximum value of the list */
	/* Assume the last element is empty in array so dont compare valueToInsert 
	 * variable with it */
	for (i = MAX-2; valueToInsert < arrayOfNumbers[i]; i--) {
		arrayOfNumbers[i+1] = arrayOfNumbers[i];
	}

	/* Inserting the element in correct position */
	arrayOfNumbers[i+1] = valueToInsert;

	/* Print the values of the list */
	printArrayValues(arrayOfNumbers, MAX);

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
