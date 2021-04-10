/* This code will arrange the elements of a string in descending order */
#include <stdio.h>
#include <string.h>

void swapString(char arr[][50], int rows, int columns);
void bubbleSortString(char arr[][50], int numberOfStringsRequired);
void inputString(char arr[][50], int numberOfStringsRequired);
void outputString(char arr[][50], int numberOfStringsRequired);

int main(void) {

	int numberOfStringsRequired;
	/* Ask user to enter string */
	printf("Enter number of strings(words) you want to scan(maximum is 25): ");
	scanf("%d", &numberOfStringsRequired);

	char arrString[25][50];
	int count = 0;

	/* Input */
	inputString(arrString, numberOfStringsRequired);

	/* Sorting */
	bubbleSortString(arrString, numberOfStringsRequired);

	/* Output */
	outputString(arrString, numberOfStringsRequired);

	printf("\n");
	return 0;
}

/* This function will allow user to input/scan values to 2d character array */
void inputString(char arr[][50], int numberOfStrings) {
	printf("\nInput String: \n");

	int i;

	/* Scan for the strings */
	for (i = 0; i < numberOfStrings; ++i) {
		scanf("%s", arr[i]); // i -> row and column(50) -> number of characters in a row
	}
	printf("\n");
}

/* This function will allow user to output values of 2d character array */
void outputString(char arr[][50], int numberOfStrings) {
	printf("Printing String: \n");

	int i;

	/* Print the strings */
	/* i -> rows and 50 -> number of characters in a row */
	for (i = 0; i < numberOfStrings; ++i) {
		printf("%s", arr[i]); 
		printf("\n");
	}
	printf("\n");
}

/* This function will sort the string elements in descending order */
void bubbleSortString(char arr[][50], int numberOfStrings) {
	/* Sorting Technique Code */
	int pass,rows, columns;
	int length;

	for (rows = 0; rows < numberOfStrings; ++rows) { // go through the strings
		length = strlen(arr[rows]);
		for (pass = 0; pass < length; ++pass) { 
			/* In below for loop check for length of string of each row */
			/* Check for overflow of array in the below for loop */
			for (columns = 0; columns < length - pass - 1; ++columns) { 
				if (arr[rows][columns] > arr[rows][columns+1]) {
					swapString(arr, rows, columns);
				}
			}
		}
	}
}


/* This function will swap characters in a 2d array */
void swapString(char arr[][50], int rows, int columns) {
	char temp;
		temp = arr[rows][columns];
		arr[rows][columns] = arr[rows][columns+1];
		arr[rows][columns+1] = temp;
}
