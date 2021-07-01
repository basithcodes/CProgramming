#include <stdio.h>

int main(void)
{
	int a[5] = {8, 88, 54, 23, 78};
	int *p;
	p = a + 1;
	printf("%d %d %d\n", ++*p, *p++, *++p);
	return 0;
}
