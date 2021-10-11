#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int **a, r, *c, i, j;
	int n;
	int trackColumnsPerRow[10]; // try for dynamic memory allocation
	printf("Enter number of rows: ");
	scanf("%d", &r);

	a = (int **)malloc(r*sizeof(int*)); // We need to store double pointer addresses 
																		  // in 'a' variable's memory location and 
																			// address size is 8 bytes(64 bit machine)

	// Ask user for columns memory and keep track of number of columns per row
	for (i = 0; i < r; i++) {
		printf("Enter number of columns for row %d: ", i+1);
		scanf("%d", &n);
		c = (int *)malloc(n*sizeof(int)); // We need to store integer values 
																		  // inside memory location.  
		// Track number of elements/columns stored in each row
		// Use this information when storing and retreving the values
		trackColumnsPerRow[i] = n;

		// Store the column address in '*(a+i)' variable
		*(a+i) = c;
	}

	// Store the values
	for (i = 0; i < r; i++) {
		for (j = 0; j < trackColumnsPerRow[i]; j++) {
			printf("a[%d][%d] = ", i, j);
			scanf("%d", *(a+i)+j);
		}
		printf("\n");
	}

	// Print the values
	for (i = 0; i < r; i++) {
		for (j = 0; j < trackColumnsPerRow[i]; j++) {
			printf("%d ", *(*(a+i)+j));
		}
		printf("\n");
	}

	// Deallocate the memory
	// test it (watch addresses in gdb)
	for(i = 0; i < r; i++) {
		free(a[i]);
		a[i] = NULL;
	}

	free(a);
	a = NULL;

	return 0;
}
