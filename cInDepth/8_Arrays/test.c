#include <stdio.h>

#define ROWS1 3
#define COLUMNS1 4
#define ROWS2 COLUMNS1
#define COLUMNS2 2

int main(void) {
	int matrix1[ROWS1][COLUMNS1] = {
		{1, 2, 3, 4},
		{4, 5, 6, 5},
		{7, 8, 9, 6}
	};

	int matrix2[ROWS2][COLUMNS2] = {
		{1, 2},
		{4, 5},
		{7, 8},
		{7, 8}
	};

	int resultantMatrix[ROWS1][COLUMNS2];

	int i, j, k;

	for (i = 0; i < 4; ++i) {
		for (j = 0; j < 2; ++j) {
			resultantMatrix[i][j] = 0;
			for (k = 0; k < 4; ++k) {
				resultantMatrix[i][j] += matrix1[i][k]*matrix2[k][j];
			}
		}
	}

	for (i = 0; i < ROWS1; ++i) {
		for (j = 0; j < COLUMNS2; ++j) {
			printf("%d ", resultantMatrix[i][j]);
		}
		printf("\n");
	}
	return 0;
}
