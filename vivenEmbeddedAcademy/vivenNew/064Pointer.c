#include <stdio.h>

int main() {
	int const a = 10;
	const int p = 18; 
	int * const iptr = &p;
	*iptr = 34;
	int j;
	//iptr = &j; // its not possible because iptr is now constant
	printf("%d", *iptr);
	
	return 0;
}
