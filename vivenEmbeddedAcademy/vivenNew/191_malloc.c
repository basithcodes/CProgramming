#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n, i;
	int * ptr = NULL;

	printf("Enter the size of an array: ");
	scanf("%d", &n);

	// Allocating the memory
	ptr = (int *)malloc(n*sizeof(int));

	if (ptr == NULL) {
		printf("Memory has not been allocated\n");
		exit(1);
	}

	printf("Before initializing values: \n");
	for(i = 0; i < n; i++) {
		printf("%d", *(ptr+i));
		printf("\n");
	}

	printf("\n");

	printf("Enter the elements: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", (ptr+i));
	}

	printf("\nAfter initializing values: \n");
	for(i = 0; i < n; i++) {
		printf("%d", *(ptr+i));
		printf("\n");
	}

	// Free the memory
	free(ptr);

	ptr = NULL;

	return 0;
}
