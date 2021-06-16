//1.c
#include <stdio.h>

int i = 9;
int p = 9;
int main(void)
{
	p = 5;
	int x = fun();
	printf("%d\n", x);
	return 0;
}

void hello(int i) {
	printf("%d\n", i);
	printf("Hello\n");
}
