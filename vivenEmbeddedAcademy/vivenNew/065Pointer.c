#include <stdio.h>

void accept(float [], int);
void display(float [], int);

int main() {
	int sizeOfArray;
	float * arr;
	int array[] = {0};

	/* array++; // invalid */

	printf("Enter the size of an array: ");
	scanf("%d", &sizeOfArray);

	printf("Enter the elements of an array: \n");
	accept(arr, sizeOfArray);

	printf("Displaying the elements of an array: ");
	display(arr, sizeOfArray);
	return 0;
}

void accept(float arr[], int size) {
	int i;
	arr++;
	for (i = 0; i < size; i++) {
		printf("arr[%d] = ", i);
		scanf("%f", arr+i);
	}
	printf("\n");
}

void display(float arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("arr[%d] = %f\n", i, *(arr + i));
	}
	printf("\n");
}

