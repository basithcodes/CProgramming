/* Write a program to print all prime numbers less than integer n, using  */
/* Sieve of Erathothenes */

/* Procedure  */
/* 1. Write down all integers from 2 to n sequentially */
/* 2. Cross out all multiples of 2 */
/* 3. Find the next uncrossed number, and cross out all its multiples */
/* 4. Repeat step (iii) until we find an uncrossed number whose square is  */
/*    greater than n */

#include <stdio.h>

#define MAX 100

int main(void)
{
	int i, number;
	int arr[MAX] = {0};

	// Prompt user for input
	printf("Enter a number: ");
	scanf("%d", &number);

	int p = 2;

	while (p*p <= number) {
		// Crossout all even indexes
		for (i = 2; i*p <= number; i++) {
			arr[i*p] = 1;
		}

		// Find next uncrossed number
		for (i = p+1; i <= number; i++) {
			if (arr[i] == 0) {
				p = i;
				break;
			}
		}
	}

	/* Print all uncrossed integers */
	for (i = 2; i <= number; ++i) {
		if (arr[i] == 0) {
			printf("%d ", i);
		}
	}
	
	printf("\n");

	return 0;
}
