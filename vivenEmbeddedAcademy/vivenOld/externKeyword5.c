#include<stdio.h>
// file 2
void increment() {
	extern int x;
	x++;
	printf("%d\n", x);
}
