/* 54. Write a program to print twin primes less than 1000. If two consecutive */
/*     odd numbers are both prime(eg 17, 19) then they are known as twin primes. */

#include <stdio.h>
#include "../inc/myfun.h"

int main() {
	int limit;
	printf("Enter limit of prime number: ");
	scanf("%d", &limit);
	twinPrimes(limit);
	return 0;
}
