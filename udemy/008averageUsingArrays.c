#include <stdio.h>
int main(int argc, char *argv[]) {
	int i;
	int grades[10];
	int count = 10;
	long sum = 0;
	float average = 0.0f;

	printf("\nEnter 10 grades:\n");

	for (i = 0; i < count; ++i) {
		printf("%2u>", i+1);
		scanf("%d", &grades[i]); 
		sum += grades[i];
	}

	average = ((float) sum)/count;
	printf("Sum = %ld\n", sum);
	printf("Average of ten grades entered is: %.2f\n", average);
	return 0;
}
