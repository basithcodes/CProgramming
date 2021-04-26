/* This program will sort the unsorted number list using bubble sort technique */
/* This program logic is from MIT lecture */
/* https://youtu.be/6LOwPhPDwVc */

#include <stdio.h>

#define MAX 10

void printArrayValues(int arr[], int arraySize);

int main(void) {
	int arrayOfNumbers[MAX] = {1, 6, 2, 9 ,20, 12, 89, 29, 21, 43};
	_Bool swap = 0;
	int temp;
	int maxValue = MAX - 1;

	while (!swap) {
		swap = 1;
		for (int i = 0; i < maxValue; i++) {
			if (arrayOfNumbers[i] > arrayOfNumbers[i+1]) {
				swap = 0;
				printArrayValues(arrayOfNumbers, MAX);
				temp = arrayOfNumbers[i+1];
				arrayOfNumbers[i+1] = arrayOfNumbers[i];
				arrayOfNumbers[i] = temp;
			}
		}
	}
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
