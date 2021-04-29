/* This program will merge two sorted lists into one list */

#include <stdio.h>

#define ARRAYSIZE1 6
#define ARRAYSIZE2 10
#define ARRAYSIZE3 ARRAYSIZE1+ARRAYSIZE2

void printArrayValues(int arr[], int arraySize);
void scanArrayValues(int arr[], int arraySize);

int main(void) {
	int sortedList1[ARRAYSIZE1] = {1, 2, 8, 10, 14, 18};
	int sortedList2[ARRAYSIZE2] = {3, 5, 7, 9, 11, 12, 13, 15, 89, 90};
	int sortedListsMerged[ARRAYSIZE3] = {0};

	int i = 0, j = 0, k = 0;

	/* Print two lists */
	printArrayValues(sortedList1, ARRAYSIZE1);
	printArrayValues(sortedList2, ARRAYSIZE2);

	/* Compare two lists and put the values in third list, 
	 * third list should be in ascending order */
	while (i < ARRAYSIZE1 && j < ARRAYSIZE2) {
		if (sortedList1[i] < sortedList2[j]) {
			sortedListsMerged[k] = sortedList1[i];
			i++, k++;
		} else {
			sortedListsMerged[k] = sortedList2[j];
			j++, k++;
		}
	}

	/* Merge rest of the list */
	while (j < ARRAYSIZE2 && k < ARRAYSIZE3) {
		sortedListsMerged[k] = sortedList2[j];
		j++, k++;
	}

	/* Print the list after completely combining two lists */
	printArrayValues(sortedListsMerged, ARRAYSIZE3);

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

/* This function will scan one dimensional array values */
void scanArrayValues(int arr[], int arraySize) {
	int index;
	for (index = 0; index < arraySize; index++) {
		scanf("%d", &arr[index]);
	}
}
