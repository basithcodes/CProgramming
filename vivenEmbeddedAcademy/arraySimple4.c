#include <stdio.h>

int main() {
	int array[5] = {3,4,5,6,2}; // Initializing arrays using subscripts

	printf("%d\n", *array); // It prints only first element

	for (int i = 0; i < 5; i++) {
		/* printf("%d ", *(array+i)); */
		printf("%d ", array[i]);
	}
	printf("\n");
}
