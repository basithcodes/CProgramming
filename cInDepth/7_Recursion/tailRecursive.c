#include <stdio.h>

void fun(int number) {
	if (number == 0) 
		return;
	else 
		printf("%d ", number);
	return fun(number - 1); 
}

int main() {
	fun(3);
	return 0;
}
