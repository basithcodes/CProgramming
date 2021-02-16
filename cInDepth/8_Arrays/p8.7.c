/* Program to pass array elements to functions */
#include <stdio.h>
#define SIZE 10
void check(int num);

int main() {
	int arr[SIZE];
	int i;
	printf("Enter %d elements: ", SIZE);
	for (i = 0; i < SIZE; i++) {
		scanf("%d", &arr[i]);
		check(arr[i]);
	}
}
void check(int num) {
	if (num % 2 == 0)
		printf("EVEN - %d\n", num);
	else
		printf("ODD - %d\n", num);
}
