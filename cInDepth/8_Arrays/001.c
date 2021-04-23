/* Program to input values into an array and display them */
#include <stdio.h>

int main() {
	int arr[5];
	int i;

	for (i = 0; i < 5; i++) {
		printf("Enter a value for arr[%d] : ", i);
		scanf("%d", &arr[i]);
	}

	for (i = 0; i < 5; i++) {
		printf("%d\t", arr[i]);
	}
	printf("\n");
	return 0;
}
