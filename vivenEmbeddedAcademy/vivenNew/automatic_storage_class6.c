#include <stdio.h>

int fun(int number);

int main(void) {
	auto i;
	for (i = 1; i <= 10; i++) {
		printf("%3d %3d\n", i, fun(i));
	}
}

int fun(int number) {
	auto int x;
	x = 100;
	x += 1;
	return x;
}

