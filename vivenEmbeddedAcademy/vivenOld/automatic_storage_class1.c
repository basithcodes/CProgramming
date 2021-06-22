#include <stdio.h>

void increment();

int main() {
	increment();
	increment();
	increment();
}

void increment() {
	int x = 10;
	x++;
	printf("%d\n", x);
}
