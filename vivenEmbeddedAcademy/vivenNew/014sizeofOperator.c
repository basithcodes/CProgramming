#include <stdio.h>

int main(void)
{
	short signed int a = 10;
	int b = 20;
	long int c = 7200;
	float x = 3.6;
	char y = 'A';
	printf("%ld %ld %ld %ld %ld\n", // 2 4 8 4 1
			sizeof(a), sizeof(b), sizeof(c), sizeof(x), sizeof(y));
	printf("%ld %ld %ld %ld\n", 
			sizeof((short)3200), sizeof(8000), sizeof(3.5), sizeof('A'));
	printf("%ld %ld %ld %ld\n", 
			sizeof(3.5f), sizeof((float)3.5), sizeof((char)'A'), sizeof(3.5F));
	printf("%ld %ld %ld %ld\n", 
			sizeof(long double), sizeof(char), 
			sizeof(long int), sizeof(long long int));
	return 0;
}
