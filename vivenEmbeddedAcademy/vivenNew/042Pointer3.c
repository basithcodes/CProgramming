#include <stdio.h>

int main(void)
{
	int s = 25;
	int *ptr1, *ptr2;

	ptr1 = &s;
	ptr2 = &s;

	printf("%d %d %d", s, *ptr1, *ptr2);

	*ptr2 = 10;

	printf("%d %d %d", s, *ptr1, *ptr2);

	return 0;
}
