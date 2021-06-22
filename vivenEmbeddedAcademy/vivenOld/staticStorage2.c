#include <stdio.h>

void stat();

int main(void)
{
	stat();
	stat();
	stat();
	return 0;
}

void stat() {
	static int i;
	printf("%d %p\n", i, &i);
	i++;
}
