#include <stdio.h>
#include <string.h>

#define SIZE 5
int main() {
	int arr[SIZE] = {0};
	for (int i = 0; i < sizeof(arr[SIZE]); i++) {
		printf("%d\n", arr[i]);
	}
}
