#include <stdio.h>

int main(void) {
	static int a[][4] = {
		{7, 2, 6, 1},
		{9, 3, 4, 5},
		{10, 12, 16, 18}
	};

	/* Assume these memory addresses */

	/* Main Memory Address 1000
	 * Row Memory starts from 500 */

	printf("%d\n", a);
	printf("%d\n", *a);
	printf("%d %d %d\n", a+0, a+1, a+2);
	printf("%d %d %d\n", *(a+0), *(a+1), *(a+2));
	printf("%d %d %d\n", a[0], a[1], a[2]);
	printf("%d %d %d\n", *(a[0]+1), *(a[1]+2), *(a[2]+3));
	printf("%d %d %d\n", a[0][1], a[1][2], a[2][3]);

	return 0;
}
