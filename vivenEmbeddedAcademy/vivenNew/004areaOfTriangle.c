#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Area of a triangle:\n");
	printf("Area = 0.5 * length * breadth\n");
	float length, breadth;
	printf("Enter the length and breadth(length:breadth): ");
	scanf("%f:%f", &length, &breadth);
	printf("Area of triangle = %f\n", 0.5f*(length*breadth));
	return 0;
}
