#include <stdio.h>

#define ARRAY_SIZE 10

int main(void) {
	int arrayOfNumbers[ARRAY_SIZE];

	return 0;
}

/* This function will scan one dimensional array values */
void scanArrayValues(int arr[], int arraySize) {
	int index;
	for (index = 0; index < arraySize; index++) {
		scanf("%d", &arr[index]);
	}
}
