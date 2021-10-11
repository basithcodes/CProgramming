#include <stdio.h>

struct s {
	short int a;
	int p;
	float b;
	double m;
};

union u {
	int a;
	float b;
	double q;
};

int main(void) {
	struct s s1;
	union u u1;
	printf("Size of struct s1: %ld\nSize of union u1: %ld\n", 
			sizeof(struct s), sizeof(union u));
	return 0;
}
