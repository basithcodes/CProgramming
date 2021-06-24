#include <stdio.h>

int main(void)
{
	short int * siptr1 = (short int *)500;
	short int * siptr2 = (short int *)600;

	float *fptr1 = (float *)500;
	float *fptr2 = (float *)600;

	printf("Difference of addresses: %ld\n", siptr2-siptr1);
	printf("Difference of addresses: %ld\n", fptr2-fptr1);

	return 0;
}
