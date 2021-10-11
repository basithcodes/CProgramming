#include <stdio.h>

void sample() {
	++a;
}

int main(void) {
	 int a = 0;

	 sample();
	 sample();
	 sample();

	 printf("%d\n", a);
}
