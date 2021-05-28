/* Create a C program to calculate the weekly pay */

#include <stdio.h>

int main()
{
	unsigned short int weeklyHours;
	int basicPayRate = 12;
	double grossPay, netPay;
	double overTimePayRate = 0;
	double taxRate1 = 0.15, taxRate2 = 0.20, taxRate3 = 0.25;
	int firstCut = 300, secondCut, restCut;

	printf("Enter number of hours worked in a week: ");
	scanf("%hu", &weeklyHours);

	// calculate the gross pay
	if (weeklyHours > 40)
	{
		overTimePayRate = basicPayRate + 0.5 * basicPayRate;
		grossPay = overTimePayRate * (weeklyHours - 40) + 40 * basicPayRate;
	}
	else
	{
		grossPay = weeklyHours * basicPayRate;
	}

	/* calculate the netpay */
	if (grossPay <= 300)
	{
		netPay = grossPay - taxRate1 * grossPay;
	}
	else if (grossPay > 300 && grossPay <= 450)
	{
		secondCut = grossPay - firstCut;
		netPay = grossPay - (firstCut * taxRate1 + secondCut * taxRate2);
	}
	else if (grossPay > 450)
	{
		secondCut = 150;
		restCut = grossPay - firstCut - secondCut;
		netPay = grossPay - (firstCut * taxRate1 + secondCut * taxRate2 + restCut * taxRate3);
	}

	/* print the result(netpay, grosspay, taxes) */
	printf("Salary: \n");
	printf("grosspay = %.2lf\namount deducted = %.2lf\nnetpay = %.2lf\n",
		   grossPay, grossPay - netPay, netPay);

	return 0;
}