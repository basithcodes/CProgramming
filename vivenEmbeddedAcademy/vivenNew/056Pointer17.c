#include <stdio.h>

void jump(int *x, int y);

int main() {
	int x = 2, y = 4;
	jump(&x, y);
	printf("%d %d\n", x, y);
}

void jump(int *x, int y) {
	*x = *x * *x;
	y = y * y;
}
