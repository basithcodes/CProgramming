#include<stdio.h>

int main() {
	extern int x; // not allocating memory but only accessing already allocated memory
	printf("%d\n", x);
}
int x = 10; // This x can be access by main function
