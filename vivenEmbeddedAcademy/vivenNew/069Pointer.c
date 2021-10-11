#include <stdio.h>

int main(void) {
	int arr[6] = {8, 18, 28, 38, 48, 58};
	int *ptr;
	ptr = arr+1;
	++ptr;
	--*ptr;
	++ptr;
	++*ptr;
	printf("%d %d %d\n", ptr[-1], ptr[0], ptr[1]);
	
	return 0;
}
