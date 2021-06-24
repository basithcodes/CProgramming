#include <stdio.h>

int * jump();

int main() {
	int *s;
	s = jump(); //caller
	printf("%d\n", *s);
}

int * jump() { //callee
	//int a= 10; // non static value
	static int a= 10;
	return &a;
}
