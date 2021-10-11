/* 
 * Program to evaluate face values 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
	char card_name[3];
	int x;
	int count = 0;
	while (card_name[0] != 'X') {
		puts("Enter the card name: ");
		scanf("%2s", card_name);
		int val = 0;
		switch (card_name[0]) {
			case 'K':
			case 'Q':
			case 'J':
				val = 10;
				break;
			case 'A':
				val = 11;
				break;
			case 'X':
				continue;
			default:
				val = atoi(card_name);
				if ((val < 1) || (val > 10)) {
					puts("I dont understand that value!\n");
					continue;
				}
		}

		if (val > 2 && val < 7) {
			count++;
		} else if (val == 10) {
			count--;
		}
		printf("Current Count: %i\n", count);
		scanf("%d\n", x);
	}
	return 0;
}
