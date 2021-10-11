#include <stdio.h>

struct world {
	int a;
	int b;
	struct india {
		char c;
		float d;
	}p;
};

int main(void) {
	struct world ns = {
		1,
		'A',
		'i',
		1.4
	};

	printf("%d %c %c %f\n", ns.a, ns.b, ns.p.c, ns.p.d);

	return 0;
}
