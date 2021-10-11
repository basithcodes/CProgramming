#include <stdio.h>

int main(void)
{
	static int a = 5;
	if (--a) {
		main();
	}
	printf("%d ", a);
	printf("\n");
	return 0;
}
