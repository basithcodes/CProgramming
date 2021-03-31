#include <stdio.h>

void read(int *array, short int elements);
void display(int *array, short int elements);

int main() {
	short int elements;
	int array[5];
	fprintf(stdout, "Enter number of elements: ");
	fscanf(stdin, "%hi", &elements);
	read(array, elements);
	display(array, elements);
	return 0;
}

void read(int *array, short int elements) {
	fprintf(stdout, "Reading: ");
	for (int i = 0; i < elements; i++) 
		fscanf(stdin, "%d", &array[i]);
}

void display(int *array, short int elements) {
	fprintf(stdout, "Displaying: \n");
	for (int i = 0; i < elements; i++) 
		fprintf(stdout, "sizeof: %ld Address: %p Content: %d\n", sizeof(array[i]), &array[i], array[i]);
}
