#include <stdio.h>

int main(void)
{
	int a = 10, *p, **p2p, ***p2p2p;

	p = &a;

	(*p) = (*p) + 10;
	p2p = &p;

	(**p2p) = (**p2p) + 5;
	p2p2p = &p2p;

	printf("%d %d %d %d\n", a, *p, **p2p, ***p2p2p);

	return 0;
}
