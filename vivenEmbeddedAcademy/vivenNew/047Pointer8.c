#include <stdio.h>

int main(void) {
	char * cptr;
	int * iptr;
	float *fptr;
	float p = 20.4;
	printf("%ld %ld %ld", 
			sizeof(cptr), sizeof(iptr), sizeof(fptr));

	fptr = &p;

	printf("%ld", sizeof(*fptr));
	return 0;
}
