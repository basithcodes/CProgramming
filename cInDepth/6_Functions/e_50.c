/* 50. Write a function Product() that accepts two integers and returns their */
/*     product. Don't use the * operator. Similarly make two more functions  */
/*     Quotient() and Remainder() that accept two integers and return the quotient */
/*     and remainder respectively, without the use of / and % operator. */

#include <stdio.h>
#include "myfun.h"

int main() {
	int num1, num2;
	printf("Enter a two numbers: ");
	scanf("%d %d", &num1, &num2);
	printf("Product: %d\n", Product(num1, num2));
	printf("Quotient: %d\n", Quotient(num1, num2));
	printf("Remainder: %d\n", Remainder(num1, num2));
}
