/* 
 * Determine, how many number of times the star will be printed on the screen: 
*/

#include <stdio.h>

void fun1(int n) {
	int i = 0;
	if (n > 1)
		fun1(n - 1);
	for (i = 0; i < n; i++) {
		printf(" * ");
	}
}

int main() {
	int n;
	while (1) {
		printf("Enter n value: ");
		scanf("%d", &n);
		fun1(n);
		printf("\n");
	}
	return 0;
}

