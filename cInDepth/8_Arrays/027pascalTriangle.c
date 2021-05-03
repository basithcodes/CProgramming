/* This program prints a pascal triangle on terminal screen */

#define ROWS 5
#define COLUMNS ROWS

#include <stdio.h>

int main(void) {
	int arrayOfNumbers[ROWS][COLUMNS] = {0};
	int i, j;

	/* Create pascal triangle using 2d array */
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j <= i ; j++) {
			if (j == 0 || (i == j)) {
				arrayOfNumbers[i][j] = 1;
			} else {
				arrayOfNumbers[i][j] = arrayOfNumbers[i-1][j-1] + arrayOfNumbers[i-1][j];
			}
		}
	}

	/* Print 2d array values */
	for (i = 0; i < ROWS; i++) {
		for (j = 0; j <= i; j++) {
			printf("%d ", arrayOfNumbers[i][j]);
		}
		printf("\n");
	}
	return 0;
}
