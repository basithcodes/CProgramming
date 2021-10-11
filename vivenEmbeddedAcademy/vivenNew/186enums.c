#include <stdio.h>
enum MONTH {JAN=1, FEB, MAR, APRIL, MAY, JUNE, JULY, AUG, SEP, OCT, NOV, DEC};

enum DAY {
	nof_days_jan  = 31, 
	nof_days_feb  = 28, 
	nof_days_mar  = 31, 
	nof_days_apr  = 30, 
	nof_days_may  = 31, 
	nof_days_june = 30, 
	nof_days_july = 31, 
	nof_days_aug  = 31, 
	nof_days_sep  = 30, 
	nof_days_oct  = 31, 
	nof_days_nov  = 30, 
	nof_days_dec  = 31, 
};

int main(void) {
	enum DAY dd;
	enum MONTH mm;
	return 0;
}
