#include <stdio.h>

int main(void)
{
	float x = 2.5;
	double y = 2.5;
	if (x == y) {
		printf("\nx and y are equal\n");
		printf("x = %f y = %lf\n", x, y);
		/* Dividing both x and y with same denominator */
		x = 2.5/1000000;
		y = 2.5/1000000;
		printf("x and y values are divided by 1000000\n\n");
	}
	else
		printf("Not equal\n");

	if (x == y) {
		printf("x and y are equal\n");
		printf("x = %f y = %lf\n", x, y);
	}
	else {
		printf("Not equal\n");
		printf("x = %f y = %lf\n\n", x, y);
	}
	return 0;
}
