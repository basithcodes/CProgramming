#include <stdio.h>
int main(int argc, char *argv[])
{
	float number1, number2;
	printf("Enter two numbers (number1:number2): ");
	scanf("%f:%f", &number1, &number2);
	float aPlusbSquared = number1*number1 + number2*number2 + 2.0f*number1*number2;
	printf("(a + b)^2 = %f\n", aPlusbSquared);
	return 0;
}
