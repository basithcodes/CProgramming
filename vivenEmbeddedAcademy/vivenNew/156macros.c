#include <stdio.h>

#pragma startup fun1
#pragma exit fun2

void fun1();
void fun2();

int main(void) {
	printf("Inside Main\n");
	return 0;
}

void fun1() {
	printf("Inside fun1\n");
}
void fun2() {
	printf("Inside fun2\n");
}
