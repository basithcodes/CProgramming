#include <stdio.h>

int main(void) {
	struct a {
		int i;
		char ch[2];
	};

	union b {
		int i;
		char ch[2];
	};

	struct a Z;
	union b M;

	Z.i = 512;
	M.i = 512;

	printf("%ld\n", sizeof(Z));
	printf("%d %d %d\n", Z.i, Z.ch[0], Z.ch[1]);

	printf("%ld\n", sizeof(M));
	printf("%d %d %d\n", M.i, M.ch[0], M.ch[1]);

	return 0;
}
