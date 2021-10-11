#include <stdio.h>

int a = 50;

void fun();
int main(void)
{
	extern int a;
	printf("%d\n", a);
	a = 100;
	printf("%d\n", a);
	fun(a);
	printf("%d\n", a);
	return 0;
}

void fun() {
	printf("%d\n", a);
	a = 9;
}
