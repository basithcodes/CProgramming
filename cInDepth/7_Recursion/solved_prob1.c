/* How many times this get function being called */
#include <stdio.h>
void get(int number) {
	if (number < 1)
		return;
	get(number-1);
	get(number-3);
	printf("%d ", number);
}

int main() {
	get(6);
	return 0;
}

