#include <stdio.h>

int main(void)
{
	int j, max, min, count = 0;
	
	printf("Enter max and min values: ");
	scanf("%d %d", &max, &min);
	while (min <= max) {
		for (j = 2, count = 0; j <= min; ++j) {
			if(min%j == 0) {
				count++;
				if (count > 1)
					break;
			}
		}
		if (count == 1)
			printf("%d ", min);
		min++;
	}
	printf("\n");
	return 0;
}
