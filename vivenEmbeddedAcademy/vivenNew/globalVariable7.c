#include <stdio.h>

void kiran() {
	extern int g; // declaration but no physical memory
	++g;
}

int g; // definition with physical memory

void xyz() {
	++g;
}

void abc() {
	++g;
}

int main(void)
{
	++g;
	xyz();
	abc();
	kiran();
	printf("%d\n", g);
	return 0;
}
