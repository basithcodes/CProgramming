#include <stdio.h>

int main(void) {
	int arr[10] = {5};
	int numberOfElements;
	int i;

	/* arr[1] = 4; */
	/* arr[3] = 45; */

	printf("Enter the number of elements you want to scan(less than 10 elements): \n");
	scanf("%d", &numberOfElements);

	// accepting/scanning array values
	for (i = 0; i < numberOfElements; i++) {
		printf("arr[%d] = ", i);
		/* scanf("%d", arr+i); */
		scanf("%d", &arr[i]);
	}

	// displaying array values
	printf("Array Values: \n");
	for (i = 0; i < numberOfElements; i++) {
		printf("%d ", arr[i]);
	}
	printf("\n");

}
