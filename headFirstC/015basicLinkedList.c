#include <stdio.h>

typedef struct island {
	char *name;
	char *open;
	char *close;
	struct island *next;
} island;

void display(island *start) {
	island *i = start;
	for (; i != NULL; i = i->next ) {
		printf("Name: %s open: %s-%s\n", i->name, i->open, i->close);
	}
}

int main() {
	island skull = {"Skull", "09:00", "17:00", NULL};
	island craggy = {"Craggy", "09:00", "17:00", NULL};
	island isla_nublar = {"Isla Nubular", "09:00", "17:00", NULL};
	island shutter = {"Shutter", "09:00", "17:00", NULL};

	skull.next = &craggy;
	craggy.next = &isla_nublar;
	isla_nublar.next = &shutter;
	display(&skull);
}
