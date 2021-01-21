/* Use arrays and pointers mostly for this program*/
#include <stdio.h>

void readFun(int *array, short int elements);
void displayFun(int *array, short int elements);
void dectobin(int *ptr, short int elements);
int biggestvalue(int *ptr, short int elements);
void reverseIntegerArray(int *array, short int elements);
void displayOptions(void);

int main() {
	short int option;
	int array[5];
	short int elements;
	int number;
	int x = 1;
	int biggest;

	while (x) {
		displayOptions();
		printf("Please enter an option: ");
		scanf("%hi", &option);
		switch (option) {
			case 0:
				x = 0;
				continue;

			case 1:
				printf("Enter number of elements(max 5) to scan: \n");
				scanf("%hi",  &elements);
				readFun(array, elements);
				break;

			case 2:
				printf("Enter number of elements(max 5) to display: \n");
				scanf("%hi",  &elements);
				displayFun(array, elements);
				break;

			case 3:
				dectobin(array, elements);
				break;

			case 4:
				biggest = biggestvalue(array, elements);
				printf("Biggest number: %d\n", biggest);
				break;

			case 5:
				reverseIntegerArray(array, elements);
				break;

			default:
				fprintf(stdout, "Invalid Option\n");
				continue;

		}
	}
}

void displayOptions(void) {
	char *options[] = {
		"0. Exit Program",
		"1. Read Array",
		"2. Display Array",
		"3. Decimal to binary conversion",
		"4. Biggest of all the values",
		"5. Reverse the array string"
	};

	for (int i = 0; i < 6; i++) {
		printf("%s\n", *(options+i));
	}

}

void readFun(int *array, short int elements) {
	printf("Reading Array Values: ");
	for (int i = 0; i < elements; i++) 
		scanf("%d", &array[i]);
	printf("\n");
}

void displayFun(int *array, short int elements) {
	printf("Displaying Array Values: ");
	for (int i = 0; i < elements; i++) 
		printf("%d ", array[i]);
	printf("\n");
}

void dectobin(int *ptr, short int elements) {
	// Write an efficient code for this function
	int remainder, sum = 0;
	int multiple = 1;
	int i, decimalNumber;
	for (i = 0; i < elements; i++) {
		decimalNumber = ptr[i];
		while (decimalNumber > 0) {
			remainder = decimalNumber % 2;
			decimalNumber = decimalNumber/2;
			sum = sum + remainder * multiple;
			multiple = multiple * 10;
		}
		printf("Decimal: %d Binary: %d\n", ptr[i], sum);
		sum = 0;
		multiple = 1;
	}
}

int biggestvalue(int *ptr, short int elements) {
	int big = ptr[0];
	for (int i = 1; i < elements; i++) {
		if (ptr[i] > big)
			big = ptr[i];
	}
	return big;
}

void reverseIntegerArray(int *array, short int elements) {
	int i, j, temp;
	for (i = 0, j = elements - 1 ; i < elements / 2; i++, j--) {
		temp = array[i];
		array[i] = array[j];
		array[j] = temp;
	}
}

