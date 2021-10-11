#include <stdio.h>
#define size 100

int main(void) {
	int a;
	/* a = ++size; // size replaced by 100 and  */
	/*             // constants cannot be incremented */
	printf("%d %d", size, a);
}
