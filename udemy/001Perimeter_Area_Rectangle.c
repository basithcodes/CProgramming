#include <stdio.h>
int main() {
	float area;
	float perimeter;
	float height;
	float width;

	printf("Enter the height width\n");
	scanf("%f %f", &height, &width);

	area = height * width;

	perimeter = 2*(height + width);

	printf("height = %f\nwidth = %f\nPerimeter = %f\n", height, width, perimeter);
}

