#include <stdio.h>

void accept(int array[], int array_size);
void display(int array[], int array_size);
void bubbleSort(int array[], int array_size);
int intersection(int A[], int B[], int I[], int A_size, int B_size);
int unions(int A[], int B[], int I[], int A_size, int B_size);

#define MAX_A_ARRAY_SIZE 50
#define MAX_B_ARRAY_SIZE 50
#define MAX_I_ARRAY_SIZE 50
#define MAX_U_ARRAY_SIZE 50

int main(void) {
	int A[MAX_A_ARRAY_SIZE], B[MAX_B_ARRAY_SIZE], I[MAX_I_ARRAY_SIZE], U[MAX_U_ARRAY_SIZE];
	int size_a, size_b, size_i, number_of_intersection_elements, number_of_union_elements;
	printf("Enter size for array A: ");
	scanf("%d", &size_a);

	printf("Enter the elements for A array: \n");
	accept(A, size_a);

	printf("Enter size for B array: ");
	scanf("%d", &size_b);

	printf("Enter the elements for B array: \n");
	accept(B, size_b);

	printf("Values of A before Sorting:\n");
	display(A, size_a);
	printf("Values of B before Sorting:\n");
	display(B, size_b);

	bubbleSort(A, size_a);
	bubbleSort(B, size_b);

	printf("Values of A array after sorting:\n");
	display(A, size_a);

	printf("Values of B array after sorting:\n");
	display(B, size_b);

	printf("Intersection of A and B:\n");
	number_of_intersection_elements = intersection(A, B, I, size_a, size_b);

	if(number_of_intersection_elements == 0)
		printf("No common elements found\n");
	else
		display(I, number_of_intersection_elements);

	printf("Union of A and B:\n");
	number_of_union_elements = unions(A, B, U, size_a, size_b);

	if(number_of_union_elements == 0)
		printf("No common elements found\n");
	else
		display(U, number_of_union_elements);

	return 0;
}

void accept(int *array, int array_size) {
	int i, j;
	for (i = 0; i < array_size; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", array+i);
		for (j = 0; j < i; j++) {
			if(*(array+i) == *(array+j)) {
				--i;
				printf("Duplicate element detected, please enter different value.\n");
				break;
			}
		}
	}
	printf("\n");
}

void display(int *array, int array_size) {
	for (int i = 0; i < array_size; i++) {
		printf("%d ", *(array+i));
	}
	printf("\n");
}

void bubbleSort(int *array, int array_size) {
	int pass, i, j, swapped = 1;
	pass = array_size - 1;
	for (i = 0; (i <= pass) && swapped; i++) {
		swapped = 0;
		for (j = 0; j < pass; j++) {
			if (*(array+j) > *(array+j+1)) {
				// swapping technique using bitwise operator
				*(array+j) ^= *(array+j+1) ^= *(array+j) ^= *(array+j+1);
				/* temp = *(array+j); */
				/* *(array+j) = *(array+j+1); */
				/* *(array+j+1) = temp; */
				swapped = 1;
			}
		}
	}
}

int intersection(int A[], int B[], int I[], int A_size, int B_size) {
	int i = 0, j = 0, k = 0;
	while (i < A_size && j < B_size) {
		if(*(A+i) < *(B+j)) {
			*(I+k) = *(A+i);
			++k,++i;
		} else if (*(A+i) > *(B+j)) {
			*(I+k) = *(B+j);
			++k,++j;
		} else if (*(A+i) == *(B+j)) {
			*(I+k) = *(B+j);
			++k, ++j, ++i;
		}
	}

	while (i < A_size) {
		*(I+k) = *(A+i);
		k++, i++;
	}

	while (j < B_size) {
		*(I+k) = *(B+j);
		k++, j++;
	}

	return k; // size of intersection array
}

int unions(int A[], int B[], int U[], int A_size, int B_size) {
	int i = 0, j = 0, k = 0;

	for (i = 0; i < A_size; i++) {
		for (j = 0; j < B_size; j++) {
			if (*(A+i) == *(B+j)) {
				*(U+k) = *(A+i);
				k++;
			} 
		}
	}
	return k;
}
