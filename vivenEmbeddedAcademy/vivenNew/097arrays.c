#include <stdio.h>

int main(void) {
	static int arr[3][3] = {
		{1, 11, 21},
		{2, 12, 22},
		{3, 13, 23}
	};

	int *ptr[3];
	int **pptr;

	ptr[0] = &arr[0][0];
	ptr[1] = &arr[1][0];
	ptr[2] = &arr[2][0];

	pptr = ptr;

	++*pptr;
	++ptr[0];
	++**pptr;
	++*ptr[0];

	++pptr;
	++*pptr;
	--ptr[1];
	--**pptr;
	++*ptr[1];

	++pptr;
	++*pptr;
	--*ptr[2];
	++**pptr;

	printf("%d %d %d\n", arr[0][2], arr[1][2], arr[2][0]);
	printf("%d %d %d\n", *(*(arr+1)+2), *(*(arr+2)+0), *(*(arr+0)+2));
	printf("%d %d %d\n", *ptr[0], *ptr[1], *ptr[2]);
	printf("%d %d %d\n", **(ptr+0), **(ptr+1), **(ptr+2));
}
