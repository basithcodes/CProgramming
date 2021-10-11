/* Accept array of elements and display the sum of all elements */
#include <stdio.h>
#define MAX 10

int ScanArrayValues(int [], int arraySize);
int SumOfArrayElements(int array[], int arraySize);

int main(void) {
	int numberOfElements, sum;
	int array[MAX];

	printf("Enter number of elements required(max = %d): ", MAX);
	scanf("%d", &numberOfElements);

	if (ScanArrayValues(array, numberOfElements)) {
		sum = SumOfArrayElements(array, numberOfElements);
		printf("Sum of all elements = %d\n", sum);
	}

}

int ScanArrayValues(int arr[], int arraySize) {

	int i;
	// accepting/scanning array values
	for (i = 0; i < arraySize; i++) {
		printf("arr[%d] = ", i);
		/* scanf("%d", arr+i); */
		scanf("%d", &arr[i]);
	}
	printf("Scanning Complete\n");
	return 1; // if scanning is successful return 1 
}

int SumOfArrayElements(int array[], int arraySize) {
	int i, sum = 0;
	for (i = 0; i < arraySize; i++) {
		sum += array[i];
	}
	return sum;
}
