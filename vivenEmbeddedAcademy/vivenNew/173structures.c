#include <stdio.h>

struct employee {
	int id;
	char name[20];
	int sal;
};

typedef struct employee emp;

int main(void) {

	struct employee e1, e2, e3;// valid
	emp e4, e5, e6; // valid
	return 0;
}
