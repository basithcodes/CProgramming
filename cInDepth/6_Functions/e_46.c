#include <stdio.h>
void amicableNumber(int, int);

int main(void) {
	int range0, range1;
	printf("Enter a range0 and range1 values: ");
	scanf("%d %d", &range0, &range1);
	amicableNumber(range0, range1);
	return 0;
}

void amicableNumber(int range0, int range1) {
	int i, sum1 = 0, sum2 = 0, temp, temp2 = range0;

	while (range0 <= range1) {
		for (i = 1; i < range0; i++) {
			if (range0 % i == 0) {
				sum1 = sum1 + i;
			}
		}
		/* printf("num1 = %d sum1 = %d \n", range0, sum1); */
		temp = temp2+1;
		while (temp <= range1) {
			for (i = 1; i < temp; i++) {
				if (temp % i == 0) {
					sum2 = sum2 + i;
				}
			}
			/* printf("num2 = %d sum2 = %d\n", temp, sum2); */
			if (range0 == sum2 && temp == sum1) {
				printf("\n\n");
				printf("(%d,%d) ", range0, temp);
				printf("\n\n");
			}
			temp++;
			sum2 = 0;
		}
		range0++;
		sum1 = 0;
		/* printf("\n\n"); */
	}
}
