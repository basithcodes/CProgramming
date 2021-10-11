
#include <stdio.h>

void xyz() {
	g++;
}
int g;
void abc() {
	++g;
}

int main(void)
{
	abc();
	xyz();
	return 0;
}
