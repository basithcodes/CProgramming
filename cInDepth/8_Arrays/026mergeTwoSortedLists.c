/* This program will merge two sorted lists into one list */

#include <stdio.h>

#define ARRAYSIZE1 6
#define ARRAYSIZE2 10
#define ARRAYSIZE3 ARRAYSIZE1+ARRAYSIZE2

void printArrayValues(int arr[], int arraySize);

int main(void) {
	int sortedList1[ARRAYSIZE1] = {2, 4, 5, 7, 8, 9};
	int sortedList2[ARRAYSIZE2] = {11, 14, 17, 29, 34, 45, 54, 67, 89, 90};
	int sortedListMerged[ARRAYSIZE3] = {0};

	int i = 0, j = 0, value;

	/* Print two lists */
	printArrayValues(sortedList1, ARRAYSIZE1);
	printArrayValues(sortedList2, ARRAYSIZE2);

	if (ARRAYSIZE1 < ARRAYSIZE2) {
		value = ARRAYSIZE1;
	} else {
		value = ARRAYSIZE2;
	}

	/* Compare two lists and put it in third list, put third list in ascending order */
	while (i < value || j < value) {
		if (sortedList1[i] < sortedList2[j]) {
			sortedListMerged[i+j] = sortedList1[i];
			i++;
		} else {
			sortedListMerged[i+j] = sortedList2[j];
			j++;
		}
	}

	/* Merge the rest of the list */
	/* if (i < ARRAYSIZE1) { */
	/*   while (i < ARRAYSIZE1) { */
	/*     sortedListMerged[i] = sortedList2[i]; */
	/*     ++i; */
	/*   } */
	/* } else { */
	/*   while (j < ARRAYSIZE2) { */
	/*     sortedListMerged[j] = sortedList2[j]; */
	/*     ++j; */
	/*   } */
	/* } */

	/* Print the list after completely combining two lists */
	printArrayValues(sortedListMerged, ARRAYSIZE3);

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
