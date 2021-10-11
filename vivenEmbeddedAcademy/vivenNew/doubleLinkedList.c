#include <stdio.h>
#include <stdlib.h>

struct DLL {
	struct DLL *prev;
	int info;
	struct DLL *next;
}*start;

void create_node();

int main(void)
{
	struct DLL* dll_1, *dll_2, *dll_3;
	start = dll_1;


	/* dll_1->prev = NULL; */
	/* dll_1->next = dll_2; */
	/* dll_1->info = 10; */
	/*  */
	/* dll_2->prev = dll_1; */
	/* dll_2->next = dll_3; */
	/* dll_2->info = 20; */
  /*  */
	/* dll_3->prev = dll_2; */
	/* dll_3->next = NULL; */
	/* dll_3->info = 30; */

	return 0;
}

void create_node() {
	struct DLL *tmp = (struct DLL*)malloc(sizeof(struct DLL));
	tmp->next = NULL;
	tmp->prev= NULL;

	if (start == NULL) {
		start = tmp;
	}

}
