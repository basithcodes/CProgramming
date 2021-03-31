#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Area of a rectangle:\n");
	printf("Area = length * breadth\n");
	printf("Enter the length and breadth(length:breadth): ");
	float length, breadth;
	scanf("%f,%f", &length, &breadth);
	printf("Area = %f\n", length*breadth);
	return 0;
}
