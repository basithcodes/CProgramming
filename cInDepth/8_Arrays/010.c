/* Program to input and display a matrix */
#include <stdio.h>
#define ROWS 3
#define COLUMNS 4

int main() {
	int i, j;
	int arr[ROWS][COLUMNS];

	/* Scan the elements */
	for (i = 0; i < ROWS; i++)
		for (j = 0; j < COLUMNS; j++) {
			scanf("%d", &arr[i][j]);
		}
	/* Print the elements of arrays */
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLUMNS; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
