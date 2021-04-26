/* This program will put the biggest element of an array at last position */

#include <stdio.h>

#define ARRAYSIZE 6

void printArrayValues(int arr[], int arraySize);

int main(void) {
	int arrayOfNumbers[ARRAYSIZE] = {23, 42, 78, 90, 32, 10};
	int temp, sizeOfArray = ARRAYSIZE;

	printf("Before Swapping\n");
	printArrayValues(arrayOfNumbers, sizeOfArray);
	printf("\n");

	for (int i = 0; i < sizeOfArray - 1; i++) {
		if (arrayOfNumbers[i] > arrayOfNumbers[i+1]) {
			temp = arrayOfNumbers[i+1];
			arrayOfNumbers[i+1] = arrayOfNumbers[i];
			arrayOfNumbers[i] = temp;
			printArrayValues(arrayOfNumbers, sizeOfArray);
		}
	}

	printf("\n");
	printf("After Swapping\n");
	printArrayValues(arrayOfNumbers, sizeOfArray);
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
