#include <stdio.h>

int fun(int number) {
	if (number == 0)
		return 1;
	else
		return 1+fun(number-1);
}

int main() {
	printf("%d ", fun(4));
	return 0;
}
