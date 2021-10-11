#include <stdio.h>

int g;

void abc() {
	int al;
	static int as;
	al = ++as;
	++g;
	printf("%d %d %d\n", al, as, g);
	if (al <= 2)
		abc();
	printf("%d %d %d\n", al, as, g);
}

void kiran() {
	int l;
	static int s;
	l = ++s;
	++g;
	printf("%d %d %d\n", l, s, g);
	abc();
	if(l <= 2)
		kiran();
	printf("\n %d %d %d\n", l, s, g);
}

int main() {
	kiran();
}

