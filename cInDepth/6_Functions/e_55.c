/* 55. Write a function isLeap() which inputs a year and returns 1 if the year */
/*     is leap otherwise 0. */
/* A centennial(divisible by 100) year is leap if it is divisible by 400, and a  */
/* non-centennial year is leap if it is divisible by 4 */

#include <stdio.h>
#include "../inc/myfun.h"
int main() {
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);
	printf("%d\n", isLeap(year));
	return 0;
}
