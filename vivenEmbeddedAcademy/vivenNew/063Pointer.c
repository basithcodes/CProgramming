#include <stdio.h>

int main() {
	const int a = 10; // constant variable 
	printf("Before: a = %d\n", a);
	// not possible to change value directly but it can be 
	// changed using the address.
	/* a = 123;  */
	int *iptr = &a;
	*iptr = 89;
	printf("After: a = %d\n", a);
	int **ip2ptr = &iptr;
	**ip2ptr = 45;
	printf("After: a = %d\n", a);
	return 0;
}
