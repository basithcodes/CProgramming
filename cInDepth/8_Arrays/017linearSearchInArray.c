#include <stdio.h>
#include <string.h>

#define MAX 10

int linearSearch(int itemList[], int numberOfElementsInList, int searchForItem);

int main(void) {
	int itemList[MAX] = {1, 2, 3, 4, 5, 9, 10, 11, 17, 18};
	int searchForItem;
	int position;
	/* char quit; */

	printf("Enter a value to be searched: ");
	scanf("%d", &searchForItem);

	position = linearSearch(itemList, MAX, searchForItem);

	if (position != -1) {
		printf("Item is in position: %d\n", position);
	} else {
		printf("Element not found.\n");
	}
	return 0;
}

int linearSearch(int itemList[], int numberOfElementsInList, int searchForItem) {
	int i, value;
	i = 0;
	while (searchForItem != itemList[i] && i < numberOfElementsInList)
		i++;
	if (searchForItem == itemList[i])
		return i;
	else
		return -1;
}
