#include <stdio.h>

int main(void)
{
	int x;
	x = 'A' && 'c';
	printf("%d\n", x);
	x = '\n' && 'c';
	printf("%d\n", x);
	x = '\0' && 'c';
	printf("%d\n", x);
	return 0;
}
