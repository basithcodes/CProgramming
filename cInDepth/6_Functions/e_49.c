/* 49. Write a function convert() that can convert inches to cms and vice versa. */
/*     The first argument should be length to be converted and the second argument */
/*     should be character('i' or 'c') denoting the measurement unit of the */
/*     length given in first argument. */

#include <stdio.h>
#include "inc/myfun.h"

int main() {
	float number;	
	char unit;
	printf("Enter a value and its unit(single character): ");
	scanf("%f %c", &number, &unit);
	printf("%.3f\n", convert(number, unit));
}
