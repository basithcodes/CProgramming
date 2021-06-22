#include <stdio.h>

int main(void) {
	int i;
	for (i = 0; i < 3; i++) {
		int a = 5; // Iteration scope
		printf("%d\n", a);
	}
	return 0;
}
