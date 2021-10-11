#include <stdio.h>

int main(void)
{
	int arr[][4] = {
		{10, 11, 12, 13}, 
		{20, 21, 22, 23},
		{30, 31, 32, 33}
	};

	/* Note */
	/* Considering imaginary addresses */

	printf("%p\n", arr); // 404 (address)
	printf("%p\n", arr+0); // 404 (address)
	printf("%p\n", *arr); // 404 (address)
	printf("%p\n", arr+1); // 412 (address)
	printf("%p\n", arr+2); // 420 (address)
	printf("%p\n", *(arr+0)); // 404 (address)
	printf("%p\n", *(arr+1)); // 412 (address)
	printf("%p\n", *(arr+2)); // 420 (address)
	printf("%p\n", *(arr+2) + 3); // 426 (address) 
	printf("%p\n", *(arr+0) + 1); // 406 (address)
	printf("%p\n", *arr+1); // 406 (address)
	printf("%p\n", *arr+5); // 414 (address)
	printf("%d\n", *(*(arr+2) + 3)); // 33 (value)

	return 0;
}
