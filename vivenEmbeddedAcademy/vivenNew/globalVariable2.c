#include <stdio.h>

int main(void)
{
	extern int a; // Its only declaration. 
	printf("%d", a);
	return 0;
}
