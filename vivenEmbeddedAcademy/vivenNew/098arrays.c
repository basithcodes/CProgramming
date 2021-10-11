#include <stdio.h>

void accept(int [][50], int, int);
void display(int [][50], int, int);
void product_of_two_matrix(int m1[][50], int m2[][50], int resultantMatrix[][50], int r1, int c1, int c2);
int main(void) {
	int m1[50][50], m2[50][50], m3[50][50], r1, r2, c1, c2, m, n;
	printf("Enter number row and column of first matrix: ");
	scanf("%d:%d", &r1,&c1);

	printf("Enter number row and column of second matrix: ");
	scanf("%d:%d", &r2,&c2);

	if (r2 == c1) {
		printf("\nEnter the elements in first matrix: ");
		accept(m1, r1, c1);

		printf("\nEnter the elements in second matrix: ");
		accept(m2, r2, c2);
		
		printf("\nElements of first matrix: \n");
		display(m1, r1, c1);

		printf("\nElements of first matrix: \n");
		display(m2, r2, c2);

		printf("\nProduct of two matrices: \n");
		product_of_two_matrix(m1, m2, m3, r1, c1, c2);
		display(m3, r1, c2);
	}

	else {
		printf("Matrix multiplication is not possible\n");
	}

}

void accept(int matrix[][50], int row, int column) {
	int i, j;
	printf("Enter matrix values\n");
	printf("rows = %d columns = %d\n", row, column);
	for (i = 0; i < row; ++i) {
		for (j = 0; j < column; ++j) {
			printf("matrix[%d][%d] = ", i, j);
			scanf("%d", *(matrix+i)+j);
		}
	}
}

void display(int matrix[][50], int row, int column) {
	int i, j;
	printf("rows = %d columns = %d\n", row, column);
	for (i = 0; i < row; ++i) {
		for (j = 0; j < column; ++j) {
			printf("%d ", *(matrix[i]+j));
		}
		printf("\n");
	}
}

void product_of_two_matrix(int m1[][50], int m2[][50], int resultantMatrix[][50], int r1, int c1, int c2) {
	int i, j, k;
	for (i = 0; i < r1; ++i) {
		for (j = 0; j < c2; ++j) {
				resultantMatrix[i][j] = 0;
				for (k = 0; k < r1; ++k) {
					/* resultantMatrix[i][j] += m1[i][k] * m2[k][j]; */ // common, almost everybody does like this
					resultantMatrix[i][j] += *(m1[i]+k) * *(*(m2+k)+j); // dont forget this kind of operations as well
				}
		}
	}
}
