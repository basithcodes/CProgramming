/* WAP to accept an array of elements find out each element how many times occurs and display the count */

#include <stdio.h>

#define MAX_ARRAY_SIZE 50

void accept(int array[], int array_size);
void display_repeated_element_count(int array[], int array_size);

int main(void) {
	int arr[MAX_ARRAY_SIZE];
	int array_size;

	printf("Enter number elements required(Max = %d): ", MAX_ARRAY_SIZE);
	scanf("%d", &array_size);

	accept(arr, array_size);
	display_repeated_element_count(arr, array_size);

}

void accept(int array[], int array_size) {
	int i;
	for (int i = 0; i < array_size; i++) {
		printf("array[%d] = ", i);
		scanf("%d", &i[array]);
	}
}

void display_repeated_element_count(int array[], int array_size) {
	int i,j,count, freq[array_size];
	for(i=0;i<array_size;i++) {
		freq[i]= -1;
	}

	for(i=0;i<array_size;i++) {
		count=1;
		for(j=i+1;j<array_size;j++) {
			if(array[i]==array[j]) {
				count++;
				freq[j]=0;
			}
		}
		if(freq[i]!=0)
			freq[i]=count;
	}

	for(i=0;i<array_size;i++) {
		if(freq[i]!=0)
			printf("%d occured %d times\n",array[i],freq[i]);
	}
}
