#include <stdio.h>
#include <stdlib.h>
int main(int argc, char *argv[])
{

	int number = atoi(argv[1]);
	int i;
	for (i = 0; i < number; ++i) {
		printf("0%dtest.c ", i);
	}
	printf("\n");
	return 0;
}
