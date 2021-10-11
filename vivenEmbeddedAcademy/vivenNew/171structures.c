#include <stdio.h>
#include <string.h>

struct emp {
	int id;
	char name[30];
	int sal;
};

int main(void) {
	/* emp e1, e2, e3; // invalid in c  */
	/*                 // but valid in c++ */
	struct emp e1, e2, e3; // valid
	struct emp e4 = {4, "xyz", 45000}; // valid
	int k;
	e1.id = 1;
	/* e1.name = "abc"; // invalid */
	/* e1.name = abc; // invalid */
	strcpy(e1.name, "abc"); // valid

	e2 = e4; // valid

	e3.sal = e1.sal+e2.sal; // valid

	/* e1 > e2; // invalid */

	k = e1.sal > e2.sal; // valid



	return 0;
}
