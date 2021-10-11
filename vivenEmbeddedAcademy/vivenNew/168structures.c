#include <stdio.h>

struct student {
	int sid;
	char sname[30];
	float fees;
};

int main(void) {

	struct student s;
	printf("sizeof struct student: %ld\tsizeof struct student s(variable): %ld\n", 
			sizeof(struct student), sizeof(s)); // 40 bytes
	printf("Enter sid: ");
	scanf("%d", &s.sid);

	printf("Enter sname: ");
	scanf("%s", s.sname);

	printf("Enter fees: ");
	scanf("%f", &s.fees);

	printf("Sid: %d\n", s.sid);
	printf("Sname: %s\n", s.sname);
	printf("fees: %f\n", s.fees);
	return 0;
}
