#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define ROWSORCOLUMNSVALUE 3
#define ROWS ROWSORCOLUMNSVALUE
#define COLUMNS ROWSORCOLUMNSVALUE

void drawLines(int arr[ROWS][COLUMNS]);
void playerInput(void);
void generateArrayValues(int arraySize, int arr[ROWS][COLUMNS]) ;
void printArrayValues(int arr[ROWS][COLUMNS]);
int gameWinDraw(void);

int arr[ROWS][COLUMNS];

int main(void)
{
	int i, count, j, k = 0;
	if (ROWSORCOLUMNSVALUE < 3) {
		printf("Sorry You cannot play the game with the given dimensions\n");
		printf("ROWSORCOLUMNSVALUE value should be greater than 2\n");
		exit(-1);
	}
	generateArrayValues(ROWSORCOLUMNSVALUE, arr);
	/* printArrayValues(arr); */
	drawLines(arr);
	playerInput();
	printf("Game Over\n\n");
	return 0;
}

/* Generate array values for given array, this is required if the user 
 * wants to have more than 3x3 matrix*/
void generateArrayValues(int rowsOrColumns, int arr[ROWS][COLUMNS]) {
	int i, j, columns, rows, k = 0;
	rows = columns = rowsOrColumns;
	for (i = 0; i < rows; ++i) {
		for (j = 0; j < columns; ++j ) {
			k = k+1;
			arr[i][j] = k;
		}
	}
}

/* void printArrayValues(char arr[ROWS][COLUMNS]) { */
/*    int i, j, rows, columns; */
/*    rows = columns = ROWSORCOLUMNSVALUE; */
/*    for (i = 0; i < rows; ++i) { */
/*       for (j = 0; j < columns; ++j) { */
/*          printf("%3d", arr[i][j]); */
/*       } */
/*       printf("\n"); */
/*    } */
/*    printf("\n"); */
/* } */

/* Draw lines for tic tac toe game */
void drawLines(int arr[ROWS][COLUMNS]) {
	system("clear");
	printf("\tTic Tac Toe\n");
	printf("\nPlayer 1(x)\t  Player 2(o)\n\n");
	int i, j, k = 0;
	for (i = 0; i < ROWS; ++i) {
		// COLUMNS + 1 is to print extra | symbol
		for (j = 0; j < COLUMNS+1; ++j) { 
			if (k == 9) {
				k = 0;
			}
			/* Print the tic tac toe lines and also whats inside the array */
			/* The array got values from user input (see playerInput function) */
			if (arr[i][j] == 'x') {
				j == COLUMNS?(printf("	")):(printf("|%3c ", (char)arr[i][j]));
			} else if(arr[i][j] == 'o'){
				j == COLUMNS?(printf("	")):(printf("|%3c ", (char)arr[i][j]));
			} else {
				j == COLUMNS?(printf("	")):(printf("|%3d ", arr[i][j]));
			}
		}
		printf("\n");
	}
	printf("\n");
}

/* This function ask the input from the player and update 
 * the value and diagram */
void playerInput(void) {
	int i, j, count = ROWS*COLUMNS, k = 0, playerTurn = 1;
	while (count > 0) {
		/* Check for duplicate values of k*/
		/* Code */
		scanf("%d", &k);
		printf("Player %d put your mark: ", playerTurn);
		for (i = 0; i < ROWS; ++i) {
			/* if player turn is 1 then mark player's mark in diagram after */
			/* that make player turn to 2 for next play */
			for (j = 0; j < COLUMNS; ++j) {
				if (k == arr[i][j]) {
					playerTurn == 1?(arr[i][j] = 'x'):(arr[i][j] = 'o');
					drawLines(arr);
				}
			}
		}
		if (playerTurn == 1) {
			playerTurn = 2;
		} else {
			playerTurn = 1;
		}
		count--;
	}
}

/* Game win/lose function */
int gameWinLose(void) {
	int i, j, k =0;
	int gameValue[9] = {1};
	for (i = 0; i < 2; ++i, ++k) {
		for (j = 0; j < 2; ++j, ++k) {
			printf("%d ", gameValue[j]);
		}
	}
	return 0;
}

/* TODO */
/* 1. Check a logic for duplicate values of k */
/* 2. Create a logic for checking if straight line or diagonal line marks are same */
/* 3. if k = q then quit the game */
