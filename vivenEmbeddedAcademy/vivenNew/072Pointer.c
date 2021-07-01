#include <stdio.h>

int main(void) {
	int a[2];
	int i;
	for (i = 0; i < 10; i++)
		a[i] = i*i;
	printf("%d %d\n", a[3], a[4]);
	
	return 0;
}
