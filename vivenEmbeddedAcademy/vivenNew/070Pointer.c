#include <stdio.h>

int main(void) {
	int arr[5] = {6, 16, 26};
	++*arr;
	++*(arr+1);
	++arr[1];
	printf("%d %d %d %d\n", 
			arr[0], *(arr+1), arr[2], *(arr+3));
	
	return 0;
}
