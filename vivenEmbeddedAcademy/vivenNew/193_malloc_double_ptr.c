#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int **a, r, c, i, j;
	printf("Enter number of rows: ");
	scanf("%d", &r); // 3

	printf("Enter number of columns: ");
	scanf("%d", &c); // 2

	// Allocating row memory 
	a = (int **)malloc(r*sizeof(int));

	// Allocating column memory 
	for (i = 0; i < r; i++) {
		*(a+i) = (int *)malloc(c*sizeof(int));
	}

	// Enter the values in the array
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; ++j) {
			printf("arr[%d][%d] = ", i, j);
			scanf("%d", *(a+i)+j);
		}
		printf("\n");
	}

	// Print the values of the array
	for (i = 0; i < r; i++) {
		for (j = 0; j < c; ++j) {
			printf("%d\t", *(*(a+i)+j));
		}
		printf("\n");
	}

	// Deallocate the memory
	printf("Deallocating Memory\n");
	for (i = 0; i < r; ++i) {
		free(a[i]);
		a[i] = NULL;
	}

	free(a);
	a = NULL;
	printf("Memory Deallocation Complete\n");

	return 0;
}
