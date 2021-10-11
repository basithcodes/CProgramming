#include <stdio.h>
/* #include "/home/basith/Coding/mydefine.h" */

#include <strings.h>

int add_fun(int, int);

const int con = 20; // .rodata segment
int s = 20; // initiallized global variable --> .data
int z; // uninitiallized global variable --> .bss
int z1 = 0; // initiallized with zero --> global variable --> .bss
/* int add_fun(int, int); // function declaration */
static int x1 = 25;

int main() {
	static int x = 10; // .data segment
	// int x = 10;
	int y = 20;
	int res = 0;
	char a;

	/* static char a; */
	printf("Enter a character: ");
	scanf("%c", &a);
	char *str = "viven\n"; // string created by using character pointer

	printf("Calling add function\n");
	res = add_fun(x,y);

	printf("add function return: %d\n", res);
	printf("main(base address)----, %p\n", main); 
	printf("s---, %p\n", &s); 
	printf("z---, %p\n", &z);
	printf("con---, %p\n", &con);
	printf("x---, %p\n", &x);
	printf("str---, %p\n", str);

	return 0;
}

int add_fun(int x, int y) {
	return (x+y);
}
