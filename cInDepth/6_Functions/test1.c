#include <stdio.h>

void add(int arr[]);

int main(void)
{
	int arr[3] = {1, 7};
	add(arr);
	return 0;
}

void add(int a[]) {
	printf("%d\n", a[0]);
	printf("%d\n", a[1]);
}
