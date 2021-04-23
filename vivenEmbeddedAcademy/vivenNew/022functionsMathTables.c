/* This function will create a math table of a given number */
/* Functions without arguments with return type */
#include <stdio.h>

int table(void);

int main(void) {
	int number;
	number = table();
	for (int i = 1; i <= 10; i++) {
		printf("%2d  * %2d  =  %2d\n", number, i, number*i);
	}
	return 0;
}

int table(void) {
	int numberForTable;
	printf("Enter a value to create that value's table: ");
	scanf("%d", &numberForTable);
	return numberForTable;
}
