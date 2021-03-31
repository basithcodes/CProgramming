#include <stdio.h>
int main(int argc, char *argv[])
{
	float area, radius;
	printf("Enter the radius value: ");
	scanf("%f", &radius);
	area = 3.14f*radius*radius;
	printf("%f\n", area);
	return 0;
}
