#include <stdio.h>
#include <string.h>

int main(void) {
	int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int low = 0,high = sizeof(arr)/sizeof(int)-1;
	int mid = (low + high)/2;
	int item = 6, count = 0;
	

	int lengthOfArray = high;

	/* printf("Which number would like to search: "); */
	/* scanf("%d", &item); */

	while (arr[mid] != item && count < lengthOfArray) {
		 if(arr[mid] > item) {
			high = mid-1;
			mid = (low + high)/2;
		} else if(arr[mid] < item) {
			low = mid + 1;
			mid = (low + high)/2;
		}
		count++;
	}
	if (arr[mid] == item) {
		printf("The searched item is at index: %d\n", mid);
	} else {
		printf("Number not found\n");
	}
	return 0;
}
