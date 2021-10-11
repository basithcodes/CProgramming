/* This program uses bubble sort technique to sort the given list of 
 * numbers in ascending order*/

#include <stdio.h>
#include <string.h>

void swapNumber(int arr[], int numberOfElements);
void bubbleSortNumber(int arr[], int numberOfElements);

int main(void) {
	int arraySize = 8;
	int arr[arraySize];
	int i, j, k = 0;

	// Ask user for array values
	printf("Number of elements required are %d\n", arraySize);
	printf("Enter the values to be sorted: \n");
	for (i = 0; i < arraySize; ++i) {
		scanf("%d", &arr[i]);
	}

	/* Call the sorting function */
	bubbleSortNumber(arr, arraySize);

	/* Print the values after sorted */
	printf("\nValues after sorting: \n");
	for (j = 0; j < arraySize; ++j) {
		printf("%d ", arr[j]);
	}

	return 0;
}

/* The swap function will swap values and print the whole array whenever 
 * each element swap happens */
void swapNumber(int arr[], int element) {
	int temp, j = element;

	/* Swapping values */
	temp = arr[j];
	arr[j] = arr[j+1];
	arr[j+1] = temp;
	printf("\n");
}

/* This function uses bubble sort technique to 
 * sort the elements in ascending order */
void bubbleSortNumber(int arr[], int numberOfElements) {
	int i, c, arraySize = numberOfElements;
	int pass = numberOfElements - 1;

	/* Compare the the values and sort them */
	/* Outer for loop is for pass values 
	 * (see pass values for bubble sort on internet) */
	for (i = 0; i < pass; ++i) {
		/* Inner for loop is for sorting the elements */
		for (c = 0; c < arraySize-i-1; ++c) {
			if(arr[c] > arr[c+1]) {
				swapNumber(arr, c);
			}
		}
		printf("\n");
	}
}
