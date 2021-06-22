#include <stdio.h>

int a;

int main(void)
{
	extern int a; // Its only declaration. 
	/* extern int a = 100; // It gives error.  */
	printf("%d", a);
	return 0;
}
