#include <stdio.h>

int main(void) {
	struct employee {
		char name[30];
		int age;
		float weight;
	};

	struct employee e = {"abdul basith", 20, 73.56};
	struct employee *ptr = &e;

	printf("Name: %s\n", ptr->name);
	printf("Age: %d\n", (*ptr).age);
	printf("Weight: %f\n", (*ptr).weight);

	return 0;
}
