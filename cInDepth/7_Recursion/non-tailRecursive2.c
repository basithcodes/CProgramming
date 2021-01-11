#include <stdio.h>

int fun(int number) {
	if (number == 1) 
		return 0;
	else
		return 1 + fun(number/2); 
}

int main() {
	printf("%d ", fun(8));
	return 0;
}
