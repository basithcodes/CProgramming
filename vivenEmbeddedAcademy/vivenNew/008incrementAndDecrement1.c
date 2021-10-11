#include <stdio.h>

int main(int argc, char *argv[])
{
	int a = 5;
	++a;
	printf("%d\n", a); // 6
	a++;
	printf("%d\n", a++); // 7
	printf("%d\n", ++a); // 9
	printf("%d %d %d\n", ++a, a, a++); // 11 10 9
	printf("%d %d %d\n", a++, a++, a++); // 13 12 11
	printf("%d %d %d %d %d %d %d\n", ++a, a, a, a++, a, a, a++); //17 16 16 15 15 15 14
	printf("%d\n", a); // 17
	int x = 7;
	printf("%d %d %d %d\n", x--, x, ++x, x--); //6 6 7 7
	return 0;
}
