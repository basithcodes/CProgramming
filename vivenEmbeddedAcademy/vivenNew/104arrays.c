#include <stdio.h>

int main(void) {
	int i, j, k;
	int a[2][3][2] = {
		{
			{2, 4},
			{7, 8},
			{3, 4}
		},

		{
			{2, 2},
			{2, 3}, 
			{3, 4}
		}
	};

	printf("%p %p %p %d\n", a+i, *a+j, **a+k, ***a+k);

	return 0;
}
