#include <stdio.h>

void fun(register int x);

int main(void) {
	fun(10);
}

void fun(register int x) {
	x = x+1;
	printf("%d\n", x);
	printf("%p\n", x);
}
