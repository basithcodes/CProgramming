#include <stdio.h>

int main(void) {
	char st[6] = "Abdul"; //use one more character for null
	char st1[20];
	/* st1 = st; // we cannot have two same addresses in different arrays */
	/* st1 = "Abdul"; // we cannot have two same addresses in different arrays */
	puts(st);
}
