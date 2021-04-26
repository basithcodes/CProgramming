/* This program will insert an element in an array of unsorted number list  */

#include <stdio.h>
#define MAX 5

void printArrayValues(int arr[], int arraySize);

int main(void) {
	int valueToInsert, i, index;
	int arrayOfNumbers[MAX] = {1, 2, 8, 2, 0};

	printf("Which value you want to insert: ");
	scanf("%d", &valueToInsert);
	printf("At what index: ");
	scanf("%d", &index);

	/* Move the elements to the right */
	for (i = MAX-1; i != index; i--) {
		arrayOfNumbers[i] = arrayOfNumbers[i-1];
	}

	/* Now insert the value */
	arrayOfNumbers[index] = valueToInsert;

	/* Print the array */
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
