#include <stdio.h>

int fun1(int);
float fun2(float);

int main(void) {
	int i = 10;
	float s = 34.45;

	int (*ip) (int); // pointer declaration for the function fun1
	float (*fp) (float); // pointer declaration for the function fun2

	ip = fun1;
	fp = fun2;

	printf("%d %f\n", ip(i), fp(s));

	return 0;
}

int fun1(int number) {
	return number;
}

float fun2(float value) {

	return value;
}

