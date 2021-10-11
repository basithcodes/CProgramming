#include <stdio.h>

int main(void) {
	int arr[] = {1, 2, 3, 4, 5};
	//++arr;
	--*arr;
	--*arr;
	printf("%d\n", *arr);
}
