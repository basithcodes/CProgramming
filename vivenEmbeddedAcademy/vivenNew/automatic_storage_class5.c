#include <stdio.h>

int main(void) {
	int a;
	a = 10;
	printf("%d\n", a);

	{
		int b; //anonymous scope
		b = 20;
		a++;
		b++;
		printf("%d", a);
		printf("%d", b);
	}

	printf("%d\n", a);
	printf("%d\n", b);

}
