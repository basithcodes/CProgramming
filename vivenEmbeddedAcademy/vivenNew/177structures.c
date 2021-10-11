#include <stdio.h>

int main(void) {

	typedef struct {
		int id;
		char name[30];
		float salary;
	} EMP;

	return 0;
}

void abc() {
	/* EMP e1, e2, e3;// EMP is local to  */
	/*                // main so it gives error */
}
