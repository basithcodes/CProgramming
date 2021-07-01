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

	display(A, size_a);
	display(B, size_b);

	bubbleSort(A, size_a);
	bubbleSort(B, size_b);

	printf("Values of A array after sorting: ");
	display(A, size_a);

	printf("Values of B array after sorting: ");
	display(B, size_b);

	/* printf("Intersection of A and B: "); */
	/* number_of_intersection_elements = intersection(A, B, I, size_a, size_b); */
  /*  */
	/* if(number_of_intersection_elements == 0) */
	/*   printf("No common elements found\n"); */
	/* else */
	/*   display(I, number_of_intersection_elements); */
  /*  */
	/* printf("Union of A and B: "); */
	/* number_of_union_elements = unions(A, B, I, size_a, size_b); */
  /*  */
	/* if(number_of_union_elements == 0) */
	/*   printf("No common elements found\n"); */
	/* else */
	/*   display(U, number_of_union_elements); */

	return 0;
}

void accept(int *array, int array_size) {
	int i, j;
	for (i = 0; i < array_size; i++) {
		printf("A[%d] = ", i);
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
	printf("\nDisplaying values: \n");
	for (int i = 0; i < array_size; i++) {
		printf("%d ", *(array+i));
	}
	printf("\n");
}

void bubbleSort(int *array, int array_size) {
	int pass, i, j, swapped = 1;
	pass = array_size - 1;
	for (i = 0; (i < pass) && swapped; i++) {
		swapped = 0;
		for (j = 0; j <= pass; j++) {
			if (*(array+j) > *(array+j+1)) {
				// swapping technique using bitwise operator
				*(array+i) ^= *(array+i+1) ^= *(array+i) ^= *(array+i+1);
				swapped = 1;
			}
		}
		pass--;
	}
}

int intersection(int A[], int B[], int I[], int A_size, int B_size);
int unions(int A[], int B[], int I[], int A_size, int B_size);
