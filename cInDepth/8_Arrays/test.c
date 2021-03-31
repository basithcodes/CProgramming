#include <stdio.h>

#define SIZE 8 

void sumOfSquares(int arr[], int sizeOfArray);

int main() {
	int sum = 0, i;
	int arr[SIZE]; 
	printf("Array contains: \n");
	for (i = 0; i < SIZE; ++i) {
		arr[i] = i+1;
		printf("%d ", arr[i]);
	}
	printf("\n");
	sumOfSquares(arr, SIZE);
}

void sumOfSquares(int arr[], int sizeOfArray) {
	int sum = 0, i;

	printf("Square of that content: ");
	for (i = 0; i < sizeOfArray; ++i) {
		arr[i] = arr[i]*arr[i];
		printf("%d ", arr[i]);
		sum = sum + arr[i];
	}
	/* for (i = 0; i < sizeOfArray; ++i) { */
	/*    sum = sum + arr[i]; */
	/* } */
	printf("\nSum of squares of above numbers = %d\n", sum);

	printf("\n");
}
