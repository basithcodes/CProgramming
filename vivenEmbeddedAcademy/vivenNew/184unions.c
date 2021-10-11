#include <stdio.h>
struct info1 {
	char hobby[10];
	int cretditNumber;
};

struct info2 {
	char vehicleNumber[10];
	int dist;
};

union info {
	struct info1 a;
	struct info2 b;
};

struct emp {
	char name[20];
	char grade[4];
	int age;
	union info f;
};

int main(void) {

	printf("%ld %ld %ld\n", 
			sizeof(struct info1), sizeof(struct info2), sizeof(union info));
	return 0;
}
