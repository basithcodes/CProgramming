#include <stdio.h>

void fun(int number) {
	if (number == 0) 
		return;
	fun(number - 1); 
	printf("%d ", number);
}

int main() {
	fun(3);
	return 0;
}
