#include <stdio.h>

void abc(int p1, int *p2);

int main() {
	int a = 1, b = 1;
	abc(a, &b);
	printf("%d %d\n", a, b);
	return 0;
}

void abc(int p1, int *p2) {
	++p1;
	++*p2;
	
	printf("\n%d %d\n", p1, *p2);
	if(p1 <= 2)
		abc(p1, p2);
	printf("\n%d %d\n", p1, *p2);
}
