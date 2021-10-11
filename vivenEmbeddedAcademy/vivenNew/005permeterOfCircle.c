#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("Permiter of a circle:\n");
	printf("Permiter of a circle = 2*pi*radius\n");
	printf("Enter the radius value: ");
	float radius;
	scanf("%f", &radius);
	printf("Permiter = %f", 2.0f*3.14*radius);
	return 0;
}
