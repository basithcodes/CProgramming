#include <stdio.h>

int main(void)
{
	int arr[3][3] = {
		{12, 13, 14},
		{56, 23, 12},
		{67, 8, 12},
	};

	printf("%p", arr); // 500 (address)
	printf("%p", &arr); // 500 (address)
	printf("%p", *arr); // 500 (address)
	printf("%d", **arr); // 12

	return 0;
}
