#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int *ptr;
	int i;

	ptr = (int *)malloc(5*sizeof(int));

	printf("Enter 5 numbers: ");

	for (i = 0; i < 5; ++i) {
		scanf("%d", ptr+i);
	}
	printf("\n");

	for (i = 0; i < 5; ++i) {
		printf("%d ", *(ptr+i));
	}
	printf("\n");

	realloc(ptr, 3*sizeof(int));

	for (i = 0; i < 3; ++i) {
		scanf("%d", ptr+i);
	}
	printf("\n");

	for (i = 0; i < 3; ++i) {
		printf("%d ", *(ptr+i));
	}
	printf("\n");

	realloc(ptr, 8*sizeof(int));

	for (i = 3; i < 8; ++i) {
		scanf("%d", ptr+i);
	}
	printf("\n");

	for (i = 0; i < 8; ++i) {
		printf("%d ", *(ptr+i));
	}
	printf("\n");

	free(ptr);

	return 0;
}
