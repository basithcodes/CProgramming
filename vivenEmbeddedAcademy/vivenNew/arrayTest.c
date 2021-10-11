#include <stdio.h>

void display(int arr[], int size);
int main(void) {
	int arr[5] = {1};
	display(arr, 5);
	return 0;
}

void display(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, *(arr + i));
	}
	printf("\n");
}

