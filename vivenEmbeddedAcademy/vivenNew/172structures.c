#include <stdio.h>
#include <string.h>

#define str char* 

int main(void) {
	typedef int number;
	typedef char* string;
	/* typedef char sname[30]; // or the above one */

	typedef char* p, q, r; // here p, q, and r will be provided int
	str x, y, z; // what is the type of x, y, z

	number a = 10, b;
	string s1, s2 = "Abdul";

	printf("%ld %ld\n", sizeof(a), sizeof(b));
	printf("%ld %s\n", sizeof(s1), s2); 


	return 0;

}
