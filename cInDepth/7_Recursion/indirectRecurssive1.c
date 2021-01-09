#include <stdio.h>
void odd();
void even();

int number = 1;
void even() {
	if (number <= 10) {
		printf("%d ", number - 1);
		number++;
		odd();
	}
	return;
}

void odd() {
	if (number <= 10) {
		printf("%d ", number+1);
		number++;
		even();
	}
	return;
}

int main() {
	odd();
	printf("\n");
	return 0;
}
