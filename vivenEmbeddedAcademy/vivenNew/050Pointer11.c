#include <stdio.h>

int main(void) {
	int a = 10;
	float b = 34.343;

	void *vptr;

	printf("%ld", sizeof(vptr));

	vptr = &a;

	//printf("%d\n", *vptr); // it gives error
	printf("%d\n", *(int *)vptr); // typecast it then print the value

	vptr = &b;
	printf("%f\n", *(float *)vptr); // typecast it then print the value
	return 0;
}

