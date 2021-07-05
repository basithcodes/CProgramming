/* WAP to accept some array of elements display them in reverse order */
#include <stdio.h> 
#define MAX_ARRAY_SIZE 50

void accept(int array[], int array_size);
void display(int array[], int array_size);
void reverse(int array[], int array_size);

int main(void) {
	int arr[MAX_ARRAY_SIZE];
	int array_size;
	printf("Enter number elements required(Max = %d): ", MAX_ARRAY_SIZE);
	scanf("%d", &array_size);

	accept(arr, array_size);

	printf("Before reversing:\n");
	display(arr, array_size);

	reverse(arr, array_size);

	printf("After reversing:\n");
	display(arr, array_size);

	return 0;
}

void accept(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &i[array]);
	}
}

void reverse(int array[], int array_size) {
	int i, temp;
	int looptill = array_size/2;
	for (int i = 0; i < looptill; i++) {
		array[i] ^= array[array_size-i-1] ^= array[i] ^= array[array_size-i-1];
	}
}

void display(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}
