/* WAP to accept an array of elements find out first repeating element */

#include <stdio.h>

#define MAX_ARRAY_SIZE 50

void accept(int array[], int array_size);
void first_repeating_element_count(int array[], int array_size);

int main(void) {
	int arr[MAX_ARRAY_SIZE];
	int array_size;

	printf("Enter number elements required(Max = %d): ", MAX_ARRAY_SIZE);
	scanf("%d", &array_size);

	accept(arr, array_size);
	first_repeating_element_count(arr, array_size);

}

void accept(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &i[array]);
	}
}

void first_repeating_element_count(int array[], int array_size) {
	int i, j, position = array_size;
	for (i = 0; i < array_size; ++i) {
		for (j = i+1; j < position; ++j) {
			if (*(array+i) == *(array+j)) {
				if (position > j) {
					position = j;
					break;
				}
			}
		}
	}
	printf("\n%d is the first repeated element\n", *(array+position));
}
