/* 56. Write a function isValid() to find whether a date is valid(see prog: 37).  */

#include <stdio.h>
#include "../inc/myfun.h"
int main() {
	short int day, month, year;
	printf("Enter day month and year: ");
	scanf("%hi %hi %hi", &day, &month, &year);
	isValid(day, month, year);
	return 0;
}


