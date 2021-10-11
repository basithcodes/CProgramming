#include <stdio.h>
#include <stdlib.h>
#include <stdio_ext.h>

#define ROWSORCOLUMNSVALUE 3
#define ROWS ROWSORCOLUMNSVALUE
#define COLUMNS ROWSORCOLUMNSVALUE

void drawLines(int arr[ROWS][COLUMNS]);
void playerInput(void);
void generateArrayValues(int arraySize, int arr[ROWS][COLUMNS]) ;
int gameWinLose(char character, int playerValue);
int gameWinLoseRow(char character, int playerValue);
int gameWinLoseColumns(char character, int playerValue);
int gameWinLoseDiagonal1(char character, int playerValue);
int gameWinLoseDiagonal2(char character, int playerValue);
void gameRestart(void);
void gameQuit(void);

int arr[ROWS][COLUMNS];
int countOfWhile = ROWS*COLUMNS;

int main(void)
{
	int i, count, j, k = 0;

	if (ROWSORCOLUMNSVALUE < 3) {
		printf("Sorry You cannot play the game with the given dimensions\n");
		printf("ROWSORCOLUMNSVALUE value should be greater than 2\n");
		exit(-1);
	}
	generateArrayValues(ROWSORCOLUMNSVALUE, arr);
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
				j == COLUMNS?(printf("|")):(printf("|%3c ", (char)arr[i][j]));
			} else if(arr[i][j] == 'o'){
				j == COLUMNS?(printf("|")):(printf("|%3c ", (char)arr[i][j]));
			} else {
				j == COLUMNS?(printf("|")):(printf("|%3d ", arr[i][j]));
			}
		}
		printf("\n");
	}
	printf("\n");
}

/* This function ask the input from the player and update 
 * the value and diagram */
void playerInput(void) {
	int i, j, k = 0, playerTurn = 1;
	int continueGame;
	_Bool duplicate = 0;
	while (countOfWhile > 0) {
		printf("Player %d put your mark: ", playerTurn);
		scanf("%d", &k);
		for (i = 0; i < ROWS; ++i) {
			/* if player turn value is 1 then mark player's mark in the diagram,
			 * after that, make the player turn to 2 for the next play and mark 
			 * different mark for next play */
			for (j = 0; j < COLUMNS; ++j) {
				/* Check if the user selected already marked 
				 * position if yes display the message */
				if (k == arr[i][j]) {
					if (arr[i][j] == 'x' || arr[i][j] == 'o') {
						duplicate = 1;
						printf("Please select different position\n");
					} else {
						playerTurn == 1?(arr[i][j] = 'x'):(arr[i][j] = 'o');
						drawLines(arr);
						duplicate = 0;
						continueGame = gameWinLose(arr[i][j], playerTurn);
						if (continueGame == 1) {
							countOfWhile = 9;
							playerTurn = 1;
							duplicate = 1;
							drawLines(arr);
						}
					}
				}
			}
		}
		/* Do not change the player turn if duplicate mark is already present */
		if (!duplicate) {
			if (playerTurn == 1) {
				playerTurn = 2;
			} else {
				playerTurn = 1;
			}
			countOfWhile--;
		}
	}
	return;
}

/* Game win/lose function */
int gameWinLoseRow(char character, int playerTurn) {
	int i = 0, j = 0;
	int countRows = 0;
	char continueGame;
	for (i = 0; i < ROWS; ++i) {
		for (j = 0; j < COLUMNS; ++j) {
			if (arr[i][j] == character) {
				countRows++;
				if (countRows == ROWS) {
					printf("Player %d won!!!\n", playerTurn);
					printf("Do you want to play again? y or n: ");
					__fpurge(stdin);
					continueGame = getchar();
					if (continueGame == 'y') {
						gameRestart();
						return 1;
					} else {
						gameQuit();
					}
				}
			} else {
				break;
			}
		}
	}
	return 0;
}

/* Check whether the palyer has won column wise */
int gameWinLoseColumns(char character, int playerTurn) {
	int i = 0, j = 0; 
	int countColumns = 0;
	char continueGame;
	for (j = 0; j < ROWS; ++j) {
		for (i = 0; i < COLUMNS; ++i) {
			if (arr[i][j] == character) {
				countColumns++;
				if (countColumns == ROWS) {
					printf("Player %d won!!!\n", playerTurn);
					printf("Do you want to play again? y or n: ");
					__fpurge(stdin);
					continueGame = getchar();
					if (continueGame == 'y') {
						gameRestart();
						return 1;
					} else {
						gameQuit();
					}
				}
			} else {
				break;
			}
		}
	}

	return 0;
}

int gameWinLoseDiagonal1(char character, int playerTurn) {
	int i = 0, j = 0;
	int countDiagonal1 = 0;
	char continueGame;
	for (i = 0; i < ROWS; ++i) {
		for (j = i; j == i; ++j) {
			if (arr[i][j] == character) {
				countDiagonal1++;
				if (countDiagonal1 == ROWS) {
					printf("Player %d won!!!\n", playerTurn);
					printf("Do you want to play again? y or n: ");
					__fpurge(stdin);
					continueGame = getchar();
					if (continueGame == 'y') {
						gameRestart();
						return 1;
					} else {
						gameQuit();
					}
				}
			} else {
				break;
			}
		}
	}
	return 0;
}

int gameWinLoseDiagonal2(char character, int playerTurn) {
	int i = 0, j = 0;
	int countDiagnol2 = 0;
	char continueGame;
	for (i = 0; i < ROWS; ++i) {
		for (j = COLUMNS-1-i; j >= 0; --j) {
			if (arr[i][j] == character) {
				countDiagnol2++;
				if (countDiagnol2 == ROWS) {
					printf("Player %d won!!!\n", playerTurn);
					printf("Do you want to play again? y or n: ");
					__fpurge(stdin);
					continueGame = getchar();
					if (continueGame == 'y') {
						gameRestart();
						return 1;
					} else {
						gameQuit();
					}
				}
			} else {
				break;
			}
		}
	}
	return 0;
}

int gameWinLose(char character, int playerTurn) {
	int value;
	value = gameWinLoseRow(character, playerTurn);
	if (value == 1) {
		printf("%d ", value);
		return 1;
	}
	value = gameWinLoseColumns(character, playerTurn);
	if (value == 1) {
		printf("%d ", value);
		return 1;
	}
	value = gameWinLoseDiagonal1(character, playerTurn);
	if (value == 1) {
		printf("%d ", value);
		return 1;
	}
	value = gameWinLoseDiagonal2(character, playerTurn);
	if (value == 1) {
		printf("%d", value);
		return 1;
	}
	return 0;
}


void gameQuit(void) {
		printf("Thank you for playing TIC TAC TOE\n");
		exit(0);
}

void gameRestart(void) {
	generateArrayValues(ROWS, arr);
}
