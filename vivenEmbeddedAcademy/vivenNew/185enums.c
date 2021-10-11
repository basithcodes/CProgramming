#include <stdio.h>

int main(void) {
	enum color {BLACK, WHITE, GREEN, BLUE = 11, GRAY, PURPLE};
	enum color x;
	int option;
	printf("\n %d. BLACK\n", BLACK);
	printf("\n %d. WHITE\n", WHITE);
	printf("\n %d. GREEN\n", GREEN);
	printf("\n %d. BLUE\n", BLUE);
	printf("\n %d. GRAY\n", GRAY);
	printf("\n %d. PURPLE\n", PURPLE);

	printf("\nSelect a color: ");

	scanf("%d", &option);

	switch (option) {
		case BLACK: printf("\n Black Is selected\n"); break;
		case WHITE: printf("\n White Is selected\n"); break;
		case GREEN: printf("\n Green Is selected\n"); break;
		case BLUE: printf("\n Blue Is selected\n"); break;
		case GRAY: printf("\n Gray Is selected\n"); break;
		case PURPLE: printf("\n Purple Is selected\n"); break;
	}
	return 0;
}
