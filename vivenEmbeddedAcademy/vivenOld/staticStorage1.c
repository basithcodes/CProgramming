#include <stdio.h>

int main(void) {
	int i;
	for (i = 0; i < 5; i++) {
		static int a = 0;
		int b = 0;
		a++;
		b++;
		printf("\na = %d", a);
		printf(",b = %d\n", b);
	}
	return 0;
}
