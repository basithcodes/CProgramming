/* 48. Using the function sumPrDivisors() in ex: 44. Write a single line  */
/*     function isPrime() containing only a return statement. This function  */
/*     should return 1 if the number is prime and 0 otherwise. */
#include <stdio.h>
#include "myfun.h"

int isPrime(int number);

int main() {
	int num;
	printf("Enter a number: ");
	scanf("%d", &num);
	printf("%d\n", isPrime(num));
	return 0;
}

int isPrime(int number) {return sumPrDivisors(number)>1? 0:1;}

