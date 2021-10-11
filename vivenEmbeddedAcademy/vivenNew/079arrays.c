/* WAP to find the second max element of the array */

#include <stdio.h>
#define MAX_ARRAY_SIZE 50

void accept(int array[], int array_size);
void display(int array[], int array_size);
int Second_Max_Value_In_Array(int array[], int array_size);

int main(void) {
	int arr[MAX_ARRAY_SIZE];
	int array_size;

	printf("Enter number elements required(Max = %d): ", MAX_ARRAY_SIZE);
	scanf("%d", &array_size);

	accept(arr, array_size);

	/* display(arr, array_size); */

	printf("Second max value in the array is %d\n", Second_Max_Value_In_Array(arr, array_size));
	return 0;
}

void accept(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &i[array]);
	}
}

void display(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("%d ", array[i]);
	}
	printf("\n");
}

int Second_Max_Value_In_Array(int array[], int array_size) {
	int i, max = *(array), secondMax = 0;
	for (int i = 0; i < array_size; i++) {
		if (max < *(array+i)) {
			secondMax = max;
			max = *(array+i);
			continue;
		}

		if ((secondMax < *(array+i)) && (max > *(array+i))) {
			secondMax = *(array+i);
		}
	}
	return secondMax;
}
