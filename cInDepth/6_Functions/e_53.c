/* 53. Write a function to find the sum of this series upto n terms */
/*       1 + 1/4 + 1/9 + 1/16 + ..........  */

#include <stdio.h>
#include "../inc/myfun.h"

int main() {
	int lastNumber;
	printf("Enter a number: ");
	scanf("%d", &lastNumber);
	printf("Sum of given series = %f\n", sumOfSeries(lastNumber));
	return 0;
}
