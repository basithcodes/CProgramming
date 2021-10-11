#include <stdio.h>
#include <stdio_ext.h>

#define NUMBER_OF_EMPLOYEES 2

enum department {finance, marketing, personnel};

typedef struct {
	int d, m, y;
} date;

union bit {
	int FALSE;
	int TRUE;
};

typedef struct {
	union bit delbit;
	char name[15];
	int number;
	enum department d;
	float sal;
	date dob;
} employee;

employee accept_employee_data();
void display_data(employee);
int find_employees(employee e[], int);

int main(void) {

	employee emp[NUMBER_OF_EMPLOYEES];
	int i, n, pos;
	char reply;

	// Accept Employee Data
	printf("Enter employee details: \n");

	for (i = 0; i < NUMBER_OF_EMPLOYEES; ++i) {
		emp[i] = accept_employee_data();
	}

	// Display Employee Data
	for (i = 0; i < NUMBER_OF_EMPLOYEES; ++i) {
		printf("Employee: %d\n", i+1);
		display_data(emp[i]);
	}

	// Delete Employee Data
	printf("Enter employee number to delete it: ");
	scanf("%d", &n);

	pos = find_employees(emp, n);

	if (pos > -1) {
		printf("Employee Found: \nDisplaying the data: ");
		display_data(emp[pos]);
		printf("Delete Record: Y/N? ");
		__fpurge(stdin);
		scanf("%c", &reply);
		if (reply == 'y' || reply == 'Y') {
			emp[pos].delbit.TRUE = 1;
		}
	} else {
		printf("Data not found\n");
	}

	// Display employee details after deleting
	for (i = 0; i < NUMBER_OF_EMPLOYEES; ++i) {
		if (emp[i].delbit.FALSE == 0) {
			printf("Employee: %d\n", i+1);
			display_data(emp[i]);
		}
	}

	return 0;
}

employee accept_employee_data() {
	employee e;
	e.delbit.FALSE = 0;
	printf("\n Number: ");
	scanf("%d", &e.number);

	printf("\n Name: ");
	scanf("%s", e.name);

	printf("\n Salary: ");
	scanf("%f", &e.sal);

	printf("\n Department: \n%d. Finance, %d. Marketing, %d. Personnel: ", 
			finance, marketing, personnel);
	scanf("%d", &e.d);

	printf("\nDate of Birth (dd-mm-yyy): ");
	scanf("%d-%d-%d", &e.dob.d, &e.dob.m, &e.dob.y);

	return e;

}

void display_data(employee e) {
	int option = e.d;
	printf("\nNumber: %d", e.number);
	printf("\nName: %s \n Salary: %f \n", e.name, e.sal);
	printf("\nDate of birth: %d %d %d", e.dob.d, e.dob.m, e.dob.y);
	printf("\nDepartment: ");
	switch (option) {
		case finance: printf("Finance\n"); break;
		case marketing: printf("Marketing\n"); break;
		case personnel: printf("Personnel\n"); break;
	}
	return;
}

int find_employees(employee e[], int n) {
	int i;
	for(i = 0; i < NUMBER_OF_EMPLOYEES; i++) {
		if ((e[i].number == n) && (e[i].delbit.FALSE == 0)) {
			return i;
		}
	}
	return (-1);
}
