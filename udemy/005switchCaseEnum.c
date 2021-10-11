#include <stdio.h>

int main() {
	enum Weekday {Monday, Tuesday, Wednesday, Thursday, Friday, Saturday, Sunday};
	enum Weekday today = Monday;

	switch (today) {
		case Monday:
			printf("Today is Monday(%d)\n", Monday);
			break;
		case Tuesday:
			printf("Today is Tuesday\n");
			break;
		case Wednesday:
			printf("Today is Wednesday\n");
			break;
		case Thursday:
			printf("Today is Thursday\n");
			break;
		case Friday:
			printf("Today is Friday\n");
			break;
		case Saturday:
			printf("Today is Saturday\n");
			break;
		case Sunday:
			printf("Today is Sunday\n");
			break;
		default:
			printf("Invalid Argument");
	}
	return 0;
}
