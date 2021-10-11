/* Given an array of integers, return a new array such that each element at index i of the new array 
 * is the product of all the numbers in the original array except the one at i. 
 * For example, if our input was [1, 2, 3, 4, 5], the expected output would be [120, 60, 40, 30, 24].
 * If our input was [3, 2, 1], the expected output would be [2, 3, 6]. 
*/

#include <stdio.h>
#include <stdlib.h>

#define MAX_ARRAY_SIZE 50

void accept(int array[], int array_size);
void display(int arr[], int size);
int* Add_And_Check_In_The_List(int array[], int array_size);

int main(void) {
	int arr[MAX_ARRAY_SIZE];
	int array_size;
	int *new_array;

	printf("Enter number elements required(Max = %d): ", MAX_ARRAY_SIZE);
	scanf("%d", &array_size);

	accept(arr, array_size);
	new_array = Add_And_Check_In_The_List(arr, array_size);
	display(new_array, array_size);

}

void accept(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &i[array]);
	}
}

int * Add_And_Check_In_The_List(int array[], int array_size) {
	int* list = (int*)malloc(array_size);
	int i, j;
	for (i = 0; i < array_size; ++i) {
		*(list+i) = 1;
		for (j = 0; j < array_size; ++j) {
			if (i == j) continue;
			*(list+i) = *(list+i) * *(array+j);
		}
	}
	return list;
	/* return array_new; */
}

void display(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++) {
		printf("arr[%d] = %d\n", i, *(arr + i));
	}
	printf("\n");
}

