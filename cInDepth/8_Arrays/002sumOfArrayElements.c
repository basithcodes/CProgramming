/* This program adds all elements of an arrays */

/* My logic */

#include <stdio.h>
#define SIZE 5

int main(int argc, char *argv[])
{
	int arr[SIZE];
	int sum = 0;
	for (int i = 0; i <= SIZE; i++) {
		printf("Enter the element for the arr[%d]: ", i);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}

	printf("%d\n", sum);

	return 0;
}
