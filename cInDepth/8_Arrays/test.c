#include <stdio.h>

#define ROWS1 3
#define COLUMNS1 3
#define ROWS2 COLUMNS1
#define COLUMNS2 3

void multiplyTwoMatrix(int matrix1[][COLUMNS1], int matrix2[][COLUMNS2], int resultantMatrix[][COLUMNS2]);

int main(void)
{
	int i, j, k = 1;
	int mat1[ROWS1][COLUMNS1] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int mat2[ROWS2][COLUMNS2] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};

	int matResultant[ROWS1][COLUMNS2] = {
		{0, 0, 0},
		{0, 0, 0},
		{0, 0, 0}
	};

	multiplyTwoMatrix(mat1, mat2, matResultant);

	for (i = 0; i < ROWS1; ++i) {
		for (j = 0; j < COLUMNS1; ++j) {
			printf("%d ", matResultant[i][j]);
		}
		printf("\n");
	}
	return 0;
}

void multiplyTwoMatrix(int matrix1[ROWS1][COLUMNS1], int matrix2[ROWS2][COLUMNS2], int resultantMatrix[][COLUMNS2]) {
	int i, j, k;
	for (i = 0; i < ROWS1; ++i) {
		for (j = 0; j < COLUMNS2; ++j) {
			for (k = i; k <= j; ++k) {
				resultantMatrix[i][j] += matrix1[i][k] * matrix2[k][i];
			}
		}
	}
}
