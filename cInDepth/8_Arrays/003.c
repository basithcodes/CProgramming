/* Program to count even and odd numbers in an array */

/* My logic */

#include <stdio.h>
#define SIZE 11

int main() {
	int arr[SIZE];
	int i;
	int count = 0;

	for (i = 0; i < SIZE; i++) {
		printf("Enter a value for arr[%d] : ", i);
		scanf("%d", &arr[i]);
		if (arr[i] % 2 == 0) {
			count++;
		}
	}
	printf("Even count = %d\n Odd count = %d\n", 
			count, SIZE-count);
	printf("\n");
	return 0;
}
