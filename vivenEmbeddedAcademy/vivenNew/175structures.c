#include <stdio.h>

struct{
	int id;
	char name[20];
	int sal;
} e1, e2 = {2, "xyz", 50000}, e3; // global vars is possible

int main(void) {

	/* struct e4, e5; // local struct vars cannot be defined */

	return 0;
}
