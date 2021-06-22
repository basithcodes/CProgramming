#include <stdio.h>

int main(void)
{
	int i;
	int *ptr;
	int **pptr;
	int ***ppptr;

	i = 25;
	ptr = &i;
	pptr = &ptr;
	ppptr = &pptr;

	return 0;
}
