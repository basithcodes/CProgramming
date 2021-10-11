#include <stdio.h>

#define AND &&
#define OR ||
#define ARANGE (a > 25 AND a < 50) 

int main(void) {
	int a = 30;
	if (ARANGE) { // a > 25 && a < 50
		printf("Within Range\n");
	} else {
		printf("Out of Range\n");
	}
	return 0;
}

