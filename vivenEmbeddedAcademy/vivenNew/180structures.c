#include <stdio.h>
#include <stdio_ext.h>
#include <string.h>

typedef struct student {
	char name[30];
	int age;
	int rollno;
}std;

int main(void) {
	std s[3]; // array of structures
	int i;

	printf("Enter student details: \n\n");

	for (i = 0; i < 3; ++i) {
		printf("Enter student %d name: ", i+1);
		fgets(s[i].name, 30, stdin);
		s[i].name[strcspn(s[i].name, "\n")] = 0;
		__fpurge(stdin);

		printf("Enter student %d age: ", i+1);
		scanf("%d", &s[i].age);
		__fpurge(stdin);

		printf("Enter student %d rollno: ", i+1);
		scanf("%d", &s[i].rollno);
		__fpurge(stdin);

		printf("\n");

	}

	printf("Printing student details: \n\n");

	for (i = 0; i < 3; ++i) {
		printf("Information of Student %d: \n", i+1);
		printf("name: %s\nage: %d\nrollno: %d\n\n\n", s[i].name, s[i].age, s[i].rollno);
	}
}
