#include <stdio.h>

int g;

void xyz() {
	g++;
}

int main(void)
{
	xyz();
	return 0;
}
