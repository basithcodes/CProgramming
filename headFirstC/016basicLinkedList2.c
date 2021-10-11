#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct island {
	char *name;
	char *open;
	char *close;
	struct island *next;
} island;

island* create(char *name) {
	island *i = malloc(sizeof(island));
		i->name = strdup(name);
		i->open = "09:00";
		i->close = "17:00";
		i->next = NULL;
	return i;
}

void display(island *name) {
	island *i = name;
	for (; i != NULL; i = i->next) {
		printf("Name: %s open: %s close: %s\n", i->name, i->open, i->close);
	}
}

void release(island *start) {
	island *i = start;
	island *next = NULL;
	for (; i != NULL; i = next) {
		next = i->next;
		free(i->name);
		free(i);
	}
}

int main() {
	char name[80];
	fgets(name, 80, stdin);
	island *p_island1 = create(name);

	fgets(name, 80, stdin);
	island *p_island2 = create(name);

	p_island1->next = p_island2;

	display(p_island1);
	release(p_island1);

	return 0;
}
