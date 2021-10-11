#include <stdio.h>

int main() {
	int minutesEntered = 0;
	double years = 0.0;
	double days = 0.0;
	double minutesInYears = 0.0;
	double minutesInDays = 0.0;

	printf("Please enter the number of minutes: ");
	scanf("%d", &minutesEntered);

	minutesInYears = 365*24*60;
	minutesInDays = 24*60;

	years = minutesEntered/minutesInYears;
	days = minutesEntered/minutesInDays;

	printf("minutes converted to :\n  years = %lf\n  days = %lf\n", years, days);

	return 0;

}

