#include <stdio.h>
int main(void) {
	int arr[2][2]; 
	int i, j;

	printf("2x2 matrix\n");
	printf("Each element is 4 bytes\nSo 4*4 = 16 bytes\n");
	printf("size of array = %ld\n", sizeof(arr));
	printf("\n");

	printf("Address\t\tarray\tarrayvalues:\n");

	for (i = 0; i <= 2; ++i) { 
		for (j = 0; j <= 2; ++j) {
			printf("%p arr[%d][%d] = ", &arr[i][j],i,j); 
			scanf("%d", &arr[i][j]); 
		}
	}
	printf("\n");

	for (i = 0; i <= 2; ++i) {
		for (j = 0; j <= 2; ++j) {
			printf("%p ", &arr[i][j]);
		}
		printf("\n");
	}

	int *ptr0 = &arr[0][2];
	int *ptr1 = &arr[1][2];
	int *ptr2 = &arr[2][2];

	printf("addr illegal: ptr0 = %p ptr1 = %p ptr2 = %p\n", ptr0, ptr1, ptr2);
	printf("illegal addr content: *ptr0 = %d *ptr1 = %d *ptr2 = %d\n", *ptr0, *ptr1, *ptr2);

	for (i = 0; i <= 2; ++i) {
		for (j = 0; j <= 2; ++j) {
			printf("%p ", &arr[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}
