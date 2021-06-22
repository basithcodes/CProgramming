#include <stdio.h>

void abc();

int main(void)
{
	abc();
	abc();
	return 0;
}

void abc() {
	int l;
	static int s;
	l =++s ;
	printf("\n  %d %d", l, s);
	if(l <= 2)
		abc();
	printf("\n  %d %d", l, s);
}
