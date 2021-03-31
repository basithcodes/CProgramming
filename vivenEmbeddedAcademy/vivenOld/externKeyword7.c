#include<stdio.h>
// file 2
extern int x; // This x can be accessed in below all functions till end of file
void increment() {
	x++;
	printf("%d\n", x);
}
