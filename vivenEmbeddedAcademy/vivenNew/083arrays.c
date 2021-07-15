/* Given a list of numbers and a number k, return whether any two numbers from the 
 * list add up to k. 
 * for example, given [10, 15, 3, 7] and k of 17, return true since 10+7 is 17 */

#include <stdio.h>
#define MAX_ARRAY_SIZE 50
#define TRUE 1
#define FALSE 0

void accept(int array[], int array_size);
_Bool Add_And_Check_In_The_List(int array[], int array_size, int check_this_number);

int main(void) {
	int arr[MAX_ARRAY_SIZE];
	int array_size, k;
	_Bool check_responce;

	printf("Enter number elements required(Max = %d): ", MAX_ARRAY_SIZE);
	scanf("%d", &array_size);

	printf("Enter a number for k: ");
	scanf("%d", &k);

	accept(arr, array_size);
	check_responce = Add_And_Check_In_The_List(arr, array_size, k);
	if (check_responce) {
		printf("\nTRUE\n");
	} else {
		printf("\nFALSE\n");
	}

}

void accept(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &i[array]);
	}
}

_Bool Add_And_Check_In_The_List(int array[], int array_size, int check_this_number) {
	int i, j ;

	for (i = 0; i < array_size; i++) {
		for (j = 0; j < array_size; ++j) {
			if (i==j) {
				;
			} else {
				if (*(array+i)+*(array+j) == check_this_number) {
					return TRUE;
				}
			}
		}
	}

	return FALSE;
}
