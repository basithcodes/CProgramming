#include <stdio.h>

struct employee {
	int id;
	char name[20];
	int sal;
} e1, e2 = {2, "xyz", 50000}, e3; // global vars

typedef struct employee emp;

int main(void) {

	struct employee e4, e5; // local struct vars

	return 0;
}
