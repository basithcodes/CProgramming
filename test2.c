#include <math.h>
#include <stdio.h>
#include <stdlib.h>


long long findNb(long long m)
{
  // your code
  long long n1 = (-1+sqrt(1+8*sqrt(m)))/2;
  long long n2 = (-1-sqrt(1+8*sqrt(m)))/2;
  

	printf("n1*n2 = %lld\n", n1*n2);
	printf("n1 = %lld\n", n1);
	printf("n2 = %lld\n", n2);

	if ((m / n1) == 0)
		return n1;
	else if ((m / n2) == 0)
		return n2;
	else if ((m / (n1*n2)) == 0)
		return n1*n2;
	else
		return -1;
	
}

long long cube(long long n) {
	if (n == 1)
		return 1;
	return (n*n*n)+((n-1)*(n-1)*(n-1));
}

int main(void)
{
	/* long long l = findNb(24723578342962); */

	long long p = cube(3153);
	printf("%lld\n", p);

	/* printf("%lld", findNb(441)); */
	return 0;
}
