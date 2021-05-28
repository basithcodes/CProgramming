/* Print magic matrix */
#include <stdio.h>

const int ROWS = 5;
const int COLUMNS = ROWS;

int main(void)
{
	int arr[ROWS][COLUMNS];
	int i, j, num, n;

	printf("Enter a value for n(odd value): ");
	scanf("%d", &n);

	i = n-1;
	j = (n-1)/2;

	for (num = 1; num <= n*n; num++) {
		arr[i][j] = num;
		i++;
		j--;
		if (num % n == 0) {
			i -= 2;
			j++;
		} else if (i == n) {
			i = 0; // go to the top most row
		} else if (j == -1) {
			j = n-1; // go to rightmost column
		}
	}

	for (i = 0; i < n; i++) {
		for (j = 0; j < n; j++) {
			printf("%4d", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}
