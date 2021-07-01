#include <stdio.h>

void fun(int array[]) {
	printf("%d", *array);
	printf("%d", *array+1);
	printf("%d", *(array+1));
	array++;
}

int main(void)
{
	int arr[10] = {1, 2, 3, 4, 5};
	fun(arr);
	return 0;
}
