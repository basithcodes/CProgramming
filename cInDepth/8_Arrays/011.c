/* Addition of two matrices */
/* My logic */
#include <stdio.h>

#define ROWS 2
#define COLUMNS 3

int main() {
	int i, j;
	int arr1[ROWS][COLUMNS];
	int arr2[ROWS][COLUMNS];
	int arr3[ROWS][COLUMNS];

	/* Scanning the values of matrix 1 */
	printf("Enter the matrix arr1 %dx%d row-wise\n", ROWS, COLUMNS);
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLUMNS; j++)
			scanf("%d", &arr1[i][j]);
	}

	/* Scanning the values of matrix 2 */
	printf("Enter the matrix arr2 %dx%d row-wise\n", ROWS, COLUMNS);
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLUMNS; j++)
			scanf("%d", &arr2[i][j]);
	}

	/* Adding of arr1 and arr2 then displaying their addition */
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j < COLUMNS; j++) {
			arr3[i][j] = arr1[i][j] + arr2[i][j];
			printf("%d\t", arr3[i][j]);
		}
		printf("\n");
	}

	printf("\n");

	/* For printing  */
	/* for (i = 0; i < ROWS; i++) { */
	/*    for (j = 0; j < COLUMNS; j++) { */
	/*       printf("%d\t", arr3[i][j]); */
	/*    } */
	/* } */

	return 0;
}
