#include <stdio.h>

int main(int argc, char *argv[])
{
	float speed, acceleration, time;
	printf("r = speed + acceleration * time\n");
	printf("Enter the speed, acceleration and time(minutes) values(speed:acceleration:time): ");
	scanf("%f:%f:%f", &speed, &acceleration, &time);
	printf("r = %f\n", speed+acceleration*time);
	return 0;
}
