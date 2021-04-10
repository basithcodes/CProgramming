#include <stdio.h>

#define ROWS 3
#define COLUMNS 3
void printMatrix(int arr[][COLUMNS], int size);
void multiplyTwoMatrix(int arr[][COLUMNS], int arr[][]);

int main(void)
{
	int i, j, k = 1;
	int mat1[ROWS][COLUMNS];
	int mat2[ROWS][COLUMNS];
	int matResultant[ROWS][COLUMNS];

	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLUMNS; ++j, ++k) {
			mat1[i][j] = k;
			mat2[i][j] = k;
		}
	}

	printMatrix(mat1, ROWS*COLUMNS);

	/* for (i = 0; i < ROWS; ++i) { */
	/*    for (j = 0; j < COLUMNS; ++j) { */
	/*       printf("%d ", matResultant[i][j]); */
	/*    } */
	/*    printf("\n"); */
	/* } */
	return 0;
}

void printMatrix(int arr[][COLUMNS], int size) {
	int rows = size / COLUMNS;
	int i,j;
	for (i = 0; i < rows; ++i) {
		for (j = 0; j < COLUMNS; ++j) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
}
