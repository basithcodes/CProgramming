#include <stdio.h>

int main(int argc, char *argv[]) {
	// create two arrays we care about
	int ages[] = {23, 43, 12, 89, 2};
	char *names[] = {
		"Alan", "Frank", "Mary", "Jones", "Lisa"
	};

	// safely get the size of ages
	int count = sizeof(ages) / sizeof(int);
	int i = 0;

	// first way using indexing
	printf("First Way:\n");
	for (i = 0; i < count; i++) {
		/* printf("%s has %d years alive.\n", names[i], ages[i]); */
		printf("%s has %d years alive.\n", *(names+2), ages[i]);
	}
	printf("---\n");

	// setup the pointer to start of the array
	int *cur_age = ages;
	char **cur_name = names;

	// second way using pointers
	printf("Second Way:\n");
	for (i = 0; i < count; i++) 
		printf("%s has %d years alive.\n", *(cur_name+i), *(cur_age+i));
	printf("---\n");

	// third way, pointers are just arrays
	printf("Third Way:\n");
	for (i = 0; i < count; i++) 
		printf("%s has %d years alive.\n", names[i], ages[i]);
	printf("---\n");

	// fourth way with pointers in a stupid complex way
	printf("Fourth Way:\n");
	for (cur_age = ages, cur_name = names; (cur_age - ages) < count ; cur_age++, cur_name++) {
		printf("%s lived %d years so far.\n", *cur_name, *cur_age);
	}

	return 0;
}
