/* WAP to accept an array of elements find out the maximum repeating elements */

#include <stdio.h>

#define MAX_ARRAY_SIZE 50

void accept(int array[], int array_size);
void max_repeated_element_count(int array[], int array_size);

int main(void) {
	int arr[MAX_ARRAY_SIZE];
	int array_size;

	printf("Enter number elements required(Max = %d): ", MAX_ARRAY_SIZE);
	scanf("%d", &array_size);

	accept(arr, array_size);
	max_repeated_element_count(arr, array_size);

}

void accept(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &i[array]);
	}
}

void max_repeated_element_count(int array[], int array_size) {
	int count = 1, freq[array_size], i, j, max_repeated_element = 0, max_repeated_ele_count;

	for (i = 0; i < array_size; ++i) {
		freq[i] = -1;
	}

	for (i = 0; i < array_size; i++) {
		count = 1;

		if (freq[i] == 0) {
			continue;
		}

		for (j = i+1; j < array_size; ++j) {
			if (*(array+i) == *(array+j)) {
				count++;
				freq[j] = 0;
			}
		}

		freq[i] = count;
		
		if (freq[i] > max_repeated_element) {
			max_repeated_element = *(array+i);
			max_repeated_ele_count = freq[i];
		}
	}

	printf("Element: %d occurs %d times\n", max_repeated_element, max_repeated_ele_count);
}
