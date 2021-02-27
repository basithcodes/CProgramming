#include <stdio.h>
#define ROWSA 2
#define COLUMNSA 3
#define ROWSB COLUMNSA
#define COLUMNSB 2

int main() {

	int i,j,k;
	int sum = 0;
	int mata[ROWSA][COLUMNSA];
	int matb[ROWSB][COLUMNSB];
	int matc[ROWSA][COLUMNSB] = {0};

	for (i = 0; i < ROWSA; i++) {
		for (j = 0; j < COLUMNSA; j++) {
			printf("Enter element MATA: %dx%d: ", i,j);
			scanf("%d", &mata[i][j]);
		}
	}

	for (i = 0; i < ROWSB; i++) {
		for (j = 0; j < COLUMNSB; j++) {
			printf("Enter element MATB: %dx%d: ", i,j);
			scanf("%d", &matb[i][j]);
		}
	}

	for (i = 0; i < ROWSA; i++) {
		for (j = 0; j < COLUMNSB; j++) {
			for (k = 0; k < COLUMNSA; k++) {
				sum += mata[i][k] * matb[k][j];
			}
			matc[i][j] = sum;
			printf("%d\t", matc[i][j]);
			sum = 0;
		}
		printf("\n");
	}

	return 0;
}
